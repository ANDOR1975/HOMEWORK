////СОРТИРОВКА ПУЗЫРЬКОМ
//#include<iostream>
//#include<cmath>
//#include<ctime>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	srand(time(NULL));
//	const int R = 10;
//	int ass[R]{};
//	cout << " первоначальный массив" << endl;
//	for (int i = 0; i < R; i++)
//	{
//		ass[i] = rand() % 100;
//		cout << ass[i] << "  ";
//	}
//	cout << endl << " отсортированный " << endl;
//	for (int i = 0; i < R - 1; i++)
//	{
//		for (int t = 0; t < R - 1 - i; t++)
//		{
//			if (ass[t] > ass[t + 1])
//			{
//				int min = ass[t];
//				ass[t] = ass[t + 1];
//				ass[t + 1] = min;
//			}
//		}
//	}
//	for (int i = 0; i < R; i++)
//	{
//		cout << ass[i] << "  ";
//	}
//}