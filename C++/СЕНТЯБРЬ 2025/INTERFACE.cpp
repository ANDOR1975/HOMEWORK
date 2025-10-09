//Задача 2: «Симулятор управления умным домом»
//Постановка задачи:
//Разработайте систему управления устройствами в умном доме. Устройства могут быть разными: Умная лампочка (SmartLight), Термостат (Thermostat), Датчик движения (MotionSensor). Все устройства можно включить или выключить, но делают они это по-разному.
//Требования к реализации:
//Интерфейсы и Абстракция: Создайте абстрактный базовый класс Device с чистыми виртуальными методами void turnOn(), void turnOff() и виртуальным деструктором. От этого класса наследуйте конкретные реализации устройств.
//Умные указатели и полиморфизм: В классе SmartHome создайте контейнер std::vector<std::shared_ptr<Device>> для хранения всех зарегистрированных устройств. Продемонстрируйте, что различные устройства обрабатываются единообразно через указатель на базовый класс.
//Обработка исключений: Реализуйте метод Device& getDevice(const std::string& id) для поиска устройства по ID. Если устройство не найдено, метод должен генерировать исключение std::out_of_range с соответствующим сообщением.
//STL Алгоритмы: Реализуйте метод void turnOnAllDevices(), который включает все устройства, используя алгоритм std::for_each.
//Копирование и перемещение: Запретите копирование класса SmartHome (используя = delete), но реализуйте корректное перемещение (конструктор и оператор перемещения), при котором владение вектором устройств передается новому объекту
#include<iostream>
#include<vector>
#include<memory>
#include<algorithm>
class Device
{
public:
    virtual std::string GetID() const = 0;//виртуальный метод дл создания ID
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
    //ID устанавливается один раз при создании и больше не меняется.
    virtual std::string GetID() const override { return device_ID; } //       

    virtual void turnOff() override
    {
        std::cout << "я лампочка " << device_ID << " -- я не свечу!" << '\n';
    }

    virtual void turnOn() override
    {
        std::cout << "я лампочка -" << device_ID << " -я свечу!" << '\n';
    }

    virtual std::string GetTypeName()const override { return "SmartLight"; }
    //добавил виртуальный метод для установления "принадлежности" устройства после поиска
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
        std::cout << "я термодатчик " << device_ID << " -- заданная температура достигнута - я  отключаю нагрев!" << '\n';
    }

    virtual void turnOn() override
    {
        std::cout << "я термодатчик " << device_ID
            << " -- температура упала до заданного минимума -я включаю нагрев !" << '\n';
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
        std::cout << "я датчик движения " << device_ID << " -- движений нет - я  отключаюсь!" << '\n';
    }

    virtual void turnOn() override
    {
        std::cout << "я датчик дижения " << device_ID << "-- внимание движение - я включён!" << '\n';
    }


    virtual std::string GetTypeName()const override { return "MotionSensor"; }
};



class SmartHome
{
private:
    std::vector<std::shared_ptr<Device>>devices;
public:

    SmartHome() = default;//контсруктор по умолчанию


    SmartHome(const SmartHome&) = delete;//запрещаем копирование полностью,дабы избежать копий 
    //указателей на один обьект ,два разных обьекта home не могут владеть одними и темеже устройствами


    SmartHome(SmartHome&& other) noexcept :devices(std::move(other.devices)) {}
    //конструктор перемещения указателей из "старого" обьекта в "новый"


    SmartHome& operator=(SmartHome&& other) noexcept //операторо перемещения
    {
        if (this != &other) // Проверяем, что мы не присваиваем объект самому себе.
        {
            devices = std::move(other.devices);
        } //Вектор умных указателей из other переезжает в текущий объект.other.devices становится пустым.
        return *this;
    }
    //после вызова этого оператора текущий объект получает все устройства из other,
    //а other остаётся пустым.




    void addDevice(std::shared_ptr<Device>dev)//добавление в массив указателей устройства
    {
        devices.push_back(dev);
    }

    void turnOnAllDevices()
    {
        std::for_each(devices.begin(), devices.end(), [](std::shared_ptr<Device>& dev) { dev->turnOn();});
    }
    // [] - список захвата. Пустой - означает, что внешние данные для обработки не доступны
   //auto предписывает компилятору самостоятельно вывести тип параметра.(это будет std::shared_ptr<Device>)
   //параметр передается по ссылке, чтобы избежать копирования умного указателя.
   //{ dev->turnOn(); } -dev тело функции. Переменная dev является shared_ptr. Для доступа к методам объекта, на который указывает умный указатель,используется оператор ->.Вызывается метод turnOn() у объекта типа Device.

    Device& getDevice(const std::string& ID)//передаём в метод искомое значение по ссылке
        //организуем поиск ID утройства через  указатель на это устройство в массиве указателей
        //при помощи std::find_if(начало, конец, предикат)
    {
        auto it = std::find_if(devices.begin(), devices.end(), [&ID](std::shared_ptr<Device>dev) {return dev->GetID() == ID;});
        //присваиваем в переменную it результат поиска через указатели по методу GetID у каждого обьекта
        if (it != devices.end())
        {
            return  *(*it);//смутное сомнение...
        }
        throw std::out_of_range("устройство не  найдено");
    }


};

int main()
{
    setlocale(LC_ALL, "ru");
    SmartHome home;
    //добавляю устройства через умный указатель
    home.addDevice(std::make_shared<SmartLight>("ID_001"));
    home.addDevice(std::make_shared<Thermostat>("ID_002"));
    home.addDevice(std::make_shared<MotionSensor>("ID_003"));
    home.addDevice(std::make_shared<Thermostat>("ID_004"));

    home.turnOnAllDevices();//включение всех устройств

    Device& d = home.getDevice("ID_004");   //получаем ссылку на искомое устройство
    std::cout << '\n' << d.GetID() << " устройство принадлежит к классу  - " << d.GetTypeName();
    //получаем ID  и так же  класс к которому устройсвтво принадлежит

    SmartHome home1(std::move(home));
    //передаю владение устройствами новому обьекту через к.перемещения  

    SmartHome home2;
    home2 = std::move(home1);
    //передаю владение устройствами ранее созданному объекту через оператор перемещения

    Device& d2 = home2.getDevice("ID_001");
    std::cout << '\n' << d2.GetID() << " устройство принадлежит к классу  - " << d2.GetTypeName();


    //Device& d1 = home1.getDevice("ID_004");   //получаем ссылку на искомое устройство
    //std::cout<<'\n'<<d1.GetID()<<" устройство принадлежит к классу  - "<<d1.GetTypeName();

}