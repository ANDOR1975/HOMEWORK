using System;

namespace ДОМАШНИЕ_С_.OKTOBER._12_OKTOBER
{
    internal class Device
    {
        public String Name { get; set; }//свойство
        public Device(String name)//конструктор
        {
            Name = name;
        }
        public void Show()
        { 
            Console.WriteLine("устройство " + Name); 
        }
        //вирт.методы для переопределения в классах
        public virtual void Sound()
        {
            Console.WriteLine(" звук устройства");
        }

        public virtual void Desc()
        {
            Console.WriteLine("описание устройства");
        }
    }
}
