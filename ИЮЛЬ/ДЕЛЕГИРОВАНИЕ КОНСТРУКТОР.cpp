//#include<iostream>
//#include<string>
//enum Color
//{
//	 red ,
//	 dark,
//	 green,
//};
//std::string rr[] = { "красная", "черная", "зелёная" };	
//class Mycar
//{
//public:
//	Mycar() :ear(1885), model("ford"), color(Color::dark) {}
//	Mycar(int a, std::string s, Color c) : ear(a), model(s), color(c) {}	
//	Mycar(int a, std::string s) : Mycar(a, s, Color::dark) {}
//	Mycar(int a) : Mycar(a, "ford", Color::dark) {}
//	void print() const
//	{
//		std::cout << ear << " " << model << " " << rr[color] << std::endl;
//	}	
//private:
//	int ear;
//	std::string model;
//	Color color;	
//};
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	Mycar car2;	
//	Mycar car3(2000, "lada",red);	
//	Mycar car4(2010, "bmw");
//	Mycar car5(2020);
//
//	car2.print();
//	car3.print();
//	car4.print();
//	car5.print();
//}