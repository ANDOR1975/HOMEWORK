#include <iostream>

class Point
{
private:
    int x;
    int y;
public:
    void setX(int x)
    {
        this->x = x;
    }
    int getX()
    {
        return this->x;
    }
    void setY(int y)
    {
        this->y = y;
    }
    int getY()
    {
        return y;
    }
    Point(int x, int y)
    {
        setX(x);
        setY(y);
    }
    Point()
    {
        setX(0);
        setY(0);
    }
};

class Rectangle
{
private:
    int width;
    int height;
public:
    void setWidth(int width)
    {
        if (width > 0)
            this->width = width;
        else
            throw "ширина должна быть больше 0";
    }
    int getWidth() { return width; }
    //Вася не передавай отрицательные значения
    void setHeight(int height)
    {
        if (height > 0)
            this->height = height;
        else
            throw "высота должна быть больше 0";
    }
    int getHeight() { return height; }
    int square()
    {
        return width * height;
    }
    int perimetr()
    {
        return (height + width) * 2;
    }
};

class Student
{
private:
    std::string name;
    int age;
    double avgScore;
public:
    void setAge(int age)
    {
        if (age > 0)
            this->age = age;
        else
            throw "возраст должен быть положительным";
    }
    int getAge() { return age; }
    void setAvgScore(double avgScore)
    {
        if (avgScore > 0)
            this->avgScore = avgScore;
        else
            throw "средний балл должен быть положительным";
    }
    double getAvgScore() { return avgScore; }

    void setName(const std::string& name) // первое копирование
    {
        if (name != "")
            this->name = name; //второе копирование
        else
            throw "имя не может быть пустым";
    }
    std::string getName()
    {
        return name;
    }
    void showInfo()
    {

    }
};

//конструктор копирования
//конструктор перемещения
//деструктор
//перегрузка операторов


class String
{
private:
    char* str;
    int size;
public:
    int length() { return size; }
    String()
    {
        size = 1;
        str[0] = '\0';
    }
    String(const char* char_string)
    {
        int index = 0;
        for (; char_string[index] != '\0'; index++)
        {
        }
        this->size = index + 1;

        str = new char[this->size];

        for (int i = 0; i < size; i++)
        {
            str[i] = char_string[i];
        }
    }
    //конструктор копирования
    //по- умолчанию копирует значения всех полей через =
    //писать этот конструктор имеет смысл, только при наличии в классе указателей
    //конструктор копирования позволяет расписать как будет создаваться копия
    String(const String& other)
    {
        this->size = other.size;

        this->str = new char[other.size];
        for (int i = 0; i < other.size; i++)
        {
            str[i] = other.str[i];
        }
    }
    ~String()
    {
        delete[] str;
    }
};


int main()
{
    String s("ada");
    String s2(s);


    //char* sr = new char[5] {'a', 's', 'd'};
    //std::string s;
    //std::cout << sr;
}
