////1) �������� ������ ����� ����� �, ��������� ������ 
//// �������� � ����, ������� ��� ��������
////��������� ��������� ��� ��������� list
////�������� ���, ��� �� ����� ������ �������� ���������
////
////2) �������� ���������, ������� ����� ����������� � ������������ ����� �����, ���� �� �� ����� 0
////����� ���������� ������� � �������
////������� ������� �������������� �������� ��� ���������
//// �������, � ��� �� ����������� � ������������
////
////3) �������� ������(list) �� 10 ���������, ���������
//// ������ ���� � ��������� ������� ��� �������� ������� 
//#include<iostream>
//#include<vector>
//#include<list>
//#include<ctime>
//int main()
//{
//    setlocale(LC_ALL, "ru");
//    std::vector<int> R1 = { 22,34,56,36,76 };
//    std::vector<int>::iterator it = R1.begin();
//    for (;it != R1.end();it++)
//    {
//        std::cout << *it << " " << &(*it) << '\n';
//    }
//
//    std::list<int> R2 = { 22,43,56,36,76 };
//    std::list<int>::iterator is = R2.begin();
//    for (;is != R2.end();is++)
//    {
//        std::cout << *is << " " << &(*is) << '\n';
//    }
//
//    std::vector<int> R3 = {};
//    int  a;
//    double srednee=0;
//    double count=0;
//    double summ=0;
//    int max = 0;
//    int min = 0;
//    do
//    {
//        std::cout << "������� ����� - ";
//        std::cin >> a;
//        if (a != 0)
//        {
//            R3.push_back(a);
//        }
//    }
//
//    while (a != 0);
//    std::cout << "���� ������� �� ����� 0 ";
//    std::cout << '\n';
//    std::vector<int>::iterator in = R3.begin();
//    for (;in != R3.end();in++)
//    {
//        std::cout << *in << " ";
//        summ += *in;
//        count++;
//        if (max < *in) { max = *in; }
//        if (min > *in) { min = *in; }
//    }
//
//    std::cout << '\n' << "c����������.= ";
//    srednee = summ / count;
//    std::cout << srednee;
//
//    std::cout << '\n' << "������������ = " << max;
//    std::cout << '\n' << "�����������  = " << min << '\n';
//
//    srand(time(NULL));
//    std::cout << '\n';
//    std::cout << "������� ��� - ";
//    std::list<int> L1(10);
//    std::list<int>::iterator ip = L1.begin();
//    for (int i = 0;i < 10;i++)
//    {
//        *ip = i + rand() % 10;
//        if (*ip % 3 == 0)
//        {
//            std::cout << *ip << " ";
//        }
//        ip++;
//    }
//
//
//}
//
//
//
