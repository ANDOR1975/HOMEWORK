/*написать алгоритм возведения в степень
пользователь должен ввести основание и степень 
вывести результат возведения в степень на консоль 
пользуясь только циклом. (степень целочисленная и положительная)

ВАРИАНТ ПЕРВЫЙ С ИСПОЛЬЗОВАНИЕМ "WHILE"*/



/*
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int a, x,rez;
	cout << "введите число для возведения в степень" << endl;
	cin >> a;
	cout << "введите степень " << endl;
	cin >> x;
	rez = a;
	int i = 1;
	while ( i<x)
	{
		rez = rez * a;
		i++;
	}
	cout << "результат возведения в степень - " << rez<<endl;
}
*/


//ВАРИАНТ 2 С ИСПОЛЬЗОВАНИЕ "FOR"

/*
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int a, x, rez;
	cout << "введите число для возведения в степень" << endl;
	cin >> a;
	rez = a;
	cout << "введите степень " << endl;
	cin >> x;
	for (int i = 1;i < x;i++)
	{
		rez = rez * a;
	}
	cout << "результат возведения в степень- " << rez<< endl;

}*/