////Задача 1: Геометрические фигуры
////Создайте базовый класс Rectangle с полями width и height
//// и методом area().
////Производный класс ColoredRectangle добавляет 
//// поле color(строка) и метод display(), который выводит 
//// площадь и цвет.
//#include<iostream>
//class Rectangle
//{
//protected:
//	double width;
//	double height;
//public:
//	Rectangle() :width(0), height(0) {}
//	Rectangle(double width, double height)
//	{setWidth(width); setHeight(height);}
//	void setWidth(double w)
//	{if (w >= 0)width = w;else throw"no";}
//	void setHeight(double h)
//	{if (h >= 0) height = h;else throw"no2";	}
//	double getWidth()
//	{return width;	}
//	double getHeight()
//	{return height;	}
//	double Area()
//	{return width * height;}
//};
//	class ColoredRectangle :public Rectangle
//	{
//	protected:
//		std::string color;
//	public:
//		ColoredRectangle(double f, double t, std::string s) :
//			Rectangle(f,t), color(s) { }
//	void Display()
//	{std::cout << Area()<<'\n'<<color<<'\n';}
//	};
//int main()
//{
//	Rectangle e(1, 2);
//	ColoredRectangle s(5, 5, "red");
//	s.Display();
//}
//	
