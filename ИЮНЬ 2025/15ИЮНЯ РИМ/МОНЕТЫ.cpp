////��������� ������ ����� ����������� ��� ��������� 
////�������� ������� ������� �����
//#include<iostream>
//using namespace std;
//
//void var1(int &summ,int r1,int r3,int r5,int r10,int r25)
//{
//	
//	int rs25 = 0;
//	int rs10 = 0;
//	int rs5 = 0;
//	int rs3 = 0;
//	int rs1 = 0;
//	cout << "summ " << summ << endl;
//	do
//	{
//	if ( summ >= r25) { summ = summ - r25; rs25++;}
//	
//	else if (summ >= r10) { summ = summ - r10;rs10++; }
//	
//	else if (summ >= r5) { summ = summ - r5; rs5++;}
//	
//	else if (summ >= r3) {summ = summ - r3;rs3++;}
//	
//	else if (summ >= r1) { summ = summ - r1;rs1++; }
//	
//	} while (summ>0);
//	
//	
//	cout << "25� �����- " << rs25 << endl;
//	cout << "10� �����- " << rs10 << endl;
//	cout << "5�  ����� - " << rs5 << endl;
//	cout << "3�  ����� - " << rs3 << endl;
//	cout << "1�  ����� - " << rs1 << endl;
//}
//
//void var2(int &summa, int arr[], int arrm[], int size)
//{
//	for (int i = size -1; i >=0 ; i--)	
//	{
//		arrm[i] = summa / arr[i];
//		summa%= arr[i];
//	}
//
//
//
//
//}
//	
//void var2print(int arr[], int arrm[], int size)
//{
//	cout << '\n';
//	for (int i = size-1; i >=0 ;i--)
//	{
//		cout << "������- " << arr[i] << " � ���������� -" << arrm[i] << '\n';
//
//	}
//}
//
//void var3( int arr[],  int size)
//{
//	int y = 0;
//	cout << "������������ ������ - ";
//	for (int i = size - 1; i >=0 ; i--)
//	{
//		y = rand() % (i+1) ;
//		int temp = arr[i];
//		arr[i] =  arr[y];
//		arr[y] = temp; 
//		cout <<arr[i] << " ";
//	}
//}
//
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	srand(time(NULL));
//	int arr[5]{ 1,3,5,10,25 };//������ ����� ��������
//	int arrm[5]{};//������ �������
//	////�������� ������� � �������� � ����� ������� ���������� �������
//	////�� ������� ������������ ���������� ��� ��� ���� �����
//	int summ = 74; //����� �� �����
//	int summw = summ;
//	int r1 = arr[0]; //���������� ����� ��������� 1
//	int r3 = arr[1];//���������� ����� ��������� 3
//	int r5 = arr[2];
//	int r10 = arr[3];
//	int r25 = arr[4];
//	var1(summ, r1, r3, r5, r10, r25);
//
//	var3(arr, 5); //���������� ������ �����
//	var2(summw, arr, arrm, 5);
//	var2print(arr, arrm, 5);
//}