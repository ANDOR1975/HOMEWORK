using System;

namespace ДОМАШНИЕ_С_.OKTOBER._12_OKTOBER
{
    internal class Steamship : Device
    {
        public Steamship(string name) : base(name) { }
        public override void Sound()
        {
            Console.WriteLine("сильно гудит");
        }
        public override void Desc()
        {
            Console.WriteLine("Пароход - паровоая машина");
        }
    



    }
}
