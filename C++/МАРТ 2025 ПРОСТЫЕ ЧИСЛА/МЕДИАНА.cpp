///*�������� �������� ������ ������� � �������. 
//��� ����� ������ ����� ����������� (����������� �������� � �������)
//� ����� ����� �����, ������� ����� �� �������� �������, ���� ���������� 
//����� ������, �� ������ ������� �������������� ����� ����� ������� ����������*/
//
//
//#include<iostream>
//#include<ctime>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	srand(time(NULL));
//	const int RAZ =10;
//	int ass[RAZ]{};
//	int min = 0;
//	
//	/*���������� ������� � ������������� ����������� ���������
//	 � �������������� ���������� ������������ ��������� �� ������ ����� ��������*/
//	for (int i = 0; i < RAZ; i++)
//	{
//		ass[i] = rand() % 100;
//		int e = 1;
//		for (int p = 0; p < RAZ; p++)
//		{			
//			if (p < e)
//			{
//				min = ass[i];
//			}
//			if (ass[p] > min)
//			{
//					min = ass[p];
//					ass[p] = ass[i];
//					ass[i] = min;
//			}
//			e++;
//		}
//	}
// cout << endl;
// for (int i = 0; i < RAZ; i++)
// cout << ass[i] << " ";
// cout << endl;
//
//	//����� �������		
// int s = 0;
// int d = 0;
// int med = 0;
// double e = 0;
// RAZ%2 == 0 ? e =(ass[s = RAZ / 2]+ass[ d = RAZ / 2 - 1]): med = ass[RAZ / 2];
// double med1 = e / 2;
// cout << "������� = "<<(RAZ % 2 == 0 ? med1 : med)<< "\n";
//			
//}