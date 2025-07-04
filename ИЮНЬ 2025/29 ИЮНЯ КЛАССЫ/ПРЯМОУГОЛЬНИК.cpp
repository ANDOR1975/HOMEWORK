////�������� ����� "�������������" (Rectangle)
////-����: width(������), height(������) - private
////- ������������ : �� ���������(������ = 0, ������ = 0) � � �����������
////- ������ :
////    setWidth(double w), setHeight(double h) - � ��������� �� �����������������
////    getWidth(), getHeight()
////    getArea() - ���������� �������
////    getPerimeter() - ���������� ���������
//
//#include<iostream>
//
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
//
//	void getWidth()
//	{
//		std::cout << "������ ��������������: " << width << std::endl; // ����� ������
//	}	
//	void getHeight()
//	{
//		std::cout << "������ ��������������: " << height << std::endl; // ����� ������
//	}
//
//	int getArea()
//	{
//		std::cout << "������� ��������������: " << width * height << std::endl; // ����� �������
//		return width * height; // ���������� �������	
//	}
//	
//	int getPerimeter()
//	{
//		std::cout << "�������� ��������������: " << 2 * (width + height) << std::endl; // ����� ���������
//		return 2 * (width + height); // ���������� ���������
//	}	
//
//};	
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian"); 
//
//	Rectangle rect1;
//	rect1.setWidth(10.2);
//	rect1.setHeight(5.6);
//	rect1.getWidth(); // ����� ������ ��������������
//	rect1.getHeight(); // ����� ������ ��������������
//	rect1.getArea(); // ���������� ������� ��������������	
//	rect1.getPerimeter(); // ���������� ��������� ��������������
//	
//}
//
