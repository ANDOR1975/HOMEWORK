using System;

namespace ДОМАШНИЕ_С_.OKTOBER._12_OKTOBER.ЗАДАНИЕ_3
{
    internal class Trombon : MusicalInstrument
    {
        public int _tubeLength;//длинна трубки
        public Trombon(int tubeLength, string name) : base(InstrumentType.Wind, name)
        {

            _tubeLength = tubeLength; ; 
        }

        public override void Desc()
        {
            Console.WriteLine($"инструмент {Name} - {Type}  инструмент");
            Console.WriteLine("Количество струн: " + _tubeLength);
        }
        public override void Sound()
        {
            Console.WriteLine("издает непонятный звук");
        }
        public override void History()
        {
            
            Console.WriteLine("появился в 15 веке");
        }
        

    }
}
