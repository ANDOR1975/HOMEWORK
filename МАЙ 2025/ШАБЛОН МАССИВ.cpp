//написать шаблонную функцию поиска максимума, функция должна принимать 
// массив любого типа и его размер, а возвращать максимальное значение

#include<iostream>
using namespace std;
template <typename T>
 T maxim(T arr[], int N)
{
	T max = 0;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] >  max)
		max = arr[i];
	}
	return max;
}
int main()
{
	int add[] = { 105,5,3,8,10 };
	double agg[] = { 1.2 , 999.6 , 6.7 , 111.6};
	cout << maxim(add,5);
	cout <<'\n'<< maxim(agg, 4);
}
