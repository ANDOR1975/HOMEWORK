////�������� ����� Device (��������, �������� ������������ ����������). 
////�������� ����� Controller, ������� �������� ����� ������� ��������� �� Device � �������� ��� ����� show(), ��������� � ���� ��� ���������
////��������� �������� Controller ������ ��������� ������������ ���� Device ����� std::shared_ptr.
//#include<iostream>
//#include<memory>
//class Device
//{
//
//public:
//
//    void show(std::string& message)
//    {
//        std::cout << message<<'\n';
//    }
//};
//
//class Controller
//{
//protected:
//    std::shared_ptr<Device>device_ptr;
//    std::string message;
//public:
//    Controller(std::shared_ptr<Device> rew, std::string row) :device_ptr(rew), message(row) {}
//    void collShow()
//    {
//        device_ptr->show(message);
//    }
//};
//int main()
//{
//    setlocale(LC_ALL, "ru");
//    std::shared_ptr<Device>w1 = std::make_shared<Device>();
//    
//    Controller s1(w1,"��������");
//    s1.collShow();
//
//    Controller s2(w1, "�������");
//    s2.collShow();
//}
//
