#include <iostream>
#include <string>

//������������
enum Departments
{
    development,
    qa,
    design
};
//���������
struct User
{
    int age;
    std::string name;
    Departments depart;
};
 
void showUserInfo(const User& user)
{
    std::cout << "���:\t" << user.name << std::endl;
    std::cout << "�������:" << user.age << std::endl;
    std::cout << "�����:\t" << user.depart << std::endl;
}

User& findLowAge(User* users[], int size)
{
    User* min = users[0];
    for (int i = 1; i < size; i++)
    {
        if (users[i]->age < min->age)
        {
            min = users[i];
        }
    }
    return *min;
}

int main()
{
    //���������� � ���������������� �������������
    User u1;
    u1.age = 25;
    u1.name = "����";
    u1.depart = Departments::development;
    //������������� ��� ����������
    User u2{ 30, "����", Departments::qa };
    u2.age = 32;
    //��������� �� ��������� ���������
    User* ptr_u = &u1;
    ptr_u->age = 20;
    (*ptr_u).age = 20;


    User arr[]{ u1, u2 };
    //std::cout << u1.age << " " << arr[0].age << std::endl;
    //u1.age = 45;
    //std::cout << u1.age << " " << arr[0].age << std::endl;
    User* arr2[]{ &u1, &u2, ptr_u };
    std::cout << u1.age << " " << arr2[0]->age << std::endl;
    u1.age = 45;
    std::cout << u1.age << " " << arr2[0]->age << std::endl;
    setlocale(LC_ALL, "ru");
    /*showUserInfo(u1);
    showUserInfo(arr[0]);
    showUserInfo(*(arr2[0]));*/
    showUserInfo(findLowAge(arr2, 3));
}
