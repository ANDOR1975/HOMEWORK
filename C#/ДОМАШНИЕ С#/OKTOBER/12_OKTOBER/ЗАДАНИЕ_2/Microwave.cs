using System;
using ДОМАШНИЕ_С_.OKTOBER._12_OKTOBER;

namespace ДОМАШНИЕ_С_.OKTOBER._12_OKTOBER
{
    internal class Microwave : Device
    {
public Microwave(string name) : base(name) { }
        public override void Sound()
        {
            Console.WriteLine("нудный пи");
        }
        public override void Desc()
        {
            Console.WriteLine("СВЧ - бытовой прибор для разогрева ");
        }


    }
}
