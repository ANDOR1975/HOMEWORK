using System;

namespace ДОМАШНИЕ_С_.OKTOBER._12_OKTOBER.ЗАДАНИЕ_3
{
    internal class Veolo : MusicalInstrument//скрипка
    {
        public string _color;//цвет
        public Veolo(string color, string name) : base(InstrumentType.Stringed, name)
        { 
          _color = color;
        }
        public override void Desc()
        {
            Console.WriteLine("Виолончель это смычковый инструмент");
            Console.WriteLine("цвет инструмента: " + _color);
            Console.WriteLine($"инструмент  {Name} - {Type} инструмент");
        }
        public override void Sound()
        {
            Console.WriteLine("издает тоже непонятный звук");
        }
        public override void History()
        {
            Console.WriteLine("появился в 16 веке");
        }   
    }
}
