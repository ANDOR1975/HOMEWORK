////Задача 2: Транспортные средства
////Базовый класс Vehicle с полями speed и model.
////Производный класс Car добавляет поле fuelType(строка) 
//// и метод showDetails().
//#include<iostream>
//class Vehicle
//{
//protected:
//	int speed;
//	std::string model;
//public:
//	Vehicle() :speed(0), model("") {}
//	Vehicle(int speed, std::string model)
//	{		setSpeed(speed);setModel(model);	    }
//	void setSpeed(int s)
//	{		if (s > 0)speed = s;else throw"1";  	}
//	void setModel(std::string m)
//	{		if (m != "")model = m;else throw "2";	}
//};
//
//class Car : public Vehicle
//{
//protected:
//	std:: string fuelType;
//public:
//	Car() :fuelType("") {}
//	Car(int s, std::string m, std::string j) :
//		Vehicle(s, m), fuelType(j) {}
//
//	void showDetails()
//	{
//		std::cout << speed << '\n' << model << '\n' << fuelType << '\n';
//	}
//};
//int main()
//{
//	Vehicle w(10, "daf");
//	Car f(200, "man", "dt");
//	f.showDetails();
//	
//}