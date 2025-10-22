using System;


namespace ДОМАШНИЕ_С_.OKTOBER._12_OKTOBER.ЗАДАНИЕ_3
{
    public class MusicalInstrument
    {
        public enum InstrumentType
        {
            Stringed,//струнные
            Wind,//духовые
            Percussion//ударные
        }
        public string Name { get; set; }//название инструмента
        public InstrumentType Type { get; set; }

        public MusicalInstrument(InstrumentType type, string name)//конструктор
        {
            Name = name;
            Type = type;
        }
        public void Show()
        {
            Console.WriteLine("музыкальный инструмент " + Name);
        }
        //вирт.методы для переопределения в классах
        public virtual void Sound()
        {
            Console.WriteLine(" звук инструмента");
        }
        public virtual void Desc()
        {
            Console.WriteLine("музыкальный инструмент");
        }
        public virtual void History()
        {
            Console.WriteLine("история создания");
        }

    }
}
