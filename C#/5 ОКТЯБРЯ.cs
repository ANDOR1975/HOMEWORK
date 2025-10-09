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
            // Здесь можно сделать меню для выбора задания
            Console.WriteLine("Выберите задание (1-9):");
            int choice = int.Parse(Console.ReadLine());

            switch (choice)
            {
                case 1: Task1(); break;
                case 2: Task2(); break;
                case 3: Task3(); break;
                    // case 3: Task3(); break;
                    // ... и так для всех заданий
            }
        }
        //Метод для задания 1
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
                { cout++; }
                else cout2++;
            }
            HashSet<int> uniqueCout = new HashSet<int>(arr);
            cout3 = uniqueCout.Count;
            Console.Write('\n');
            Console.WriteLine("количество уникальных чисел - " + cout3);
            Console.WriteLine("количество чётных - " +cout);
            Console.WriteLine("количество нечётных -" +cout2);

        }

        // Метод для задания 2
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
            var a = Console.ReadLine();
            int value = int.Parse(a);
            int count = 0;
            for( int i = 0; i < arr.Length;i++)
            {if (arr[i] < value) count++; }
            Console.WriteLine("Количество чисел меньше " + value + ": " + count);
        }
        // Метод для задания 3
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
            Console.WriteLine("введите числа через enter ");
            int a = int.Parse(Console.ReadLine());
            var b = int.Parse(Console.ReadLine());
            var c = int.Parse(Console.ReadLine());
            int count = 0;//счётчик совпадений
            for( int i =0;i < arr.Length-2;i++)
            {
                if (arr[i] == a && arr[i + 1] == b && arr[i + 2] == c)
                { count++; }


            }
            Console.WriteLine("Количество повторений последовательности: " + count);

        }
    }
}