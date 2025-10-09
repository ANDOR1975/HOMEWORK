//
///*
//#include<iostream>
//#include<cmath>
//using namespace std;
///*
//написать перегруженную функцию, которая параметры фигуры, а вернёт её площадь
//(если значение одно - квадрат, два - прямоугольник, три - треугольник)
//*/
//int area(int a)
//{
//	return (a * a);
//}
//int area(int a, int b)
//{
//	return (a * b);
//}
//double area(int a, int b, int c)
//{
//	double p = (a + b + c) / 2;
//	return sqrt(p * (p - a) * (p - b) * (p - c));
//}
///*написать перегрузку функции, которая будет умножать два или три числа разных типов int или double, всего будет 4 перегрузки
//*/
//int multiplay(int a, int b)
//{
//	return (a * b);
//}
//double multiplay(double f, double r)
//{
//	return (f * r);
//}
//double multiplay(double f, int a)
//{
//	return(f * a);
//}
//int multiplay(int a, double f)
//{
//	return(a * f);
//}
//int main()
//{
//	int a = 3;
//	int b = 4;
//	int c = 4;
//	double f = 3.14;
//	double r = 4.65;
//	double p;
//	cout << " квадрат " << area(a) << '\n';
//	cout << " прямоугольник " << area(a, b) << '\n';
//	cout << " треугольник " << area(a, b, c) << '\n' << '\n';
//	cout << " int*int=int " << multiplay(a, b) << '\n';
//	cout << " double*double=double " << multiplay(f, r) << '\n';
//	cout << " double*int=double " << multiplay(f, a) << '\n';
//	cout << " ibt*double=int " << multiplay(a, f) << '\n';
//}
//
//*/