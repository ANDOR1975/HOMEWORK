//Создайте класс для управления товарными позициями.
//Требования:
//Приватные поля : id, name, quantity, price
//Конструкторы :
//По умолчанию(пустой товар)
//С параметрами(id, name, quantity, price)
//Методы :
//	double totalValue() - общая стоимость позиции
//	void restock(int amount) - пополнение запаса
//	bool sell(int amount) - продажа(если достаточно товара)
//	void applyDiscount(float percent) - применение скидки
//	------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>

//Для поля name  использовал std::string, 
// чтобы упростить управление памятью

class Product
{
private:
	int id;               // Идентификатор товара
	std::string name;     // Название товара
	int quantity;         // Количество на складе
	double price;         // Цена за единицу
public:
	// Конструктор по умолчанию
	Product() :id(0), name(""), quantity(0), price(0.0) {}
	// Конструктор с параметрами
	Product(int id, const std::string& name, int quantity, float price)
	{
		this->id = id;
		this->name = name;
		this->quantity = quantity;
		this->price = price;
	}
	double totalValue()            // общая стоимость позиции
	{
		return quantity * price;
	}
	void restock(int amount)       //пополнение запаса
	{
		quantity += amount;
	}
	bool sell(int amount)          // продажа(если достаточно товара)
	{	// если остаток больше нуля и меньше или равен количеству к продаже
		if (amount > 0 && amount <= quantity)
		{
			quantity -= amount;
			return true;
		}
		else
			return false;
	}
	void applyDiscount(float percent) // применение скидки
	{
		price -= price * (percent / 100); // уменьшаем цену на процент
	}
	void print()
	{
		std::cout << "id:\t\t" << id << std::endl;
		std::cout << "наименование:\t" << name << std::endl;
		std::cout << "количество:\t" << quantity << std::endl;
		std::cout << "цена:\t\t" << price << std::endl;
		std::cout << "общая стоимость:" << totalValue() << std::endl << std::endl;
	//кажется зря подключил сюда totalValue, но пусть будет для удобства
	// что бы не писать в main каждый раз в случае вывода totalValue()
	}
};

//***************************************************************

	class Product2 
{
	private:
		int id;
		char* name;   // Использование  char*
		int quantity;
		double price;
		int nameSize;
	public:
		//конструктор по умолчанию
		Product2() : id(0), quantity(0), price(0.0), nameSize(1) 
		{
			name = new char[nameSize]; // выделяю память для имени
			name[0] = '\0';       // инициализирую пустой строкой с нулевым символом
		}
		// конструктор с параметрами
		Product2(int id_val, const char* name_val, int qty, double prc) : id(id_val), quantity(qty), price(prc) //инициализация полей кроме name
 		{
			nameSize = 0; // обнуляю размер массива имени
			name = nullptr; // обнуляю указатель на имя, чтобы избежать утечки памяти
		
			for (nameSize = 0; name_val[nameSize] != '\0'; nameSize++) {}// вычисляю размер имени
			nameSize++;     // увеличиваю на 1 для нулевого символа
			name = new char[nameSize]; // выделяю память для имени	с рассчитанным размером
			for (int i = 0; i < nameSize; i++)  
			{
				name[i] = name_val[i];  // копирую элементы массива
			}
		}
		Product2(const Product2& other) : id(other.id), quantity(other.quantity), price(other.price), nameSize(other.nameSize)
		{
			name = new char[nameSize];
			for (int i = 0; i < nameSize; i++) {
				name[i] = other.name[i];
			}
		}
		double totalValue()            // общая стоимость позиции
		{
			return quantity * price;
		}
		void restock(int amount)       //пополнение запаса
		{
			quantity += amount;
		}
		bool sell(int amount)          // продажа(если достаточно товара)
		{	// если остаток больше нуля и меньше или равен количеству к продаже
			if (amount > 0 && amount <= quantity)
			{
				quantity -= amount;
				return true;
			}
			else
				return false;
		}
		void applyDiscount(float percent) // применение скидки
		{
			price -= price * (percent / 100); // уменьшаем цену на процент
		}

		~Product2() {
			delete[] name;
		}
		void print()
		{
			std::cout << "id:\t\t" << id << std::endl;
			std::cout << "наименование:\t" << name << std::endl;
			std::cout << "количество:\t" << quantity << std::endl;
			std::cout << "цена:\t\t" << price << std::endl;
			std::cout << "общая стоимость:" << totalValue() << std::endl << std::endl;

		}

	};

int main()
{
	setlocale(LC_ALL, "Russian");
	Product n1(1, "апельсин", 10, 100);
	n1.print(); // после создания объекта

	n1.restock(3);
	n1.print();// после пополнения	

	n1.sell(5);
	n1.print();// после продажи

	n1.applyDiscount(10);	
	n1.print(); // после применения скидки

	Product2 n2(2, "яблоко", 20, 50);	
	n2.print(); // после создания объекта	

	Product2 n4(3, "груша", 15, 30);
	n4.print(); // после создания объекта	

	n4.restock(5);
	n4.print(); // после пополнения


}
