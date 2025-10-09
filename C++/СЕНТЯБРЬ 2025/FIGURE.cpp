////Задача 1: Геометрические фигуры
////Условие:
////Создайте иерархию классов для геометрических фигур (круг, прямоугольник, треугольник).
////Реализуйте метод area(), который возвращает площадь фигуры. 
////Используя указатели на базовый класс (фигура) объявите массив фигур и вызовете метод area у всех
//#include<iostream>
//#include<cmath>
//class Figure
//{
//public:
//    virtual double area() = 0;
//};
//
//
//class Circle :public Figure
//{
//private:
//    double radius;
//public:
//    Circle(double r) :radius(r) {}
//    virtual double area() override
//    {
//        double s;
//        s = 3.14 * radius * radius;
//        return s;
//    }
//};
//
//
//class Rectangle : public Figure
//{
//private:
//    double windht;
//    double hight;
//public:
//    Rectangle(double w, double h) :windht(w), hight(h) {}
//    virtual double area() override
//    {
//        double s;
//        s = windht * hight;
//        return s;
//    }
//};
//
//
//class Triangle : public Figure
//{
//private:
//    double side1;
//    double side2;
//    double side3;
//public:
//    Triangle(double s1, double s2, double s3) :side1(s1), side2(s2), side3(s3) {}
//    virtual double area() override
//    {
//        double p;
//        double s;
//        p = (side1 + side2 + side3) / 2;
//        s = sqrt(p * (p - side1) * (p - side2) * (p - side3));
//        return s;
//    }
//};
//int main()
//{
//    Figure* figures[] = { new Circle(3),new Triangle(5,5,5 ),new Rectangle(3,4) };
//    std::cout << figures[0]->area() << '\n' << figures[1]->area() << '\n' << figures[2]->area();
//    delete figures[0];
//    delete figures[1];
//    delete figures[2];
//}
