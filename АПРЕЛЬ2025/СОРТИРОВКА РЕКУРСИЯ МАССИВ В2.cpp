// заполнение массива рандомными  числами
// и сортировка рекурсией 


#include<iostream>
using namespace std;

void FUN(int ms[],int const R)
{
	for (int i = 0; i < R; i++)
	{
		ms[i] = rand() % 100;
		cout << ms[i] << " ";
	}
}
int HALF(int ms[], int start, int end)
{
	//int y = start+(end-start)/2;
    //int y = start;
	int y = end-1;
	int pivot = ms[y];
	int i = start-1;
	int x = end+1;
	while (true)
	{
		do
		{
			i++;
		} while (ms[i] < pivot);

		do
		{
			x--;
		} while (ms[x] > pivot);
		if (i >= x)
		{
			return x;
		}
		//return ms[i];
		int min = ms[i];
		ms[i] = ms[x];
		ms[x] = min;
	}
}
	void sort(int ms[], int start, int end)
	{
		if (start < end)
		{
			int pivot = HALF(ms, start, end);
			sort(ms, start, pivot);
			sort(ms, pivot + 1, end);
		}
	}
int main()
{
	srand(time(NULL));
	int const  R= 10;
	int ms[R];
	FUN(ms, R);
	cout << endl ;
	sort(ms, 0, R-1);
	for (int i = 0; i < R; i++)
	{
		cout << ms[i]<<" ";
	}


}