//СОРТИРОВКА РЕКУРСИЕЙ
#include<iostream>
using namespace std;

int hoar(int arr[], int left, int right)
{
    int piv = left + (right - left) / 2;
    int pig = arr[piv];
    int l = left - 1;
    int r = right + 1;
    while (true)
    {
        do
        {
            l++;
        } while (arr[l] < pig);
        do
        {
            r--;
        } while (arr[r] > pig);
        if (l >= r)
        {
            return r;
        }
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
    }
}
void quickSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int pivot = hoar(arr, left, right);
        quickSort(arr, left, pivot);
        quickSort(arr, pivot + 1, right);
    }
}


int main()
{
    setlocale(LC_ALL, "ru");
    int testArray[5] = { 3,9, 5, 11, 1 };
    quickSort(testArray, 0, 4);
    for (int i = 0; i <= 4; i++)
        cout <<testArray[i] << "  ";
    return 0;
}