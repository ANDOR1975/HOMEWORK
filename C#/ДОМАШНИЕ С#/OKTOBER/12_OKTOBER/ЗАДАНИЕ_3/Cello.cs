using System;

namespace ДОМАШНИЕ_С_.OKTOBER._12_OKTOBER.ЗАДАНИЕ_3
{
    internal class Cello : MusicalInstrument//виолончель
    {
        public Cello(string name) : base(InstrumentType.Percussion, name) { }
        public override void Desc()
        {
            Console.WriteLine("Виолончель это смычковый инструмент");
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
