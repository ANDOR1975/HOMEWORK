////Задача 3: Игровые персонажи
////Создайте базовый класс Character с методом attack(). Реализуйте производные классы Warrior, 
////Mage и Archer, каждый из которых атакует по-разному. Используйте полиморфизм для управления атаками персонажей.
////Реализоват ьметод можно просто вписав в него cout
//#include<iostream>
//class Character
//{
//public:
//    virtual void attack() = 0;
//};
//
//class Warrior : public Character
//{
//public:
//
//    virtual void attack() override
//    {
//        std::cout << "колю"<<'\n';
//    }
//};
//
//
//class Mage : public Character
//{
//public:
//    virtual void attack() override
//    {
//        std::cout << "колдую"<<'\n';
//    }
//};
//
//class Archer : public Character
//{
//public:
//    virtual void attack() override
//    {
//        std::cout << "стреляю";
//    }
//
//};
//
//int main()
//{
//    setlocale(LC_ALL, "ru");
//   Character* bill = new Warrior();
//   bill->attack();
//
//   Character* bob = new Mage();
//   bob->attack();
//
//   Character* ben = new Archer();
//   ben->attack();
//
//   delete bill;
//   delete bob;
//   delete ben;
//
//    
//
//
//}
