/*Напишите алгоритм вывода елочки в консоль, пользователь долженн ввести высоту.
Пример ёлочки высотой 3:
  *  
 *** 
*****
Задачу можно решить вложенными циклами*/


#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int x = 0;
	cout << " введите высоту -> ";
	cin >> x;
	int v = x + 2;
	int r = 1;
	int y = x-1;
	for (int i = 0; i <x; i++)
	{
		cout << " \n ";
		 
		for (int  w = y; w > 0; w-- )
		{
			cout << "   ";
		}
		for (  int q = 0; q < r; q++  )
		    {
			   cout << " * ";
		    }
		y = y - 1;
		r = r + 2;
	}
}
