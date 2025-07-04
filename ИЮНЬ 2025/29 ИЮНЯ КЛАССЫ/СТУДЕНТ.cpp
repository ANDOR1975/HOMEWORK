////Класс "Студент" (Student)
////-Поля:
////имя(name) - string
////возраст(age) - int
////средний балл(gpa) - double
////- Конструкторы : по умолчанию и с параметрами
////- Методы : геттеры и сеттеры для каждого поля с валидацией :
////имя: не пустое(можно не делать сложную проверку, но можно проверить, что строка не пустая)
////возраст : от 16 до 100 (условно)
////gpa : от 0.0 до 5.0 (или 10.0 - как принято в системе)
////- Метод : printInfo() - выводит информацию о студенте
//
//#include<iostream>
//#include<string>
//
//
//
//class Student {
//private:
//	std::string name;	
//	int age;
//	double gpa;	
//public:
//	Student() : name(""), age(0), gpa(0) {}//по умолчанию
//	Student(std::string a, int b, double c) 
//	{
//		setName(a);
//		setAge(b);
//		setGpa(c);
//		
//	}
//	//SETTERS
//	void setName(std::string a)
//	{
//		if (a.empty()) //использовал .empty() — метод класса std::string
//		{
//			std::cout << "\nИмя не может быть пустым."    <<std::endl;
//			std::exit(1);
//		}
//		name = a;	
//		
//	}
//	
//	void setAge(int b)
//	{
//		if (b < 16 || b > 100) {
//			std::cout <<"\nВозраст "<< name   << " должен быть от 16 до 100." << std::endl;
//			std::exit(1);	
//		}
//		age = b;
//
//	}	
//	void setGpa(double c)
//	{
//		if (c < 0.0 || c > 5.0) {
//			std::cout << "\nСредний балл должен быть от 0.0 до 5.0." << std::endl;
//			std::exit(1);	
//		}
//		gpa = c;
//		printInfo();
//	}
//
//	 void printInfo() const
//	{
//		std::cout << "\nИмя: " << name << std::endl;
//		std::cout << "Возраст: " << age << std::endl;
//		std::cout << "Средний балл: " << gpa << std::endl;
//	}
//	 //GETTERS
//	std::string getName() 
//	 {
//		 return name;
//	 }
//	int getAge() 
//	 {
//		 return age;
//	 }	
//
//	double getGpa() 
//	 {
//		 return gpa;
//	 }	
//	 
//};
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//
//	Student student1("Иван", 20, 1.3);
//	Student student2("Мария", 22, 4.5);	
//
//
//}
//
//
