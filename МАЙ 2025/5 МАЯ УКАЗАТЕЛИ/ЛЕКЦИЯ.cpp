//#include <iostream>
//
//template <typename T>
//T find_max(T arr[], int size)
//{
//    T max = arr[0];
//    for (int i = 1; i < size; i++)
//    {
//        if (arr[i] > max) max = arr[i];
//    }
//    return max;
//}
//
//int sum_elements(int arr[], int size)
//{
//    if (size == 1)
//        return arr[0];
//    return arr[size - 1] + sum_elements(arr, size - 1);
//}
//
//void fib(int first, int second, int count)
//{
//    //static int* arr = new int[count];
//    if (count == 0) return;
//    std::cout << first << " ";
//    fib(second, first + second, count - 1);
//}
//
//int hoar(int arr[], int left, int right)
//{
//    //int piv = (arr[left] + arr[right] + arr[(right - left) / 2]) / 2;
//    int piv = arr[left + ((right - left) / 2)];
//    int l = left - 1;
//    int r = right + 1;
//    while (true)
//    {
//        do
//        {
//            l++;
//        } while (arr[l] < piv);
//        do
//        {
//            r--;
//        } while (arr[r] > piv);
//
//        if (l >= r)
//        {
//            return r;
//        }
//        int temp = arr[l];
//        arr[l] = arr[r];
//        arr[r] = temp;
//    }
//}
//
//void quickSort(int arr[], int left, int right)
//{
//    if (left < right)
//    {
//        int pivot = hoar(arr, left, right);
//        quickSort(arr, left, pivot);
//        quickSort(arr, pivot + 1, right);
//    }
//}
////��������� ������ �����
////���� - 2��
////���� - ...
//
//void function()
//{
//    //���������� ��������� � ��������� ������
//    int* p = new int;
//    //������������ ������
//    delete p;
//}
//
//int main()
//{
//    //const int SIZE = 5;
//    //int test_arr[SIZE] = {};
//    //std::cout << find_max(test_arr, SIZE);
//    //fib(0, 1, 10);
//    //int arr[10] = { 5, 2, 1, 18, 3, 46, 4, 0, -2, 12 };
//    //quickSort(arr, 0, 9);
// 
// 
// 
// 
//   /* int arr[10];
//    std::cout << arr;*/
//    //��������� �� ����� �����
//    int* ptr;
//    //��������� � �� ������ � ������� ������ int
//    ptr = new int;
//    //���������� � �������������
//    int* ptr2 = new int;
// 
//    //��� �� �������� � �������, �� ������� ��������� ���������, 
//     ��� ����� ������������
//    *ptr = 10;
//    *ptr += 5;
//    //std::cout << ptr << " " << *ptr;
// 
//    //int* - ���������, *ptr - �������������
//    //float* p = new float;
//    int* ptr_clone = ptr;
//    std::cout << ptr << " " << ptr_clone;
//    *ptr = 1;
//    std::cout << *ptr_clone;
//
//    return 0;
//}
