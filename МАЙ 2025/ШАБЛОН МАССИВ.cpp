////�������� ��������� ������� ������ ���������, ������� ������ ��������� 
//// ������ ������ ���� � ��� ������, � ���������� ������������ ��������
//
//
//
//#include<iostream>
//using namespace std;
//template <typename T>
// T maxim(T arr[], int N)
//{
//	T max = 0;
//	for (int i = 0; i < N; i++)
//	{
//		if (arr[i] >  max)
//		max = arr[i];
//	}
//	return max;
//}
//
//int main()
//{
//	int add[] = { 105,5,3,8,10 };
//	double agg[] = { 1.2 , 999.6 , 6.7 , 111.6};
//	cout << maxim(add,5);
//	cout <<'\n'<< maxim(agg, 4);
//
//}
//


#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int a = 0;
	int b = 0;
	//cout << " ������� �����  -";
	//cin >> a;
	//cout << " ������� ������ ����� -";
	//cin  >> b;
	int const T = 4;
	int ajj[T];
	srand(time(NULL));
	for (int i = 0; i < T; i++)
	{
		ajj[i] = rand() % 100 + 10;
		cout << ajj[i] << "  ";
	}



}