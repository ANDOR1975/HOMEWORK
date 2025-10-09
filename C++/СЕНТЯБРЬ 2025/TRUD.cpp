////Задача 2: Система оплаты трудf
////Условие:
////Создайте базовый класс Employee и производные классы HourlyEmployee (почасовая оплата) и SalariedEmployee (фиксированная зарплата). Реализуйте метод calculatePay(), который считает зарплату в зависимости от типа сотрудника.
//#include<iostream>
//class Employee
//{
//public:
//    virtual double calculatePay() = 0;
//};
//
//class HourlyEmployee : public Employee
//{
//private:
//    double hour;
//    double stavka;
//public:
//    HourlyEmployee(double h, double s) :hour(h), stavka(s) {}
//    double calculatePay() override
//    {
//        double zp;
//        zp = hour * stavka;
//        return zp;
//    }
//
//};
//class SalariedEmployee :public Employee
//{
//private:
//    double fix;
//public:
//    SalariedEmployee(double f) :fix(f) {}
//    double calculatePay() override
//    {
//        return fix;
//
//    }
//};
//int main()
//{
//    Employee* worker1 = new SalariedEmployee(180);
//    std::cout << worker1->calculatePay()<<'\n';
//    Employee* worker2 = new HourlyEmployee(8, 180);
//    std::cout << worker2->calculatePay();
//
//    delete worker1;
//    delete worker2;
//
//
//}
