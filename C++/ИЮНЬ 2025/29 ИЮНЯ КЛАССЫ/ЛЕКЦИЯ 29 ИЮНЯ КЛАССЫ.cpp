//#include <iostream>
//
//struct Date
//{
//    int day;
//    int month;
//    int year;
//};
//
//void showDate(const Date& dt)
//{
//    std::cout << dt.day << "/" << dt.month << "/" << dt.year << std::endl;
//}
//
////2
//enum Category
//{
//    book,
//    movies,
//    food
//};
//
//struct Product
//{
//    std::string name;
//    uint32_t price;
//    Category cat;
//};
//
//Product** findForCategory(Product* products[], int size, Category findCat)
//{
//    int count = 0;
//    for (int i = 0; i < size; i++)
//    {
//        if (products[i]->cat == findCat)
//            count++;
//    }
//    Product** newArray = new Product * [count];
//    for (int i = 0, p = 0; i < size; i++)
//    {
//        if (products[i]->cat == findCat)
//        {
//            newArray[p] = products[i];
//            p++;
//        }
//    }
//    return newArray;
//}
//
//struct Test
//{
//    int value;
//    void function()
//    {
//        value++;
//    }
//};
//
////���
////������������
////������������
////�����������
////����������
//
////������������ - ��� ����������� ������ � ������ ������ � ����
////�������� - ��� ���� ������ ���� ������� �� ��������� �����
////��� ���� ��� �� �������� � ����� ������� setter � getter
////getter - �����, ������� ���������� �������� ����
////setter - �����, ������� ������ �������� ���� �� ����������� ��������
////����������� - �����, ������� ���������� ��� �������� �������
//
//class Test2
//{
//private:
//    int value;
//public:
//    //����������� � �����������
//    Test2(int value)
//    {
//        //this->value = value;
//        this->setValue(value);
//    }
//    //����������� ��-���������
//    Test2()
//    {
//        value = 10;
//    }
//    void setValue(int newValue)
//    {
//        if (newValue >= 10)
//        {
//            value = newValue;
//        }
//        else
//        {
//            value = 10;
//        }
//    }
//    int getValue()
//    {
//        return value;
//    }
//    void function()
//    {
//    }
//};
//
//namespace ttt
//{
//    class Delegate
//    {
//    private:
//        int field1;
//        int field2;
//        int field3;
//    public:
//        Delegate(int f1, int f2, int f3)
//        {
//            field1 = f1;
//            this->field2 = f2;
//            field3 = f3;
//        }
//        Delegate(int f1, int f2) : Delegate(f1, f2, 10)
//        {
//        }
//        Delegate(int f1) : Delegate(f1, 5)
//        {
//        }
//
//    };
//};
//
//int main()
//{
//    Test2 t3(6);
//    Test2 tt(t3);
//    Test2 t4;
//
//    Test2* pttest = new Test2(3);
//
//
//    Test t1;
//    Test t2;
//    t1.value = 1;
//    t1.function();
//    t2.function();
//    /* Product p1{"1", 1000, Category::book};
//     Product p2{"2", 2000, Category::movies};
//     Product* arr[] = {&p1, &p2};*/
//}
