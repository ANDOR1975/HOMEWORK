////ќбъ€вить структуру "товар" с пол€ми : цена, название
////(string), категори€(можно использовать enum)
////—оздать массив экземпл€ров структуры(массив товаров)
////Ќаписать функцию, котора€ примет массив товаров и категорию,
////функци€ должна вернуть все товары данной категории
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
//{//подсчитаем количество элементов в массиве совпадающих по заданной 
// //категории дл€ нового массива 
//	resultsize = 0;
//	for (size_t i = 0; i < size;i++)
//	{
//		if (arr[i]->buy == category)
//		{
//			resultsize++;
//		}
//	}
//	//создаЄм новый массив путЄм сравнени€ на совпадение
//	// по категории товаров в цикле
//	Shop* result = new Shop[resultsize];//выдел€ем массив размера resultsize 
//	int index = 0;
//	for (int i = 0; i < size && index< resultsize; i++)
//	{
//	
//		if (arr[i]->buy == category)//проверка на совпадение по полю категори€ 
//		{
//			result[index++] = *arr[i];//при совпадении -добавл€ем в новый массив
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
//	Shop n1{ 46,"€блоки",Category::product };
//	Shop n2{ 50,"хлеб",Category::product };
//	Shop n3{ 150,"футболка",Category::clothes };
//	Shop n4{ 90,"шапка",Category::clothes };
//	Shop n5{ 80,"молоток",Category::instrument };
//	Shop n6{ 170,"пила",Category::instrument };
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