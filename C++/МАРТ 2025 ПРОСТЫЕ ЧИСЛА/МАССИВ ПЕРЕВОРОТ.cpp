//#include<iostream>
//#include<ctime>
//using namespace std;
//int main()
//{
//	//������� � ������� ������
//	srand(time(NULL));
//	const int R = 15;
//	int arr[R]{};
//	for (int i = 0;i < R; i++)
//	{
//		arr[i] = rand() % 100;
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//
//	//���������� ��������������
//	int t = 0;
//	for (int i = 0; i < R/2; i++)
//	{
//		t = arr[R-1-i];
//		arr[R-1-i] = arr[i];
//		arr[i] = t;
//	}
//	//������� ������������
//	cout << endl;
//	for (int i = 0; i < R; i++)
//	{
//	cout << arr[i] << "  ";
//}
//}
