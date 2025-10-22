using System;

namespace ДОМАШНИЕ_С_.OKTOBER._12_OKTOBER
{
    internal class Car :Device
    {
        public Car(string name) : base(name){ }

        public override void Sound()
        {
          Console.WriteLine("издает звук: ppp");
        }
        public override void Desc()
        {
            Console.WriteLine("Машина средство передвижения");
        }
    }
}
