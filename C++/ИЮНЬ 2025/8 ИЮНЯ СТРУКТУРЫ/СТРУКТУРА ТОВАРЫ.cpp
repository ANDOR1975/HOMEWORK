////�������� ��������� "�����" � ������ : ����, ��������
////(string), ���������(����� ������������ enum)
////������� ������ ����������� ���������(������ �������)
////�������� �������, ������� ������ ������ ������� � ���������,
////������� ������ ������� ��� ������ ������ ���������
//
//#include<iostream>
//using namespace std;
//
//enum Category
//{
//	product,
//	clothes,
//	instrument	
//};
//
//struct Shop
//{
//	int price;
//	string name;
//	Category  buy;
//};
//
//Shop* listprint(Shop* arr[], size_t size, Category category,
//	int& resultsize)
//{//���������� ���������� ��������� � ������� ����������� �� �������� 
// //��������� ��� ������ ������� 
//	resultsize = 0;
//	for (size_t i = 0; i < size;i++)
//	{
//		if (arr[i]->buy == category)
//		{
//			resultsize++;
//		}
//	}
//	//������ ����� ������ ���� ��������� �� ����������
//	// �� ��������� ������� � �����
//	Shop* result = new Shop[resultsize];//�������� ������ ������� resultsize 
//	int index = 0;
//	for (int i = 0; i < size && index< resultsize; i++)
//	{
//	
//		if (arr[i]->buy == category)//�������� �� ���������� �� ���� ��������� 
//		{
//			result[index++] = *arr[i];//��� ���������� -��������� � ����� ������
//			
//
//		}
//	}
//	return result;
//}
//
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	Shop n1{ 46,"������",Category::product };
//	Shop n2{ 50,"����",Category::product };
//	Shop n3{ 150,"��������",Category::clothes };
//	Shop n4{ 90,"�����",Category::clothes };
//	Shop n5{ 80,"�������",Category::instrument };
//	Shop n6{ 170,"����",Category::instrument };
//
//	Shop* arr[]{ &n1, &n2, &n3, &n4, &n5, &n6 };
//	int productsCount;
//	Shop* total = listprint(arr, 6, Category::clothes, productsCount);
//
//	for (int i = 0; i < productsCount; i++)
//	{
//		cout << total[i].price << " " 
//		     << total[i].name  << " " 
//			 << total[i].buy   << '\n';
//	}
//	delete[] total;
//}
//	