/*

#incinclude <iostream>

int int main()

{

    setlocale(LC_ALL, "ru");
    //switch - case
    //тернарный оператор условия

   /* int var = 3;
    switch (var)
    {
    case 1:
        std::cout << "1";
        break;
    case 5:
        std::cout << "5";
        break;
    default:
        break;
    }
    */

    //условие ? действие1 : действие2;
    /*
    float num;
    std::cin >> num;
    int ceil = num;
    float rest = num - ceil;
    */

    /*
    if (rest > 0.5)
        std::cout << ++ceil;
    else
        std::cout << ceil;
     */

      /*std::cout << (rest > 0.5) ? ++ceil : ceil;*/

        /*
        int number;
        std::cin >> number;
        std::cout << (number % 2 == 0 ? "чётное" : "не чётное");
        */


        //императивный подход (каждое действие на одной строке)
        //декларативный подход (одна строка может выполнять множество действий)

        //циклы
        //пользователь вводит число N, нужно ввести все целые числа от 0 до N

        /*
        int n;
        std::cin >> n;
        int currentNumber = 0;
        //цикл с условием
        while (currentNumber <= n)
        {
            std::cout << currentNumber << std::endl;
            currentNumber++;
        }
        */


        //проверить является ли число простым

        /*
        int number;
        std::cin >> number;
        int i = 2;
        while (i <= number / 2 && number % i != 0)
        {
            i++;
        }
        std::cout << (i <= number / 2 ? "число составное" : "число простое");
        */

        //второй способ

        /*
        int number;
        std::cin >> number;
        int i = 2;
        int devide = 0;
        do
        {
            devide = number % i;
            i++;
        }
        while (i <= number / 2 && devide != 0);
        */

        //третий способ
        //break прерывает цикл
        //continue - переходит к следующему повторению

        /*
        int number;
        std::cin >> number;
        int i = 2;
        while (true)
        {
            if (i > number / 2 || number % i == 0)
            {
                break;
            }
            i++;
        }
        std::cout << (i <= number / 2 ? "составное" : "простое");
        */
        //цикл с параметрами

        /*
        int n;
        std::cin >> n;
        for (int i = 1; i <= n; i++)
        {
            std::cout << i << std::endl;
        }
        */
        //как выбрать цикл
        //если заранее известно количество повторений или его можно узнать
        //то тогда лучше взять for
        //вывести таблицу умножения с числом, которое введёт пользователь
        //5
        //5 * 1 = 5
        //5 * 2 = 10....
        /*
        * 
        int number;
        std::cout << "введите число\n";
        std::cin >> number;
        for (int i = 1; i <= 10; i++)
        {
            std::cout << number << " X " << i << " = " << number * i << std::endl;
        }
        */


        //угадай моё число
    /*srand(time(NULL));
    //std::cout << rand() % 6 + 5 << std::endl;
    int userNumber;
    int computerNumber = rand() % 11; //число от 0 до 10
    do
    {
        std::cout << "Введите число ";
        std::cin >> userNumber;
        if (computerNumber > userNumber)
            std::cout << "\nМоё число больше\n";
        else if (computerNumber < userNumber)
            std::cout << "\nМоё число меньше\n";
    } while (userNumber != computerNumber);

    std::cout << "да вы угадали, это число " << computerNumber;
   */

    //факториал 5
    //!N = 1*2*3*4*5...N
    //1 1 2 3 5 8 13

// }


