//////написать шаблонную функцию поиска максимума, функция должна принимать 
////// массив любого типа и его размер, а возвращать максимальное значение
//////С ИСПОЛЬЗОВАНИЕМ РЕКУРСИИ
////
//#include<iostream>
//using namespace std;
//template <typename T>
//T  F1(T arr[], int start,int end)
//{
//	if (start > end)  
//	{
//		return arr[start];
//	}
//    T max = arr[start];
//	T tempmax = F1(arr, start + 1, end);
//	return(tempmax > max ? tempmax : max);
//}
//
//int main()
//{
//	srand(time(NULL));
//	setlocale(LC_ALL, "ru");
//	int arr[] = { 1,30,9,4,7,8 };
//	cout << F1(arr, 0, 6);
//
//}
//
