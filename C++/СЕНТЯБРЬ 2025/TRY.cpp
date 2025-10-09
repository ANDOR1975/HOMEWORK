////Базовый try-catch
////Напишите функцию divide(int a, int b), которая генерирует исключение std::invalid_argument, если b = 0. 
////Перехватите исключение в main() и выведите сообщение.
//#include<iostream>
//#include <stdexcept>
//
//void divide(int a, int b)
//{
//    if (b == 0)
//    {
//        throw std::invalid_argument("ЧИСЛО B РАВНО 0");
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
