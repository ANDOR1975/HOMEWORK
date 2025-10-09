//#include<iostream>
//class String
//{
//private:
//    int size;
//    char* str;
//public:
//    String(const char* other)
//    {
//        int s = 0;
//        for (;other[s] != '\0';s++) {}
//        size = s;
//        str = new char[size + 1];
//        for (int i = 0;i < size;i++)
//        {   
//            str[i] = other[i];
//        }
//        str[size] = '\0';
//    }
//    //констр.копирования 
//    String(const String& ww)
//    {
//        size = ww.size;
//        str = new char[size + 1];
//        for (int i = 0; i < size; i++)
//        {
//            str[i] = ww.str[i];
//        }
//        str[size] = '\0';
//    }
//    //конструктор присваивания или перегрузка оператора=
//    // как понял сработает когда сумму будем присваивать уже созданному
//    // обьекту класса
//    String& operator=(const String& other)
//    {
//        if (this == &other)
//            return *this;
//		size = other.size;
//        delete[] str;
//        str = new char[other.size + 1];
//        str[other.size] = '\0';
//        for (int i = 0;i < other.size; i++)
//        {
//            str[i] = other.str[i];
//        }
//        return *this;
//    }
//// реализовать для класса string оператор +, который будет 
//// возвращать новую строку объединяющую в себе 
//// символы из двух слагаемых
//
//    String operator+(const String& two)
//    {
//        int sizeall = size + two.size;
//        char* all = new char[sizeall + 1];
//
//        for (int i = 0;i < size;i++)
//        {
//            all[i] = str[i];
//        }
//
//        for (int i = 0;i < two.size; i++)
//        {
//            all[size+i] = two.str[i];
//        }
//        all[sizeall] = '\0';
//
//        String rezult(all);
//        
//        delete[] all;
//        return rezult;
//    }
//
////реализовать для класса string метод trim, который 
//// будет возвращать новую строку без концевых 
//// пробелов (удалять проблеы в конце и в начале строки,
//// если они есть)
//    String& trim()
//    {
//        int start = 0; //индекс первого элемента
//        int end = size - 1;//индекс последнего  
//        while (start < end && str[start] == ' ')
//            start++;
//        while (end > start && str[end] == ' ')
//            end--;
//        int sizeTemp = end - start + 1;
//
//        char* tempArr = new char[sizeTemp + 1];
//
//        for (int i = 0;i < sizeTemp;i++)
//        {
//            tempArr[i] = str[start + i];
//        }
//        tempArr[sizeTemp] = '\0';
//        delete[] str;
//		size = sizeTemp;
//        str = tempArr;
//        return *this;
//    }
//// реализовать для класса string методы 
//// upper и lower, которые должны возвращать 
//// новый объект класса, где все буквы будут
//// приведены к верхнему и нижнему регистру соответственно
//    String upper()
//    {
//        char* upperStr = new char[size + 1];
//        for (int i = 0; i < size; i++)
//        {
//            if (str[i] >= 'a' && str[i] <= 'z')
//                upperStr[i] = str[i] - ('a' - 'A');
//            else
//                upperStr[i] = str[i];
//        }
//        upperStr[size] = '\0';
//        String result(upperStr);
//        delete[] upperStr;
//		return result;
//
//    }
//    String lower()
//    {
//        char* newstr = new char[size + 1];
//        for (int i = 0;i < size; i++)
//        {
//            if (str[i] >= 'A' && str[i] <= 'Z')
//                newstr[i] = str[i] + ('a' - 'A');
//            else newstr[i] = str[i];
//        }
//        newstr[size] = '\0';
//
//        return String(newstr);
//
//    }
//
//
//      ~String() { delete[] str; }
//
//    
//};
//
//int main()
//{
//	String str1("Hello, ");
//	String str2("   world   ");
//	String str3("SUPER!");
//	str3 = str1 + str2; // здесь сработает конструктор присваивания
//    str2.trim();
//	
//
//
//}
