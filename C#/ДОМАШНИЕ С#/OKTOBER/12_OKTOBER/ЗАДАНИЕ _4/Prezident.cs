using System;

namespace ДОМАШНИЕ_С_.OKTOBER._12_OKTOBER.ЗАДАНИЕ__4
{
    public class Prezident : Worker
    {
       public Prezident (string name) : base (name) 
        { 
        }
        public override void Print()
        {
            Console.WriteLine($"я здесь главный -  {Name}");
            
        }
    }
}
