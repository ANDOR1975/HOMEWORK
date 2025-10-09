//������ 2: ���������� ���������� ����� �����
//���������� ������:
//������������ ������� ���������� ������������ � ����� ����. ���������� ����� ���� �������: ����� �������� (SmartLight), ��������� (Thermostat), ������ �������� (MotionSensor). ��� ���������� ����� �������� ��� ���������, �� ������ ��� ��� ��-�������.
//���������� � ����������:
//���������� � ����������: �������� ����������� ������� ����� Device � ������� ������������ �������� void turnOn(), void turnOff() � ����������� ������������. �� ����� ������ ���������� ���������� ���������� ���������.
//����� ��������� � �����������: � ������ SmartHome �������� ��������� std::vector<std::shared_ptr<Device>> ��� �������� ���� ������������������ ���������. �����������������, ��� ��������� ���������� �������������� ������������ ����� ��������� �� ������� �����.
//��������� ����������: ���������� ����� Device& getDevice(const std::string& id) ��� ������ ���������� �� ID. ���� ���������� �� �������, ����� ������ ������������ ���������� std::out_of_range � ��������������� ����������.
//STL ���������: ���������� ����� void turnOnAllDevices(), ������� �������� ��� ����������, ��������� �������� std::for_each.
//����������� � �����������: ��������� ����������� ������ SmartHome (��������� = delete), �� ���������� ���������� ����������� (����������� � �������� �����������), ��� ������� �������� �������� ��������� ���������� ������ �������
#include<iostream>
#include<vector>
#include<memory>
#include<algorithm>
class Device
{
public:
    virtual std::string GetID() const = 0;//����������� ����� �� �������� ID
    virtual void turnOff() = 0;
    virtual void turnOn() = 0;
    virtual std::string GetTypeName()const = 0;
    virtual ~Device() = default;
};

class SmartLight : public Device
{
private:
    const std::string device_ID;
public:
    SmartLight(const std::string& ID) :device_ID(ID) {}
    //ID ��������������� ���� ��� ��� �������� � ������ �� ��������.
    virtual std::string GetID() const override { return device_ID; } //       

    virtual void turnOff() override
    {
        std::cout << "� �������� " << device_ID << " -- � �� �����!" << '\n';
    }

    virtual void turnOn() override
    {
        std::cout << "� �������� -" << device_ID << " -� �����!" << '\n';
    }

    virtual std::string GetTypeName()const override { return "SmartLight"; }
    //������� ����������� ����� ��� ������������ "��������������" ���������� ����� ������
};

class Thermostat : public Device

{
private:
    const std::string device_ID;
public:
    Thermostat(const std::string& ID) :device_ID(ID) {}
    virtual std::string GetID() const override { return device_ID; }

    virtual void turnOff() override
    {
        std::cout << "� ����������� " << device_ID << " -- �������� ����������� ���������� - �  �������� ������!" << '\n';
    }

    virtual void turnOn() override
    {
        std::cout << "� ����������� " << device_ID
            << " -- ����������� ����� �� ��������� �������� -� ������� ������ !" << '\n';
    }


    virtual std::string GetTypeName()const override { return "Thermostat"; }
};

class MotionSensor : public Device
{
private:
    const std::string device_ID;
public:
    MotionSensor(const std::string& ID) :device_ID(ID) {}
    virtual std::string GetID() const override { return device_ID; }

    virtual void turnOff() override
    {
        std::cout << "� ������ �������� " << device_ID << " -- �������� ��� - �  ����������!" << '\n';
    }

    virtual void turnOn() override
    {
        std::cout << "� ������ ������� " << device_ID << "-- �������� �������� - � �������!" << '\n';
    }


    virtual std::string GetTypeName()const override { return "MotionSensor"; }
};



class SmartHome
{
private:
    std::vector<std::shared_ptr<Device>>devices;
public:

    SmartHome() = default;//����������� �� ���������


    SmartHome(const SmartHome&) = delete;//��������� ����������� ���������,���� �������� ����� 
    //���������� �� ���� ������ ,��� ������ ������� home �� ����� ������� ������ � ������ ������������


    SmartHome(SmartHome&& other) noexcept :devices(std::move(other.devices)) {}
    //����������� ����������� ���������� �� "�������" ������� � "�����"


    SmartHome& operator=(SmartHome&& other) noexcept //��������� �����������
    {
        if (this != &other) // ���������, ��� �� �� ����������� ������ ������ ����.
        {
            devices = std::move(other.devices);
        } //������ ����� ���������� �� other ���������� � ������� ������.other.devices ���������� ������.
        return *this;
    }
    //����� ������ ����� ��������� ������� ������ �������� ��� ���������� �� other,
    //� other ������� ������.




    void addDevice(std::shared_ptr<Device>dev)//���������� � ������ ���������� ����������
    {
        devices.push_back(dev);
    }

    void turnOnAllDevices()
    {
        std::for_each(devices.begin(), devices.end(), [](std::shared_ptr<Device>& dev) { dev->turnOn();});
    }
    // [] - ������ �������. ������ - ��������, ��� ������� ������ ��� ��������� �� ��������
   //auto ������������ ����������� �������������� ������� ��� ���������.(��� ����� std::shared_ptr<Device>)
   //�������� ���������� �� ������, ����� �������� ����������� ������ ���������.
   //{ dev->turnOn(); } -dev ���� �������. ���������� dev �������� shared_ptr. ��� ������� � ������� �������, �� ������� ��������� ����� ���������,������������ �������� ->.���������� ����� turnOn() � ������� ���� Device.

    Device& getDevice(const std::string& ID)//������� � ����� ������� �������� �� ������
        //���������� ����� ID ��������� �����  ��������� �� ��� ���������� � ������� ����������
        //��� ������ std::find_if(������, �����, ��������)
    {
        auto it = std::find_if(devices.begin(), devices.end(), [&ID](std::shared_ptr<Device>dev) {return dev->GetID() == ID;});
        //����������� � ���������� it ��������� ������ ����� ��������� �� ������ GetID � ������� �������
        if (it != devices.end())
        {
            return  *(*it);//������� ��������...
        }
        throw std::out_of_range("���������� ��  �������");
    }


};

int main()
{
    setlocale(LC_ALL, "ru");
    SmartHome home;
    //�������� ���������� ����� ����� ���������
    home.addDevice(std::make_shared<SmartLight>("ID_001"));
    home.addDevice(std::make_shared<Thermostat>("ID_002"));
    home.addDevice(std::make_shared<MotionSensor>("ID_003"));
    home.addDevice(std::make_shared<Thermostat>("ID_004"));

    home.turnOnAllDevices();//��������� ���� ���������

    Device& d = home.getDevice("ID_004");   //�������� ������ �� ������� ����������
    std::cout << '\n' << d.GetID() << " ���������� ����������� � ������  - " << d.GetTypeName();
    //�������� ID  � ��� ��  ����� � �������� ����������� �����������

    SmartHome home1(std::move(home));
    //������� �������� ������������ ������ ������� ����� �.�����������  

    SmartHome home2;
    home2 = std::move(home1);
    //������� �������� ������������ ����� ���������� ������� ����� �������� �����������

    Device& d2 = home2.getDevice("ID_001");
    std::cout << '\n' << d2.GetID() << " ���������� ����������� � ������  - " << d2.GetTypeName();


    //Device& d1 = home1.getDevice("ID_004");   //�������� ������ �� ������� ����������
    //std::cout<<'\n'<<d1.GetID()<<" ���������� ����������� � ������  - "<<d1.GetTypeName();

}