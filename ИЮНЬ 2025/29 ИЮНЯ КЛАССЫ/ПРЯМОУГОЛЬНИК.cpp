////�������� ����� "�������������" (Rectangle)
////-����: width(������), height(������) - private
////- ������������ : �� ���������(������ = 0, ������ = 0) � � �����������
////- ������ :
////    setWidth(double w), setHeight(double h) - � ��������� �� �����������������
////    getWidth(), getHeight()
////    getArea() - ���������� �������
////    getPerimeter() - ���������� ���������
////******************************************************************
//#include<iostream>
//class Rectangle
//{
//private:
//	double width;
//	double height;	
//public:
//	// ����������� �� ���������
//	Rectangle() : width(0), height(0) {}
//	// ����������� � �����������
//	Rectangle(double w, double h)
//	{
//		setWidth(w);
//		setHeight(h);
//	}
//	//SETTERS****************************************************	
//	// ��������� ������ � ��������� �� �����������������
//	void setWidth(double w) 
//	{
//		if (w >= 0) {
//			width = w;
//		} else {
//			std::cout << "������ �� ����� ���� �������������" << std::endl;
//			std::cout << "�� �����: " << w << std::endl;
//			std::exit(1);//�������� ����� ������ ���������� ���������	
//			      //(�� ���� ��������� ������) ��� �� ���������� �������
//		}
//	}
//	// ��������� ������ � ��������� �� �����������������
//	void setHeight(double h)
//	{
//		if (h >= 0) {
//			height = h;
//		} else {
//			std::cout << "������ �� ����� ���� �������������" << std::endl;
//			std::cout << "�� �����: " << h << std::endl;
//			std::exit(1);
//		}
//	}
//	//GETTERS****************************************************
//	double getWidth()
//	{
//		return width;
//	}	
//	double getHeight()
//	{
//		return  height;
//	}
//	int getArea()
//	{
//		return width * height; // ���������� �������	
//	}
//	int getPerimeter()
//	{
//		return 2 * (width + height); // ���������� ���������
//	}	
//};	
//int main()
//{
//	setlocale(LC_ALL, "Russian"); 
//	Rectangle rect1;
//	rect1.setWidth(10.2);
//	rect1.setHeight(5.6);
//	std::cout<<"������\t\t"<<rect1.getWidth() << '\n'; // ����� ������ ��������������
//	std::cout<<"������\t\t"<<rect1.getHeight() << '\n'; // ����� ������ ��������������
//	std::cout<<"�������\t\t"<<rect1.getArea() << '\n'; // ���������� ������� ��������������	
//	std::cout<<"��������\t"<<rect1.getPerimeter()<<'\n'; // ���������� ��������� ��������������
//}
//
