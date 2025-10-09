
                                             // ВАРИАНТ ПЕРВЫЙ
/*
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, c;
    cout << "введите  число  a  \n";
    cin >> a;
    cout << "введите  число b   \n";
    cin >> b;
    cout << "введите  число c   \n";
    cin >> c;

    if (a > b && a > c)
    {
        cout << "a    большое  число ";
    }
    else if (b > c)
    {

        cout << "b  большее число ";
    }
    if (c > a)

    {
        cout << "c большее число";
    }

}


*/



                                // ВАРИАНТ  2  С ПРИМЕНЕННИЕМ ПЕРЕММНОЙ MAX


/*

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, c;

    cout << "Введите 3 числа через пробел: ";
    cin >> a >> b >> c;

    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
                       //проверка на равенство

  if (a == b && b!=c) {
        cout << "внимание -числа  1 и 2   одинаковые\n";
    }
    if (b == c && a!=c) {
        cout << "внимание  -  числа 2 и 3 одинаковые\n";
    }
    if (a == c && b != a ) {
        cout << "внимание  - числа 3 и 1 одинаковые \n";
    }
    if (a==c && b==c && c==a){
    cout << "все числа одинаковые  \n";
    }

    cout << "максимальное число  - " << max << endl;


    return 0;
}  

*/

