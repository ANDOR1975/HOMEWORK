////������� try-catch
////�������� ������� divide(int a, int b), ������� ���������� ���������� std::invalid_argument, ���� b = 0. 
////����������� ���������� � main() � �������� ���������.
//#include<iostream>
//#include <stdexcept>
//
//void divide(int a, int b)
//{
//    if (b == 0)
//    {
//        throw std::invalid_argument("����� B ����� 0");
//    }
//
//    std::cout << a / b;
//}
//
//int main()
//{
//    setlocale(LC_ALL, "ru");
//    try
//    {
//        divide(16, 0);
//
//    }
//
//    catch (const std::invalid_argument& exp)
//    {
//        std::cout << exp.what();
//
//    }
//
//}
//
