////����� "�������" (Student)
////-����:
////���(name) - string
////�������(age) - int
////������� ����(gpa) - double
////- ������������ : �� ��������� � � �����������
////- ������ : ������� � ������� ��� ������� ���� � ���������� :
////���: �� ������(����� �� ������ ������� ��������, �� ����� ���������, ��� ������ �� ������)
////������� : �� 16 �� 100 (�������)
////gpa : �� 0.0 �� 5.0 (��� 10.0 - ��� ������� � �������)
////- ����� : printInfo() - ������� ���������� � ��������
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
//	Student() : name(""), age(0), gpa(0) {}//�� ���������
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
//		if (a.empty()) //����������� .empty() � ����� ������ std::string
//		{
//			std::cout << "\n��� �� ����� ���� ������."    <<std::endl;
//			std::exit(1);
//		}
//		name = a;	
//		
//	}
//	
//	void setAge(int b)
//	{
//		if (b < 16 || b > 100) {
//			std::cout <<"\n������� "<< name   << " ������ ���� �� 16 �� 100." << std::endl;
//			std::exit(1);	
//		}
//		age = b;
//
//	}	
//	void setGpa(double c)
//	{
//		if (c < 0.0 || c > 5.0) {
//			std::cout << "\n������� ���� ������ ���� �� 0.0 �� 5.0." << std::endl;
//			std::exit(1);	
//		}
//		gpa = c;
//		printInfo();
//	}
//
//	 void printInfo() const
//	{
//		std::cout << "\n���: " << name << std::endl;
//		std::cout << "�������: " << age << std::endl;
//		std::cout << "������� ����: " << gpa << std::endl;
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
//	Student student1("����", 20, 1.3);
//	Student student2("�����", 22, 4.5);	
//
//
//}
//
//
