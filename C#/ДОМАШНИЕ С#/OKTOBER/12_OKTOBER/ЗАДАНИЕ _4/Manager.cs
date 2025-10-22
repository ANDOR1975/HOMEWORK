using System;
using System.Security.Cryptography.X509Certificates;

namespace ДОМАШНИЕ_С_.OKTOBER._12_OKTOBER.ЗАДАНИЕ__4
{
    public class Manager : Worker
    {
        public Manager(string name) : base(name) { }
        public override void Print()
        {
            Console.WriteLine("Я менеджер. Меня зовут:" + Name);
            Console.WriteLine("Я ничего не делаю");
        }



    }
}
