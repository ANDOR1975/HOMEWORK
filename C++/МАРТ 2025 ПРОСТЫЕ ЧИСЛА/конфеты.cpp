/* 

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int a;

	cout << "укажите  в граммах вес конфет который хотите купить  - ";
	cin >> a;
	if (a <= 500) {
		cout << "вы не можете купить менее 500 грамм ";
	}
	else if (a < 2000) {
		cout << "цена покупки составит - " << a * 250 / 1000 << "  рублей";
	}
	if (a >= 2000) {
		cout << "цена покупки составит по акции  - " << a * 200 / 1000 << "   рублей ";
	}
}

*/