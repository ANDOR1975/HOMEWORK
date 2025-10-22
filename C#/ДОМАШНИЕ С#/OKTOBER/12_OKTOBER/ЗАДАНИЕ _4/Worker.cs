using System;

namespace ДОМАШНИЕ_С_.OKTOBER._12_OKTOBER.ЗАДАНИЕ__4
{
   public abstract class Worker
    {
       public string Name { get; set; }
        public Worker (string name)
        {
            Name = name;
        }
        public abstract void Print();
    }
}
        