

#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;


// написать функцию, которая примет два целых числа (границы диапазона), 
// а вернёт случайное число из этого диапазона(1 АПРЕЛЯ 2023 ГОД)


int stwo(int a, int b)
{		
	cout << "введите первое число диапазона - ";
	cin >> a;
	cout << "введите второ число диапазона  - ";
	cin >> b;

	srand(time(0));
		int r = rand() % (b - a + 1) + a;
		cout << "случайное число - " << r;

	 return r;
}



//написать функцию, которая примет два числа и bool значение.
//Если bool значение - true, функция должна вернуть наибольшее из двух чисел,
//в противном случае наименьшее
//(1 АПРЕЛЯ 2023 ГОД)


int  sdr(int t, int r ,int d)
{
	cout << '\n' << '\n' << "введите первое число - ";
	cin >> t;
	cout << "введите второе число - ";
	cin >>r;
	cout << "введите значение для bool - ";
	cin >> d;
    bool v = d>0 ;
	int max = 0;
	int min = 0;
	if (t>r?max=t:max=r)
	if (t<r?min=t:min=r)
	cout << "возврашаемое значение -" <<( v ? max : min);	 
	return (v ? max : min);
} 





//написать функцию, которая проверит число на чётность.
//Функция должна принять число, а вернуть bool значение
//(1 АПРЕЛЯ 2023 ГОД)


int dsa(int x)
{
	cout << '\n' << '\n' << "введите число на проверку чётности - ";
	cin >> x;
  bool c=( x % 2 == 0);
  cout <<"возвращаемое значение на чётность - " << c;
  return  c; 
}



int main()
{
	setlocale(LC_ALL, "ru");
	int a = 0;
	int b = 0;
	int c = 0;
	int r = 0;

	stwo(a, b);
	dsa(r);
	sdr(a, b, c);
	cout << '\n';

	

		
	

	
	
	




	


