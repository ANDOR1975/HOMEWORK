#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int R = 10;
	int arr[R]{};
	for (int i = 0;i < R; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << "  ";
	}
	int max = arr[0];
	int min = arr[0];
	int imax = 0;
	int imin = 0;
	int temp = 0;
	for (int i = 0; i < R; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			imax = i;       // присваиваем индекс максимального числа в переменную
		}
		else if (arr[i] < min)
		{
			min = arr[i];
			imin = i;     // присваиваем индекс минимального  числа в переменну
		}
	}
	cout << endl << "максимальное           - " << max;
	cout << endl << "индекс максимального   - " << imax;
	cout << endl << "минимальное            - " << min;
	cout << endl << "индекс минимального    - " << imin;
	cout << endl;

	//temp = arr[imax];
	//arr[imax] = arr[imin];
	//arr[imin] = temp;

	//int wr = R;
	//arr[0] = arr[R];
	for (int i = 0; i < R; i++)
	{

		//arr[i] = arr[R-1];

		cout << arr[R - 1 - i] << "  ";

	}


	/*for (int i = 0;i < R;i++)
	{
		cout << arr[i] << "  ";
	}*/
}