////Задача  Сотрудники компании
////Базовы класс Employee с полями name и salary.
////Производный класс Manager добавляет поле department 
//// и метод printInfo().
//#include<iostream>
//class Employee
//{
//protected:
//    std::string name;
//    int salary;
//public:
//    Employee() :name(""), salary(0) {}
//    Employee(std::string name, int salary)
//    {        SetName(name); SetSalary(salary);      }
//    void SetName(std::string n)
//    {      if (n != "") name = n;else  throw"1";     }
//    void SetSalary(int s)
//    {      if (s > 0)salary = s;else   throw"2";     }
//    int getSalary() { return salary; }
//    std::string getName() { return name; }
//};
//
//class Manager :public Employee
//{
//private:
//    std::string department;
//public:
//    Manager() :department("") {}
//    Manager(std::string a) :department(a) {}
//    Manager(std::string a, int s, std::string d) :
//        Employee(a, s), department(d) {}  
//    void printInfo()
//    {
//        std::cout << name << '\n' << salary << '\n' << department << '\n';
//    }
//};
//int main()
//{
//    Employee W("BOB", 26);
//    Manager dat("DOD",20,"SALE");
//    dat.printInfo();
//
//}
