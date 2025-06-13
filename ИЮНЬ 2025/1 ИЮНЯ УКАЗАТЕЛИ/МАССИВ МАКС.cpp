////написать функцию, которая вернёт ссылку на максимальный элемент в массиве.
////функция должна принять указатель на массив и его размер.
////Важно, что функция должна вернуть именно ссылку на элемент.
//
//#include<iostream>
//using namespace std;
//
//int& maxix(int* arr,size_t size)
//{
//	int maxindex = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > arr[maxindex])maxindex = i;			
//	}
//	return arr[maxindex];
//}
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	int const r = 5;
//	int arr[r] = { 9,2,41,6,1 };
//	cout <<"ссылка на макс.элемент\t\t"<< maxix(arr, r) << '\n';
//	cout << "адрес элемента в памяти\t"<< & maxix;
//}
