////реализовать функцию склеивания массивов, которая примет два указателя 
////на целочисленные массивы, а вернёт указатель на новый массив 
////в котором будут значения из обоих массивов.
//#include<iostream>
//using namespace std;
//int* newArr(int* arr1,int& size1, int* arr2, int& size2)
//{
//	int* arr3 = new int[size1 + size2];
//	for (int i = 0; i < size1; i++)
//	{
//		arr3[i] = arr1[i];
//	}
//	for (int i = 0; i < size2; i++)
//	{
//		arr3[size1 +i] = arr2[i];
//	}
//	return arr3;
//}
//int main()
//{
//	int  r1 = 3;
//	int* arr1 = new int[r1]{ 1,2,3 };
//	int  r2 = 3;
//	int* arr2 = new int[r2]{ 4,5,6 };
//
//	int* total=newArr(arr1, r1, arr2, r2);
//	for (int i = 0; i < r1+r2; i++)
//	{
//		cout << total[i]<< " ";
//	}
//	delete[] total;
//}