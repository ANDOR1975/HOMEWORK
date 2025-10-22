using System;

namespace ДОМАШНИЕ_С_.OKTOBER._12_OKTOBER.ЗАДАНИЕ__4
{
    internal class Security : Worker
    {
        public Security(string name) : base(name)
        {
        }
        public override void Print()
        {
            Console.WriteLine("\n");
            Console.WriteLine($"я охранник - {Name}");
            Console.WriteLine("сторожу всех");
        }
    }
    

    
}
