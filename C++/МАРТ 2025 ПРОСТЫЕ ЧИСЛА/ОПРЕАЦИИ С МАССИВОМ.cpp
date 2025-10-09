//// ноепюжхх я люяяхбнл
//
//#include<iostream>
//#include<cmath>
//#include<ctime>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	setlocale(LC_ALL, " Russian ");
//	srand(time(NULL));
//	const int R = 10;
//	int ass[R];
//	cout << " хяундмши люяяхб ";
//	for (int i = 0; i < R; i++)
//	{
//		ass[i] = rand() % 100;
//		cout << ass[i] << " ";
//	}
//	cout << endl;
//	cout << " люяяхб мюнанпнр";
//	int a = ass[0];
//	for (int i = 0; i < R / 2; i++)
//	{
//		a = ass[R - 1 - i];
//		ass[R - 1 - i] = ass[i];
//		ass[i] = a;
//	}
//	cout << " ";
//	for (int i = 0; i < R;i++)
//	{
//		cout << ass[i] << " ";
//	}
//	cout << endl << " нрянпрхпнбюммши ";
//	int min = 0;
//	for (int i = 0; i < R - 1; i++)
//	{
//		min = ass[i];
//		for (int h = i + 1; h < R; h++)
//			if (ass[h] < min)
//			{
//				min = ass[h];
//				ass[h] = ass[i];
//				ass[i] = min;
//			}
//	}
//	for (int i = 0; i < R; i++)
//	{
//		cout << ass[i] << " ";
//	}
//	cout << '\n' << " янярюбмше вхякю б люяяхбе - ";
//	for (int i = 0; i < R; i++)
//	{
//		int t = ass[i];
//		for (int k = 2; k < t;k++)
//		{
//			if (ass[i] % k == 0 || ass[i] % 2 == 0)
//			{
//				cout << ass[i] << " ";
//				ass[i] = 0;
//				break;
//			}
//		}
//	}
//	cout << '\n' << " опнярше вхякю б люяяхбе -";
//	for (int i = 0; i < R; i++)
//		if (ass[i] > 0)
//			cout << ass[i] << " ";
//
//	cout << '\n';
//}
