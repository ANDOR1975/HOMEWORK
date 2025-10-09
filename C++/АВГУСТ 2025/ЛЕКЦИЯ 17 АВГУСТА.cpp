////��� ������ � ����� �����
////
////1) �������� ������ ����� ����� �, ��������� ������ �������� � ����, ������� ��� ��������
////��������� ��������� ��� ��������� list
////�������� ���, ��� �� ����� ������ �������� ���������
////
////2) �������� ���������, ������� ����� ����������� � ������������ ����� �����, ���� �� �� ����� 0
////����� ���������� ������� � �������
////������� ������� �������������� �������� ��� ��������� �������, � ��� �� ����������� � ������������
////
////3) �������� ������(list) �� 10 ���������, ��������� ������ ���� � ��������� ������� ��� �������� ������� 3
//
//
//
//#include <iostream>
//#include <vector>
//#include <list>
//#include <forward_list>
//
//class IntArray
//{
//private:
//    int* arr;
//    size_t size;
//public:
//    IntArray(size_t size)
//    {
//        this->size = size;
//        arr = new int[size] {};
//    }
//    ~IntArray()
//    {
//        delete[] arr;
//        arr = nullptr;
//    }
//    IntArray(const IntArray& other)
//    {
//        this->size = other.size;
//        this->arr = new int[size];
//        for (int i = 0; i < this->size; i++)
//        {
//            this->arr[i] = other.arr[i];
//        }
//    }
//    void set(size_t index, int value)
//    {
//        if (index >= 0 && index < size)
//        {
//            arr[index] = value;
//        }
//        else
//        {
//            throw "";
//        }
//    }
//};
//
//
//class Book
//{
//private:
//    std::string title;
//    std::string author;
//    int year;
//    int pages;
//public:
//    Book() : title(""), author(""), year(0), pages(1)
//    {
//        std::cout << "������ ������ " << this << std::endl;
//    }
//    Book(const std::string& title, const std::string& author,
//        int year, int pages)
//    {
//        this->title = title;
//        this->author = author;
//        this->year = year;
//        this->pages = pages;
//    }
//    Book(const Book& other)
//    {
//        this->title = other.title;
//        this->author = other.author;
//        this->year = other.year;
//        this->pages = other.pages;
//        std::cout << "������ ��� ����������" <<
//            "�� " << &other << "� " << this << std::endl;
//    }
//    ~Book()
//    {
//        std::cout << "������ " << this << " ��� �����\n";
//    }
//    bool isAntique()
//    {
//        return year < 1900;
//    }
//};
//
//class String
//{
//private:
//    char* str;
//    int size;
//public:
//    //int length() { return size; }
//    //����������� ���������� �����, ������ ��������
//    //�� ���������� ���������
//    //�� ����������� ������� ����� �������� ������ ����������� ������
//    int length() const { return size; }
//    String()
//    {
//        size = 1;
//        str[0] = '\0';
//    }
//    String(const char* char_string)
//    {
//        int index = 0;
//        for (; char_string[index] != '\0'; index++)
//        {
//        }
//        this->size = index + 1;
//
//        str = new char[this->size];
//
//        for (int i = 0; i < size; i++)
//        {
//            str[i] = char_string[i];
//        }
//    }
//    //����������� �����������
//    //��- ��������� �������� �������� ���� ����� ����� =
//    //������ ���� ����������� ����� �����, ������ ��� ������� � ������ ����������
//    //����������� ����������� ��������� ��������� ��� ����� ����������� �����
//    String(const String& other)
//    {
//        this->size = other.size;
//
//        this->str = new char[other.size];
//        for (int i = 0; i < other.size; i++)
//        {
//            str[i] = other.str[i];
//        }
//    }
//    void operator= (const String& other)
//    {
//        this->size = other.size;
//
//        delete[]str;
//
//        this->str = new char[other.size];
//        for (int i = 0; i < other.size; i++)
//        {
//            str[i] = other.str[i];
//        }
//    }
//    ~String()
//    {
//        if (str != nullptr)
//            delete[] str;
//    }
//    char& operator[] (int index)
//    {
//        if (index < size && index >= 0)
//            return str[index];
//        //return *(this->str + index);
//        else if (index < 0 && index > -size)
//            return str[size + index - 1];
//        else
//            throw "";
//    }
//    char operator[] (int index) const
//    {
//        if (index < size && index >= 0)
//            return str[index];
//        //return *(this->str + index);
//        else if (index < 0 && index > -size)
//            return str[size + index - 1];
//        else
//            throw "";
//    }
//    bool operator== (const String& other) const
//    {
//        if (this->size != other.size)
//            return false;
//        for (int i = 0; i < size; i++)
//        {
//            if (str[i] != other.str[i])
//                return false;
//        }
//        return true;
//    }
//    bool operator== (const char* other) const
//    {
//        int otherSize = sizeof(other) / sizeof(char);
//        if (size != otherSize)
//            return false;
//        for (int i = 0; i < size; i++)
//        {
//            if (str[i] != other[i])
//                return false;
//        }
//        return true;
//    }
//    bool operator!= (const String& other) const
//    {
//        return !(*this == other);
//        //return !this->operator==(other);
//    }
//    String operator+(const String& other)
//    {
//        int newSize = this->size + other.size - 1;
//        char* newArr = new char[newSize];
//        for (int i = 0; i < this->size - 1; i++)
//        {
//            newArr[i] = this->str[i];
//        }
//        for (int j = 0; j < other.size; j++)
//        {
//            newArr[j + this->size - 1] = other.str[j];
//        }
//        String result(newArr);
//        delete[] newArr;
//        return result;
//    }
//    String lower()
//    {
//        int newSize = this->size;
//        char* newArr = new char[newSize];
//        for (int i = 0; i < this->size; i++)
//        {
//            if (this->str[i] >= 'A' && this->str[i] <= 'Z')
//            {
//                newArr[i] = this->str[i] + 32;
//            }
//            else
//            {
//                newArr[i] = this->str[i];
//            }
//        }
//        String result(newArr);
//        delete[] newArr;
//        return result;
//    }
//    String(String&& other)
//    {
//        this->size = other.size;
//        this->str = other.str;
//        other.str = nullptr;
//    }
//};
//
//bool operator== (const char* c_str, const String& str)
//{
//    return str == c_str;
//}
//
////������������ ������
//template <typename T>
//class Test
//{
//private:
//    T* ptr;
//    int size;
//};
//
//int main()
//{
//    //Test<int> t1;
//    std::vector<int> v1;
//    //int* arr = new int [] { 1, 2, 3, 5, 6 };
//    std::vector<int> v2 = { 1, 2, 3, 5, 6 };
//    //������� ������ �� ���� �����
//    std::vector<int> v3(5, 0);
//
//    //��������� ��������� ���������� �������� �����
//    v2.reserve(20);
//
//    std::cout << v2.size() << " " << v2.capacity() << "\n";
//    //��������� �������� � �����
//    v2.push_back(10);
//    //������ �� ������ ������� v2[0]
//    v2.front();
//    //������ �� ��������� ������� v2[v2.size() - 1]
//    v2.back();
//    //������� ���������
//    std::cout << v2.size() << " " << v2.capacity() << "\n";
//    v2.pop_back();
//    //���������� bool, true - ���� ������ ������
//    v2.empty();
//    //���������� ��� �������� � ����������
//    v2.at(0);
//    //���������� ������� �� �������
//    int* pt = v2.data();
//    //������� ������� (������ = 0)
//    v2.clear();
//    //�������� �������, �������� ������ ��������� �����
//    v2.shrink_to_fit();
//    std::cout << v2.size() << " " << v2.capacity();
//
//    std::list<int> l1{ 5, 3, 2, 1 };
//    std::list<int> l2(5, 0);
//
//    std::list<int>::iterator it = l1.begin();
//    //auto it2 = l1.begin();
//    std::cout << *it;
//    //it++;
//    std::cout << *it;
//
//    std::vector<int> vt(l1.begin(), l1.end());
//
//    //int test = 5;
//    //int& ref = test;
//    //int* ptr = &test;
//    //*ptr = 10;
//
//    //setlocale(LC_ALL, "ru");
//    //String s("asasd");
//    //String s2("asasd");
//    //String ms(std::move(s2));
//    //s2.lower();
//    //String s3;
//    //s3 = s2 + s;
//    //s3.lower();
//    //s2.operator+(s);
//    //s = s2;
//    //std::cout << ("asd" == s);
//    ////s.operator==(s2);
//    //s[-1] = 'F';
//    ////std::cout << s[-1];
//    //for (int i = 0; i < s.length(); i++)
//    //{
//    //    std::cout << s[i];
//    //}
//    ////int res = 3 * 4;
//    ////res = multy(3, 4);
//}
