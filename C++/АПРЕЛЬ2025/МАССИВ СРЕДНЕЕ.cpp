
#include <iostream>
#include<ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int const R = 20;
	int arr[R]{};	
	int summ = 0;
	for (int i = 0; i < R;i++)
	{
		arr[i] = rand() % 100;	
	}
	for (int i = 0;i < R;i++)
	{
		std::cout << arr[i] << " , ";
		summ += arr[i];
	}
	int max = arr[0];
	int mi = arr[0];	
	for (int i = 1; i < R; i++)
	{
		if (arr[i] > max)	
			max = arr[i];		
		else if (arr[i] < mi)
			mi = arr[i];
	}		
	std::cout << endl << "сумма всех чисел       =   " << summ;
	std::cout << endl << "максимальное число     =   " << max;
	std::cout << endl << "минимальное число      =   " << mi;
	std::cout << endl << "среднеарифметическое   =   " << summ / R;
	return 0;
}
