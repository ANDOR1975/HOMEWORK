/* 

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int a;

	cout << "�������  � ������� ��� ������ ������� ������ ������  - ";
	cin >> a;
	if (a <= 500) {
		cout << "�� �� ������ ������ ����� 500 ����� ";
	}
	else if (a < 2000) {
		cout << "���� ������� �������� - " << a * 250 / 1000 << "  ������";
	}
	if (a >= 2000) {
		cout << "���� ������� �������� �� �����  - " << a * 200 / 1000 << "   ������ ";
	}
}

*/