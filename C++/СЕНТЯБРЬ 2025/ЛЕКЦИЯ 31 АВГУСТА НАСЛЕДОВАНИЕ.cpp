//
//#include <iostream>
//#include <map>
//#include <string>
//#include <unordered_set>
//#include <unordered_map>
//
////������������
//
//class Parent
//{
//protected:
//    int power;
//public:
//    void setPower(int value)
//    {
//        if (value >= 10) power = value;
//        else throw "";
//    }
//    int getPower() { return power; }
//    Parent(int power)
//    {
//        setPower(power);
//    }
//    void move()
//    {
//        std::cout << "� ��������� � ���";
//    }
//};
//
//class Child1 : public Parent
//{
//private:
//    int max_speed;
//public:
//    void setSpeed(int value)
//    {
//        if (value >= 0) max_speed = value;
//        else throw "";
//    }
//    int getSpeed() { return max_speed; }
//
//    Child1(int power, int max_speed) : Parent(power)
//    {
//        setSpeed(max_speed);
//    }
//
//};
//
////������������ (���������) - �������� ��� ������� ���� ����� (�������) ��������� � ��������� ������ �����. 
////���� ����� (��������) �������� ������ ������ (�������� ����� ��� ��� ����������)
////����������� ������� ������ �������� ����������� ������ ��������
////����������� ��� ������������ ���������� �� ������� � ��������
////private ���� �������� ������ ������ ������ ������
////protected ���� �������� ������ ������ ������ � ��������
////public - �������� ��������
//
//
//int main()
//{
//    Child1 c(100, 120);
//    std::cout << c.getPower() << " " << c.getSpeed();
//    /*std::map <std::string, int> m;
//    std::string text;
//
//    std::getline(std::cin, text);
//    std::cout << text;
//
//    std::string word;
//    for (auto c : text)
//    {
//        if (c != ' ')
//        {
//            word += c;
//        }
//        else if ((c >= 33 && c <= 47) || (c >= 58 && c <= 64))
//        {
//            continue;
//        }
//        else
//        {
//            m[word]++;
//            word.clear();
//        }
//    }
//    if (!word.empty())
//    {
//        m[word]++;
//        word.clear();
//    }*/
//
//    /*std::map<std::string, std::string> phones;
//
//    while (true)
//    {
//        std::string command;
//        std::cout << "������� �������: " << std::endl;
//        std::cin >> command;
//        if (command == "add")
//        {
//            std::cout << "������� ���: " << std::endl;
//            std::string name;
//            std::cin >> name;
//            std::cout << "������� �����:" << std::endl;
//            std::string phone;
//            std::cin >> phone;
//
//            if (phones.find(name) == phones.end())
//                phones[name] = phone;
//            else
//                std::cout << "����� ��� ��� ����������";
//        }
//        else if (command == "del")
//        {
//            std::cout << "������� ���" << std::endl;
//            std::string name;
//            std::cin >> name;
//            phones.erase(name);
//        }
//        else if (command == "find")
//        {
//            std::cout << "������� ���" << std::endl;
//            std::string name;
//            std::cin >> name;
//            std::map<std::string, std::string>::iterator it = phones.find(name);
//            if (it == phones.end())
//                std::cout << "������� �� ������" << std::endl;
//            else
//                std::cout << it->second << std::endl;
//
//        }
//        else if (command == "stop")
//            break;
//    }*/
//
//    //std::unordered_set<int> us;
//    ////us.bucket_size(5);
//    ////us.bucket();
//    ////std::cout << us.max_bucket_count();
//    ////us.rehash(16);
//    //std::cout << us.bucket_count() << " " << us.size() << std::endl;
//    //us.insert(0);
//    //us.insert(8);
//    //us.insert(5);
//    //us.insert(11);
//    //us.insert(2);
//    //std::cout << us.bucket_count() << " " << us.size() << std::endl;
//    //for (auto v : us)
//    //{
//    //    std::cout << v << " ";
//    //}
//    //
//    //std::unordered_map<int, std::string> um;
//    //um[6] = "�����";
//    //std::cout << um[6];
//    return 0;
//}
