////�������� ���������, ������� ������ ����� � �������,
//// ������� ��� ������ ����� ����������� � ���.��� ������� 
//// ���� ������ ������� ������� �������
//#include<iostream>
//#include<map>
//#include<string>
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	std::string a;
//	std::map<std::string, int>m;
//	while (true)
//	{
//		std::cout << "������� �����-";
//		std::cin >> a;
//		if (a == "0")break;
//		m[a]++;
//	}
//	for(auto it=m.begin();it!=m.end();it++)
//	{
//		std::cout << it->first << " " << it->second << '\n';
//	}
//
// //���������� ������� ���������� �����. �������:
////add <���> <�������> � ��������/�������� �����.
////find <���> � ����� �����. ���� ����� ���,
////������� "Not found".
////del <���> � ������� ������.
//    std::cout << "telephone Book" << '\n';
//    std::map<std::string, int>telBook;
//    while (true)
//    {
//        //std::map<std::string,int>telBook;
//        std::cout << " add  ��������  " << '\n';
//        std::cout << " find ����� " << '\n';
//        std::cout << " del  ������� " << '\n';
//        std::cout << " 0    ����� -->";
//        std::string a;
//        std::cin >> a;
//        std::string name;
//        int number;
//
//        if (a == "0")break;
//        if (a == "add")
//        {
//            std::cout << "���-";
//            std::cin >> name;
//            std::cout << "�����-";
//            std::cin >> number;
//            // telBook.insert(std::make_pair(name,number));
//            telBook[name] = number;
//        }
//        if (a == "find")
//        {
//            std::cout << "��� ������- ";
//            std::cin >> name;
//            auto it = telBook.find(name);
//            if (it == telBook.end())
//            {
//                std::cout << "��� ������" << '\n';
//            }
//
//            if (it != telBook.end())
//            {
//                std::cout << it->first << " ";
//                std::cout << it->second << '\n';
//            }
//        }
//        if (a == "del")
//        {
//            std::cout << "��� ��� ��������-";
//            std::cin >> name;
//            auto it = telBook.find(name);
//            telBook.erase(it);
//        }
//    }
//}
//
//
//
//
//
//
