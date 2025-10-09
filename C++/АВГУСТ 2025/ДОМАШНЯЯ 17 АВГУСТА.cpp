////1) ќбъ€вить вектор целых чисел и, использу€ только 
//// итератор и цикл, вывести все значени€
////ѕовторить процедуру дл€ структуры list
////—равните код, что бы лучше пон€ть механику итератора
////
////2) Ќаписать программу, котора€ будет запрашивать у пользовател€ целые числа, пока он не введЄт 0
////числа необходимо хранить в векторе
////вывести среднее арифметическое значение дл€ элементов
//// вектора, а так же минимальное и максимальное
////
////3) объ€вить список(list) из 10 элементов, использу€
//// только цикл и итераторы вывести все элементы кратные 
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
//        std::cout << "введите число - ";
//        std::cin >> a;
//        if (a != 0)
//        {
//            R3.push_back(a);
//        }
//    }
//
//    while (a != 0);
//    std::cout << "ввод окончен вы ввели 0 ";
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
//    std::cout << '\n' << "cреднеарефм.= ";
//    srednee = summ / count;
//    std::cout << srednee;
//
//    std::cout << '\n' << "максимальное = " << max;
//    std::cout << '\n' << "минимальное  = " << min << '\n';
//
//    srand(time(NULL));
//    std::cout << '\n';
//    std::cout << "кратные трЄм - ";
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
