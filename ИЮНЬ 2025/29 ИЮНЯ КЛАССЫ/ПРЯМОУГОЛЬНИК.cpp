////Написать класс "Прямоугольник" (Rectangle)
////-Поля: width(ширина), height(высота) - private
////- Конструкторы : по умолчанию(ширина = 0, высота = 0) и с параметрами
////- Методы :
////    setWidth(double w), setHeight(double h) - с проверкой на неотрицательность
////    getWidth(), getHeight()
////    getArea() - вычисление площади
////    getPerimeter() - вычисление периметра
////******************************************************************
//#include<iostream>
//class Rectangle
//{
//private:
//	double width;
//	double height;	
//public:
//	// Конструктор по умолчанию
//	Rectangle() : width(0), height(0) {}
//	// Конструктор с параметрами
//	Rectangle(double w, double h)
//	{
//		setWidth(w);
//		setHeight(h);
//	}
//	//SETTERS****************************************************	
//	// Установка ширины с проверкой на неотрицательность
//	void setWidth(double w) 
//	{
//		if (w >= 0) {
//			width = w;
//		} else {
//			std::cout << "ширина не может быть отрицательной" << std::endl;
//			std::cout << "Вы ввели: " << w << std::endl;
//			std::exit(1);//применил такой способ завершения программы	
//			      //(не знаю насколько верный) при не выполнении условия
//		}
//	}
//	// Установка высоты с проверкой на неотрицательность
//	void setHeight(double h)
//	{
//		if (h >= 0) {
//			height = h;
//		} else {
//			std::cout << "высота не может быть отрицательной" << std::endl;
//			std::cout << "Вы ввели: " << h << std::endl;
//			std::exit(1);
//		}
//	}
//	//GETTERS****************************************************
//	double getWidth()
//	{
//		return width;
//	}	
//	double getHeight()
//	{
//		return  height;
//	}
//	int getArea()
//	{
//		return width * height; // Вычисление площади	
//	}
//	int getPerimeter()
//	{
//		return 2 * (width + height); // Вычисление периметра
//	}	
//};	
//int main()
//{
//	setlocale(LC_ALL, "Russian"); 
//	Rectangle rect1;
//	rect1.setWidth(10.2);
//	rect1.setHeight(5.6);
//	std::cout<<"ширина\t\t"<<rect1.getWidth() << '\n'; // Вывод ширины прямоугольника
//	std::cout<<"высота\t\t"<<rect1.getHeight() << '\n'; // Вывод высоты прямоугольника
//	std::cout<<"площадь\t\t"<<rect1.getArea() << '\n'; // Вычисление площади прямоугольника	
//	std::cout<<"периметр\t"<<rect1.getPerimeter()<<'\n'; // Вычисление периметра прямоугольника
//}
//
