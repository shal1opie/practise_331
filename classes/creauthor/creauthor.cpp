#include <iostream>
#include <locale>
#include <string>
#include <Windows.h>
#include <regex>

using namespace std;

class creauthor
{
private:
    string name;
    string surname;
    string title;
public:
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
    void setSurname(string s)
    {
        surname = s;
    }
    string getSurname()
    {
        return surname;
    }
    void setTitle(string t)
    {
        title = t;
    }
    string getTitle()
    {
        return title;
    }
};

class book : public creauthor
{
private:
    string year;
public:
    void setYear(string y)
    {
        year = y;
    }
    string getYear()
    {
        return year;
    }
};

class author : public creauthor
{
private:
    string date;
public:
    void setDate(string dt)
    {
        date = dt;
    }
    string getDate()
    {
        return date;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //setlocale(LC_ALL, "Russian");
    book b;
    author a;
    string name, surname, title, date, year;

    cout << "Введите имя автора: ";
    cin >> name;
    b.setName(name);
    a.setName(name);

    cout << "Введите фамилию автора: ";
    cin >> surname;
    b.setSurname(surname);
    a.setSurname(surname);

    cout << "Введите дату рождения автора: ";
    cin >> date;
    a.setDate(date);

    cout << "Введите заглавие книги: ";
    cin >> title;
    a.setTitle(title);
    b.setTitle(title);

    cout << "Введите год выпуска книги: ";
    cin >> year;
    b.setYear(year);

    cout << endl << "Имя автора: " << b.getName() << endl;
    cout << "Фамилия авторя: " << b.getSurname() << endl;
    cout << "Дата рождения автора: " << a.getDate() << endl;
    cout << "Заглавие книги: " << b.getTitle() << endl;
    cout << "Дата выпуска книги: " << b.getYear() << endl;

    return 0;
}