//#include <iostream>
//
//template <typename T>
//void swap(T* val1, T* val2)
//{
//    T temp = *val1;
//    *val1 = *val2;
//    *val2 = temp;
//}
//
//void swap(int& val1, int& val2)
//{
//    int temp = val1;
//    val1 = val2;
//    val2 = temp;
//}
//
//float avg(const int* arr, int size)
//{
//    int sum = 0;
//    for (int i = 0; i < size; i++)
//    {
//        sum += *(arr + i);
//    }
//    return (float)sum / size;
//}
//
//template <typename T>
//T* push(T* arr, int& size, int count)
//{
//    T* newArr = new T[size + count];
//    for (int i = 0; i < size; i++)
//    {
//        //newArr[i] = arr[i];
//        *(newArr + i) = *(arr + i);
//    }
//    delete[] arr;
//    size += count;
//    return newArr;
//}
//template <typename T>
//void push(T** arr, int& size, int count)
//{
//    T* newArr = new T[size + count];
//    for (int i = 0; i < size; i++)
//    {
//        //newArr[i] = *(arr)[i];
//        *(newArr + i) = *((*arr) + i);
//    }
//    delete[](*arr);
//    size += count;
//    *arr = newArr;
//}
//
//int main()
//{
//    int sz = 3;
//    int* testArr = new int[sz] {1, 2, 3};
//    testArr = push(testArr, sz, 2);
//
//
//
//    //������ �� ����� �� ���� ������������������
//    int var;
//    int& ref = var;
//
//    //������ �� ����� ��������� �������
//    //���������� ������������ new � delete
//
//    //const ������ � ��������� ������� ���������� c++
//    //���� ������� �������� � ��������� �� ������, ��
//    //�� �������� ���, �� ������ ������ ���� const
//
//    //int arr[] = {1, 2};
//    int size = 10;
//    int* arr2 = new int[size] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//
//    //std::cout << *(arr2 + 0) << std::endl;
//    //std::cout << *(arr2 + 1);
//    /*int* end = arr2 + 10 - 1;
//
//    for (int i = 0; i < 10; i++)
//    {
//        std::cout << *(end - i) << " ";
//    }*/
//
//    //delete[] arr2;
//
//    //
//
//    //int* ptr1;
//    //ptr1 = new int;
//    //*ptr1 = 10;
//    //int* ptr2 = new int(15);
//
//    //int* temp = ptr1;
//    //ptr1 = ptr2;
//    //ptr2 = temp;
//
//    //int tempv = *ptr1;
//    //*ptr1 = *ptr2;
//    //*ptr2 = tempv;
//
//    //delete ptr1;
//    //delete ptr2;
//    ////delete temp;
//
//    //ptr1 = nullptr;
//    //ptr2 = nullptr;
//
//    //int* ptr3 = new int;
//    //std::cin >> *ptr3;
//    //*ptr3 = (*ptr3) * (*ptr3);
//
//    //int var = 60;
//    ////int* ptr4 = new int(var);
//    //int* ptr4 = &var;
//
//    //var = 10;
//    ////std::cout << *ptr4;
//    //
//    //int a = 1;
//    //int b = 2;
//    //std::cout << a << " " << b << std::endl;
//    //swap(&a, &b);
//    //std::cout << a << " " << b << std::endl;
//
//}
