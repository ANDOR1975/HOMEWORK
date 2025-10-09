//�������� ����� ��� ���������� ��������� ���������.
//����������:
//��������� ���� : id, name, quantity, price
//������������ :
//�� ���������(������ �����)
//� �����������(id, name, quantity, price)
//������ :
//	double totalValue() - ����� ��������� �������
//	void restock(int amount) - ���������� ������
//	bool sell(int amount) - �������(���� ���������� ������)
//	void applyDiscount(float percent) - ���������� ������
//	------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>

//��� ���� name  ����������� std::string, 
// ����� ��������� ���������� �������

class Product
{
private:
	int id;               // ������������� ������
	std::string name;     // �������� ������
	int quantity;         // ���������� �� ������
	double price;         // ���� �� �������
public:
	// ����������� �� ���������
	Product() :id(0), name(""), quantity(0), price(0.0) {}
	// ����������� � �����������
	Product(int id, const std::string& name, int quantity, float price)
	{
		this->id = id;
		this->name = name;
		this->quantity = quantity;
		this->price = price;
	}
	double totalValue()            // ����� ��������� �������
	{
		return quantity * price;
	}
	void restock(int amount)       //���������� ������
	{
		quantity += amount;
	}
	bool sell(int amount)          // �������(���� ���������� ������)
	{	// ���� ������� ������ ���� � ������ ��� ����� ���������� � �������
		if (amount > 0 && amount <= quantity)
		{
			quantity -= amount;
			return true;
		}
		else
			return false;
	}
	void applyDiscount(float percent) // ���������� ������
	{
		price -= price * (percent / 100); // ��������� ���� �� �������
	}
	void print()
	{
		std::cout << "id:\t\t" << id << std::endl;
		std::cout << "������������:\t" << name << std::endl;
		std::cout << "����������:\t" << quantity << std::endl;
		std::cout << "����:\t\t" << price << std::endl;
		std::cout << "����� ���������:" << totalValue() << std::endl << std::endl;
	//������� ��� ��������� ���� totalValue, �� ����� ����� ��� ��������
	// ��� �� �� ������ � main ������ ��� � ������ ������ totalValue()
	}
};

//***************************************************************

	class Product2 
{
	private:
		int id;
		char* name;   // �������������  char*
		int quantity;
		double price;
		int nameSize;
	public:
		//����������� �� ���������
		Product2() : id(0), quantity(0), price(0.0), nameSize(1) 
		{
			name = new char[nameSize]; // ������� ������ ��� �����
			name[0] = '\0';       // ������������� ������ ������� � ������� ��������
		}
		// ����������� � �����������
		Product2(int id_val, const char* name_val, int qty, double prc) : id(id_val), quantity(qty), price(prc) //������������� ����� ����� name
 		{
			nameSize = 0; // ������� ������ ������� �����
			name = nullptr; // ������� ��������� �� ���, ����� �������� ������ ������
		
			for (nameSize = 0; name_val[nameSize] != '\0'; nameSize++) {}// �������� ������ �����
			nameSize++;     // ���������� �� 1 ��� �������� �������
			name = new char[nameSize]; // ������� ������ ��� �����	� ������������ ��������
			for (int i = 0; i < nameSize; i++)  
			{
				name[i] = name_val[i];  // ������� �������� �������
			}
		}
		Product2(const Product2& other) : id(other.id), quantity(other.quantity), price(other.price), nameSize(other.nameSize)
		{
			name = new char[nameSize];
			for (int i = 0; i < nameSize; i++) {
				name[i] = other.name[i];
			}
		}
		double totalValue()            // ����� ��������� �������
		{
			return quantity * price;
		}
		void restock(int amount)       //���������� ������
		{
			quantity += amount;
		}
		bool sell(int amount)          // �������(���� ���������� ������)
		{	// ���� ������� ������ ���� � ������ ��� ����� ���������� � �������
			if (amount > 0 && amount <= quantity)
			{
				quantity -= amount;
				return true;
			}
			else
				return false;
		}
		void applyDiscount(float percent) // ���������� ������
		{
			price -= price * (percent / 100); // ��������� ���� �� �������
		}

		~Product2() {
			delete[] name;
		}
		void print()
		{
			std::cout << "id:\t\t" << id << std::endl;
			std::cout << "������������:\t" << name << std::endl;
			std::cout << "����������:\t" << quantity << std::endl;
			std::cout << "����:\t\t" << price << std::endl;
			std::cout << "����� ���������:" << totalValue() << std::endl << std::endl;

		}

	};

int main()
{
	setlocale(LC_ALL, "Russian");
	Product n1(1, "��������", 10, 100);
	n1.print(); // ����� �������� �������

	n1.restock(3);
	n1.print();// ����� ����������	

	n1.sell(5);
	n1.print();// ����� �������

	n1.applyDiscount(10);	
	n1.print(); // ����� ���������� ������

	Product2 n2(2, "������", 20, 50);	
	n2.print(); // ����� �������� �������	

	Product2 n4(3, "�����", 15, 30);
	n4.print(); // ����� �������� �������	

	n4.restock(5);
	n4.print(); // ����� ����������


}
