
#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	const int RAZ = 5;
	const int RAZ3 = RAZ * 2;/*максимально возможный размер массива из двух,
	 если допустить что в первом пять нечётных и во втором пять чётных цифр*/
	int arr1[RAZ]{};
	int arr2[RAZ]{};
	int arr3[RAZ3]{};
	int w = 0;

	cout << "массив первый " << "\n";
	for (int i = 0;i < RAZ;i++)
	{
		arr1[i] = rand() % 100;
		cout << arr1[i]<<"  ";
	}
	cout << endl;
	cout << "массив второй " << "\n";
	for (int y = 0; y < RAZ; y++)
	{
		arr2[y] = rand() % 100;
		cout << arr2[y] << "  ";
	}
	cout << "\n";
	cout << "массив третий нечёт/чёт " << "\n";
	for (int j = 0; j < RAZ; j++)
	{
		if (arr1[j] % 2 > 0)
			arr3[w] = arr1[j];
			w++;
	}
	for (int q = 0; q < RAZ; q++)
	{
		if (arr2[q] % 2 == 0)
			arr3[w] = arr2[q];
			w++;		
	}
	for (int j= 0; j < RAZ3 ; j++)
	 if(arr3[j] > 0 )
		cout << arr3[j]<< "  ";
	    cout << "\n";
	
}