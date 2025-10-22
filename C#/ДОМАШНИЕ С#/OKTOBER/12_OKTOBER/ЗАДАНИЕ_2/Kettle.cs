using System;
using ДОМАШНИЕ_С_.OKTOBER._12_OKTOBER;

namespace ДОМАШНИЕ_С_.OKTOBER._12_OKTOBER
{
    internal class Kettle : Device
    {
        public Kettle(string name) : base(name) { }

     
        public override void Sound()
        {
            Console.WriteLine("Звук кипения воды");
        }
        public override void Desc()
        {
            Console.WriteLine("Электрический чайник - прибор для кипячения воды");
        }
    
    }
}
