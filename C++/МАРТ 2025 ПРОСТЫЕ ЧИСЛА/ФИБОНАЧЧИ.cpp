/*написать алгорит для вывода n элементов последовательности фибоначчи.
пользователь вводит число n, а получает указанное количество чисел
последовательности.*/

/*

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int n, i = 0, feb1 = 0, feb2 = 1, feb = 0;
	cout << "введите число" << endl;
	cin >> n;
	while (i < n)
	{
		feb = feb1 + feb2;
		feb1 = feb2;
		feb2 = feb;
		cout << " " << feb1 << ",";
		i++;
	}
}

*/


