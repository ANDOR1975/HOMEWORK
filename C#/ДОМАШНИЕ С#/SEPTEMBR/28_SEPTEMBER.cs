using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ДОМАШНИЕ_С_.SEPTEMBR
{
    internal class R
    {
        public void T()
        {

            /* Console.WriteLine("It's easy to win forgiveness for being wrong;");
             Console.WriteLine("being right is what gets you into real trouble.");
             Console.WriteLine("Bjarne Stroustrup");*/

            //            Задание 2
            //Пользователь вводит с клавиатуры пять чисел. Необходимо найти сумму чисел, максимум и минимум из
            //пяти чисел, произведение чисел. Результат вычислений
            //вывести на экра

            /*
             Console.WriteLine("введите пять чисел -");
             //[] inputs = Console.ReadLine().Split();
             //как вариан в строку через пробел
             var a = Console.ReadLine();
             var a1 = Console.ReadLine();
             var a2 = Console.ReadLine();
             var a3 = Console.ReadLine();
             var a4 = Console.ReadLine();
             var summ = int.Parse(a) + int.Parse(a1) + int.Parse(a2) + int.Parse(a3) + int.Parse(a4);
             var aa = int.Parse(a);
             var aa1 = int.Parse(a1);
             var aa2 = int.Parse(a2);
             var aa3 = int.Parse(a3);
             var aa4 = int.Parse(a4);
             Console.WriteLine("сумма равна - " + summ);
             Console.WriteLine("произведение  - " + aa * aa1 * aa2 * aa3 * aa4);

             int[] mass = { aa, aa1, aa2, aa3, aa4 };
             var max = 0;

             for (var i = 0; i < 5; i++)
             {
                 if (mass[i] > max) max = mass[i];
             }
             Console.WriteLine("большее -" + max);

             var min = mass[0];
             for (var i = 0; i < 5; i++)
             {
                 if (mass[i] < min) min = mass[i];
             }
             Console.WriteLine("меньшее -" + min);
            */



            //            Задание 3
            //Пользователь с клавиатуры вводит шестизначное число.
            //Необходимо перевернуть число и отобразить результат.
            //Например, если введено 341256, результат 652143.

            /*
             Console.WriteLine("введите шесть цифр -");
             var input = Console.ReadLine();
             char[] arr = input.ToCharArray();
             int index = 0;
             for (int i = 5; i > 3; i--)
             {
                 var temp= arr[index];
                 arr[index] = arr[i];
                 arr[i] = temp;
                 index++;
             }
             Console.WriteLine(arr);
            */



            /*задание 4
             Пользователь вводит с клавиатуры границы числового
            диапазона.Требуется показать все числа Фибоначчи из
            этого диапазона. Числа Фибоначчи — элементы числовой
            последовательности, в которой первые два числа равны 0
            и 1, а каждое последующее число равно сумме двух пре-
            дыдущих чисел.Например, если указан диапазон 0–20,
            результат будет: 0, 1, 1, 2, 3, 5, 8, 13.*/


            /*Console.WriteLine("введите два числа через пробел ");
            
            int first = int.Parse(Console.ReadLine());
            int end = int.Parse(Console.ReadLine());
            //ряд фибоначчи до n числа
            int start = 0;
            int fib=0;
            int f1 = 0;
            int f2 = 1;
           // Console.WriteLine(fib);
                while(fib <= end)
                {
                    fib = f1 + f2;
                    f1 = f2;
                    f2 = fib;
                    start++;
                if( fib >= first && fib <= end )
                    Console.WriteLine(fib);
                }
            */


            /*Даны целые положительные числа A и B(A < B).Вы -
            вести все целые числа от A до B включительно; каждое
            число должно выводиться на новой строке; при этом ка -
            ждое число должно выводиться количество раз, равное
            его значению.Например: если А = 3, а В = 7, то программа
            должна сформировать в консоли следующий вывод:*/

            /* Console.WriteLine("введите два числа через ENTER");
             int first = int.Parse(Console.ReadLine());
             int end = int.Parse(Console.ReadLine());
             int index = first;
             while (index <= end)
             {
                 for (int i = 0; i < index; i++)
                 { Console.Write(index + " "); }
                 Console.Write('\n');
                 index++;
             }*/


            /*Задание 6
Пользователь с клавиатуры вводит длину линии, сим-
вол заполнитель, направление линии(горизонтальная,
вертикальная). Программа отображает линию по заданным
параметрам.Например: +++++.
Параметры линии: горизонтальная линия, длина равна
пяти, символ заполнитель +.*/



            Console.WriteLine("введите длинну линии -");
            int first = int.Parse(Console.ReadLine());
            Console.WriteLine("введите направление горизонтально -1 ,  вертиально - 2");
            int end = int.Parse(Console.ReadLine());
            while (first > 0)
            {
                if (end == 2)
                { Console.Write("*"); }
                if (end == 1)
                { Console.WriteLine("*"); }
                first--;
            }

        }



    }
}
