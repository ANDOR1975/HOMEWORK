
                                             // ������� ������
/*
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, c;
    cout << "�������  �����  a  \n";
    cin >> a;
    cout << "�������  ����� b   \n";
    cin >> b;
    cout << "�������  ����� c   \n";
    cin >> c;

    if (a > b && a > c)
    {
        cout << "a    �������  ����� ";
    }
    else if (b > c)
    {

        cout << "b  ������� ����� ";
    }
    if (c > a)

    {
        cout << "c ������� �����";
    }

}


*/



                                // �������  2  � ������������ ��������� MAX


/*

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, c;

    cout << "������� 3 ����� ����� ������: ";
    cin >> a >> b >> c;

    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
                       //�������� �� ���������

  if (a == b && b!=c) {
        cout << "�������� -�����  1 � 2   ����������\n";
    }
    if (b == c && a!=c) {
        cout << "��������  -  ����� 2 � 3 ����������\n";
    }
    if (a == c && b != a ) {
        cout << "��������  - ����� 3 � 1 ���������� \n";
    }
    if (a==c && b==c && c==a){
    cout << "��� ����� ����������  \n";
    }

    cout << "������������ �����  - " << max << endl;


    return 0;
}  

*/

