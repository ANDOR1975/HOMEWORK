//
//
//#include <iostream>
//#include <math.h>
////int, double, 2, 3
//using namespace std;
//
//
////double multy(double value1, double value2)
////{
////    return value1 * value2;
////}
////int multy(int value1, int value2)
////{
////    return value1 * value2;
////}
////
////double square(double side)
////{
////    return side * side;
////}
////inline double square(double width, double height)
////{
////    return width * height;
////}
////double square(double a, double b, double c)
////{
////    double halfPerim = (a + b + c) / 2;
////    return sqrt(halfPerim * (halfPerim - a) * (halfPerim - b) * (halfPerim - c));
////}
////
////шаблон позвол€ет напиать функцию с неопределЄнным типом
////не все типы должны быть шаблонными
////определение шаблонного типа (Type) происходит
////в момент вызова функции
////шаблонный тип определ€етс€ по тому типу, который передан вместо него
////каждый вызов шаблонной функции с новыми типами, приводит к созданию нового экземпл€ра
////template <typename Type1, typename Type2>
////double function(Type1 val1, Type2 val2)
////{
////    return val1 * val2;
////}
//
//
////int f(int a, int b)
////{
////    return 1;
////}
////template <typename T>
////T f(T a, T b)
////{
////    T var = a * b;
////}
//
////дополнительные экзепл€ры
////-при перегрузке нужно писать каждый вариант
////+шаблон пишетс€ один раз и работает с любыми типами
//
////вызов
////+при перегрузке вызов происходит сразу же
////-шаблон сначала создаЄт спецификацию, а потом еЄ вызывает
//
////реализаци€
////+при перегрузке реализаци€ может отличатьс€
////-шаблон всегда работает одинаково
//
////пам€ть
////-все экзепл€ры перегрузки хрн€тьс€ в пам€ти приложени€
////+спецификации шаблона создаютс€ при необходимости
//
//
////void recursive(int value)
////{
////    std::cout << value;
////    if (value <= 0) return;
////    recursive(value - 1);
////}
////
////int fact(int value)
////{
////    /* if (value == 1) return 1;
////     else            return value * fact(value - 1);*/
////    return (value == 1 ? 1 : value * fact(value - 1));
////    //условие ? дейстиве : действие
////}
////
////int pow(int number, int degree)
////{
////    if (degree == 1) return number;
////    return number * pow(number, degree - 1);
////}
////
//
//int hoar(int arr[], int left, int right)
//{
//    int piv = left+(right - left) / 2;
//    int pig = arr[piv];
//    int l = left - 1;
//    int r = right + 1;
//    while (true)
//    {
//        do
//        {
//            l++;
//        } while (arr[l] < pig);
//        do
//        {
//            r--;
//        } while (arr[r] > pig);
//        if (l >= r)
//        {
//            return r;
//        }
//        int temp = arr[l];
//        arr[l] = arr[r];
//        arr[r] = temp;
//    }
//}
//void quickSort(int arr[], int left, int right)
//{
//    if (left < right)
//    {
//        int pivot = hoar(arr, left, right);
//        quickSort(arr, left, pivot);
//        quickSort(arr, pivot + 1, right);
//    }
//}
//int main()
//{
//    //std::cout << square(5, 3);
//    //std::cout << function(2.0, 3);
//    int testArray[5] = { 3,9, 5, 11, 1};
//    quickSort(testArray, 0, 4);
//
//
//    for (int i = 0; i <= 4; i++)
//        cout << testArray[i]<< "  ";
//
//    return 0;
//}
//
