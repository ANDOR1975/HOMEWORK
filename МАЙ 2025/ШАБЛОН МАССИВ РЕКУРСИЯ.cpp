//�������� ��������� ������� ������ ���������, ������� ������ ��������� 
// ������ ������ ���� � ��� ������, � ���������� ������������ ��������
//� �������������� �������� �������2

#include<iostream>
using namespace std;
template <typename T>


//����� ����������� ���������
T  F1(T arr[], int start,int end)
{
	if (start > end)   // �������
	{
		return arr[start];
	}
    T max = arr[start];
	T tempmax = F1(arr, start + 1, end);
	return(tempmax > max ? tempmax : max);
}

//��������� ����� �����
int FUN(int ms[], int const R)
{
	for (int i = 0; i < R; i++)
	{
		ms[i] = rand() % 50;
		cout << ms[i] << " ";
	}
	return 0;
}
//��������� �������
double FUN2(double ms[], int const F)
{
	for (int i = 0; i < F; i++)
	{
		ms[i] = (rand() /(double) rand()) *50;
		cout << ms[i] << " ";
	}
	return 0;
}


int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	int const R = 5;
    int add[R];
	FUN(add, R);
	cout <<'\n' << "���������� ����� � ������ ������� -" << F1(add, 0, R - 1)<<'\n';

	int const F = 5;
	double agg[F];
	cout<<'\n';
	FUN2(agg,F);
	cout <<'\n'<<"���������� ����� �� ������ ������� - "<< F1(agg, 0, F - 1)<<'\n';
}
