using System;

namespace ДОМАШНИЕ_С_.OKTOBER._12_OKTOBER.ЗАДАНИЕ__4
{
    internal class Engineer : Worker
    {
        public Engineer(string name) : base(name)
        {
        }
        public override void Print()
        {
            Console.WriteLine("\n");
            Console.WriteLine($"я инженер - {Name}");
            Console.WriteLine("работаю на стройке");
        }
    }
}
