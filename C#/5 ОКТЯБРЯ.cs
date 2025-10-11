using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ДОМАШНИЕ_С_
{
    internal class Class1
    {
        static void Main(string[] args)
        {
//  меню для выбора задания
            Console.WriteLine("Выберите задание (1-9):");
            int choice = int.Parse(Console.ReadLine());

            switch (choice)
            {
                case 1: Task1(); break;
                case 2: Task2(); break;
                case 3: Task3(); break;
                case 4: Task4(); break;
                case 5: Task5(); break;
                case 6: Task6(); break;
                case 7: Task7(); break;
                case 8: Task8(); break;
                case 9: Task9(); break;
            }
        }
 //Метод для задания 1 
        /*Создайте приложение, которое отображает количество
        чётных, нечётных, уникальных элементов массива
        применён метод HashSet<> uniqueCout
        с помощью его получмл количество уникальных элементов
        в массиве */
        static void Task1()
        {
            Random rand = new Random();
            int[] arr = new int[5];
            for (int i = 0; i < arr.Length; i++)
            {
                arr[i] = rand.Next(1, 25);
                Console.Write(" "+(arr[i]));
            }
            int cout = 0;//счётчик нечётных чисел
            int cout2 = 0;//счётчик чётных числе
            int cout3 = 0;//счётчик уникальных чисел
            for (int i = 0; i < arr.Length; i++)
            {
                if (arr[i] % 2 == 0)
                { cout2++; }
                else cout++;
            }
            HashSet<int> uniqueCout = new HashSet<int>(arr);
            cout3 = uniqueCout.Count;
            Console.Write('\n');
            Console.WriteLine("количество уникальных чисел - " + cout3);
            Console.WriteLine("количество чётных  :  " +cout);
            Console.WriteLine("количество нечётных : " +cout2);

        }
        // Метод для задания 2
        /*Создайте приложение, отображающее количество
        значений в массиве меньше заданного параметра пользо-
        вателем.*/
        static void Task2()
         {
            Random rand = new Random();
            int[] arr = new int[5];
            for (int i = 0; i < arr.Length; i++)
            {
                arr[i] = rand.Next(1, 25);
                Console.Write(" " + (arr[i]));
            }
            Console.WriteLine('\n');
            Console.Write("введите число - ");
            if(int.TryParse(Console.ReadLine(),out int a))
            {
                Console.WriteLine("вы ввели число  : " + a );
            }
            else
            {
                Console.WriteLine("ошибка-введено не число");
                return;
            };
                int count = 0;
            for( int i = 0; i < arr.Length;i++)
            {if (arr[i] < a) count++; }
            Console.WriteLine("Количество чисел меньше " + a + ": " + count);
         }
        // Метод для задания 3
        /*Пользователь вводит с клавиатуры три числа. Необхо-
        димо подсчитать сколько раз последовательность из этих
        трёх чисел встречается в массиве.*/
        static void Task3()
        {
            Random rand = new Random();
            int[] arr = new int[30];
            for (int i = 0; i < arr.Length; i++)
            {
                arr[i] = rand.Next(1, 5);
                Console.Write(" " + (arr[i]));
            }
            Console.WriteLine('\n');
            Console.WriteLine("введите 3 числа через enter : ");
            if(int.TryParse(Console.ReadLine(),out int a ))
            {
                Console.WriteLine("вы ввели число : " + a);
            }
            else
            {
                Console.WriteLine("ошибка-введено не число");
                return;
            }

            if (int.TryParse(Console.ReadLine(), out int b))
            {
                Console.WriteLine("вы ввели число : " + b);
            }
            else
            {
                Console.WriteLine("ошибка-введено не число");
                return;
            }
            if (int.TryParse(Console.ReadLine(), out int c))
            {
                Console.WriteLine("вы ввели число  : " + c);
            }
            else
            {
                Console.WriteLine("ошибка-введено не число");
                return;
            }
            int count = 0;//счётчик совпадений
            for (int i = 0; i < arr.Length - 2; i++)
            {
                if (arr[i] == a && arr[i + 1] == b && arr[i + 2] == c)
                { count++; }
            }
            Console.WriteLine("Количество повторений последовательности : " + count);
        }
        //Метод для задания 4
        /*Даны 2 массива размерности M и N соответственно.
        Необходимо переписать в третий массив общие эле-
        менты первых двух массивов без повторений.*/
        static void Task4()
            {
                Random rand = new Random();
                int[] arr = new int[25];
                for (int i = 0; i < arr.Length; i++)
                {
                    arr[i] = rand.Next(1, 25);
                    Console.Write(" " + (arr[i]));
                }
             Random rand1 = new Random();
             int[] arr1 = new int[25];
             Console.WriteLine('\n');
             for (int i = 0; i < arr1.Length; i++)
             {
                arr1[i] = rand1.Next(1, 25);
                Console.Write(" " + (arr1[i]));
             }
             List<int> result = new List<int>();
            //пустой динамический список для результатов
            foreach (int num in arr)
            //перебираю каждый элемент первого массива
            { if (arr1.Contains(num)&&!result.Contains(num)) result.Add(num);}
            //проверяю есть ли во втором массиве число или в результатах и
            //добавляю число в результат
             if (result.Count == 0) { Console.WriteLine("совпадений нет! ");return; }
             int[] arr3=result.ToArray();
             Console.WriteLine('\n');
             Console.Write("итоговый массив : ");
              for(int i =0; i <arr3.Length;i++)
              { Console.Write(" "+arr3[i]); }
            }
//метод для задания 5
        /*Разработайте приложение, которое будет находить ми-
        нимальное и максимальное значение в двумерном массиве
        реализовано в методе :
        GetLength - метод, который возвращает размер массив
        по указанному измерению.
        GetLength(0) - возвращает количество строк(первое измерение)
        GetLength(1) - возвращает количество столбцов(второе измерение)*/
        static void Task5()
        {
          Random rand = new Random();
            int[,] arr= new int[5,5];
            for (int i=0; i< arr.GetLength(0);i++)
            { 
              for ( int j =0; j < arr.GetLength(1);j++)
                {
                    arr[i,j]= rand.Next(1, 25);//числа от 1 до 25
                    Console.Write(" "+arr[i,j]);
                }
              Console.WriteLine();//переход на следующую строку
            }
            //поиск min max
            int min = arr[0, 0];//присвою первому в массиве
            int max = arr[0, 0];
            for (int i = 0; i < arr.GetLength(0); i++)
            {
                for (int j = 0; j < arr.GetLength(1); j++)
                {
                   if (arr[i,j] < min)  min = arr[i,j]; 
                   if (arr[i,j] > max)  max = arr[i,j]; 
                }
            }
            Console.WriteLine("максимум  : "+max);
            Console.WriteLine("минимум   :  "+min) ;
        }
 //метод задания 6
        /*Пользователь вводит предложение с клавиатуры. Вам
        необходимо подсчитать количество слов в нём.
        Pеализация - создание массива из слов путём разделения 
        строки на отдельные слова через поиск и удаление пробелов.
        использавны методы:
        string.Split() - разделение строки на массив слов
        StringSplitOptions - перечисление вариантов разделения строки
        RemoveEmptyEntries - "удалить пустые записи"
        */
        static void Task6()
        {
            Console.WriteLine("введите строку : ");
            string input =  Console.ReadLine();
            string[] words = input.Split(' ', StringSplitOptions.RemoveEmptyEntries);
            int count = words.Length;
            Console.WriteLine("количество слов  : " + count);
        
        }
        //метод задания 7
        /*Пользователь вводит предложение с клавиатуры. Вам
        необходимо перевернуть каждое слово предложения и
        отобразить результат на экран
         раализация :
        "abc def" → ["abc", "def"] → ["cba", "fed"] → "cba def"
        Split - разделяет строку на массив слов по указанному разделителю
        ToCharArray - преобразует строку в массив символов 
        Array.Reverse - переворачивает массив (первый элемент становится последним)
        string.Join - объединяет массив строк в одну строку с указанным разделителем
            */
        static void Task7()
        {
            Console.WriteLine("введите строку : ");
            string wordls = Console.ReadLine();
            //разделяю слова  м делаю массив из слов
            string[] arrWorlds = wordls.Split(' ',StringSplitOptions.RemoveEmptyEntries);
            for (int i = 0; i < arrWorlds.Length; i++)
            {
                char[] chars = arrWorlds[i].ToCharArray();/*создаю массив char
                из каждого слова массива arrWorld,путём преобразования */
                Array.Reverse(chars);//переворачиваю символы
                arrWorlds[i] = new string(chars);//меняю слово на перевёрнутое
            }
            //собираю обратно слова в строку с проблами
            string result = String.Join(" ", arrWorlds);
            Console.WriteLine(result);
        
        }

        //метод задания 8
        /*Пользователь вводит с клавиатуры предложение. При-
        ложение должно посчитать количество гласных букв в нём.
        /*использованы методы:
        ToLower() - преобразует все символы строки в нижний регистр
        Contains() - проверяет, содержится ли символ/строка в другой строке или коллекции
            */
        static void Task8()
        {
            Console.WriteLine("введите предложение  а я посчитаю количество " +
                "гласных букв в нём. - ");
            string wordls = Console.ReadLine();
            //создаём массив из гласных для проверки
            char[] vowels = { 'а', 'е', 'ё', 'и', 'о', 'у', 'ы', 'э',
            'ю', 'я', 'a', 'e', 'i', 'o', 'u', 'y' };
            int count = 0; //счётчик гласных букв
            foreach (char c in wordls.ToLower()) /*перебираем массив напрямую 
            преобразуя заглавные буквы если есть в строчные*/
            {
                if (vowels.Contains(c)) count++;
            }

            Console.WriteLine("количество гласных : " + count);
        }
        //метод задания 9
        /*Реализуйте приложение для подсчёта количество вхож-
        дений подстроки в строку. Пользователь вводит исходную
        строку и слово для поиска. Приложений отображает ре-
        зультат поиска.
        использованы методы :
        IndexOf для поиска каждого следующего вхождения*/
        static void Task9()
        {
            Console.Write("введите предложение : ");
            string wordls = Console.ReadLine();
            Console.Write("введите слово для проверки ,я посчитаю" +
                " сколько раз оно встречаеться в предложении : ");
            string wordl = Console.ReadLine();
            int index = 0;//позиция в строке для поиска
            int count = 0;//счётчик найденных совпадений
            while ((index = wordls.IndexOf(wordl, index))!= -1) 
            /*IndexOf ищет подстроку начиная с позиции index,если не нашёл
             возращает -1, если нашёл то сохраняее в переменную index */
            {
                count++;
                index += wordl.Length;//к позиции прибавляет длинну искомого слова
            }
            Console.WriteLine("результат поиска  : " + count);
        }
    }
}