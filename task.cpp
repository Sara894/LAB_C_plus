/* Описать класс «записная книжка». Предусмотреть возможность работы
 с произвольным числом записей,
 поиска записи по какому-либо признаку
  (например, по фамилии, дате рождения или номеру телефона), 
добавления и удаления записей, сортировки по разным полям. 
Вывод всех записей +
Вывод по номеру +
Удаление по номеру и фамилии +
Сортировка по году рождения +
*/
#include <iostream>
#include <ostream>
#include <string>
#include <list>
#include <iterator>
/* Итератор — это такая структура данных, 
которая используется для обращения к определенному элементу в контейнерах STL.
 Обычно из используют с контейнерами set, list , 
 а у вектора для этого применяют индексы */ 
//Для создания итератора мы должны с самого начала программы подключить библиотеку iterator
#include <algorithm>

using namespace std;
class Note
{
protected:
    string surname;
    unsigned int year;
    string phone;

public:
    Note() //для метода add перегрузка конструктора
    {
        surname = "NULL";
        year = 0;
        phone = "NULL";
    }
    Note(string SurName, int YearBirth, string phone)
    {
        surname = SurName;
        year = YearBirth;
        phone = phone;
    }
    //сеттеры - методы добавления данных
    void SetSurname()
    {
        cout << "Введите фамилию: " << endl;
        cin >> surname;
    }
    void SetYear()
    {
        cout << "Введите год рождения: " << endl;
        cin >> year;
    }
    void SetPhone()
    {
        cout << "Введите номер телефона: " << endl;
        cin >> phone;
    }
    void setall_INFO()
    {
        SetSurname();
        SetYear();
        SetPhone();
    }
    //геттеры - методы выведения данных
    string GetSurname()
    {
        return this->surname;
    }
    int GetYear()
    {
        return this->year;
    }
    string GetPhone()
    {
        return this->phone;
    }

    friend ostream &operator<<(ostream &out, Note &obj); // перегрузка операторов ввода и вывода
    friend istream &operator>>(istream &in, Note &obj);
};
// std::cout - это объект std::ostream
std::ostream &operator<<(std::ostream &out, Note &obj)
{
    out <<"Фамилия: "<< obj.surname << endl;
    out <<"Год рождения: "<< obj.year << endl;
    out <<"Телефон: "<< obj.phone << endl;
    return out;
} // на форуме в тг сказали перегрузить операторы >> и << а зачем я так и не понела
std::istream &operator>>(std::istream &in, Note &obj)
{
    in >> obj.surname;
    in >> obj.year;
    in >> obj.phone;
    return in;
}

bool Sr(Note man1, Note man2) //на Киберфоруме подсказали, предикат для метода сортировки
{
    return man1.GetYear() >= man2.GetYear();
}
// класс Записная книжка
class Notebook
{
private:
    list<Note> People;

public:
    void add()
    {
        Note *tmp = new Note();
        tmp->setall_INFO();
        this->People.push_back(*tmp);
        delete tmp;
    }
    void add_client(Note tmp) /* перегрузка метода добавления новой записи*/
    {
        this->People.push_back(tmp);
    }
    /*  вывод всех записей*/
    void Output()
    {
        cout << "________________________________________" << endl;
        list<Note>::iterator IT = People.begin(); //Метод begin() отправит итератор на начала контейнера.
        for (; IT != People.end(); IT++)          //А метод end() отправит на конец. А если точнее, то на одну ячейку больше последней. Если мы попытаемся вывести эту ячейку у нас появятся проблемы с компилятором
        {
            /* cout <<"Фамилия: "<< (*IT)->GetSurname() << endl; */
            cout << *IT << endl; //оператор перезагрузили чтобы здесь все работало
        }
        cout << "________________________________________" << endl;
    }
    void SearchByPhoneNumber(string Phone) //поиск по номеру телефона
    {
        bool p = false;
        list<Note>::iterator IT = People.begin();
        for (; IT != People.end(); IT++)
        {
            if (Phone == (*IT).GetPhone())  
                cout << *IT << endl;
            p = true;
        }
        if (!p)
            cout << "нет такого номера телефона в записной книжке" << endl;
    }
    void SortByYear() //сортировка по году рождения
    {

        People.sort(Sr);
    }

    void deleteinfo(string value) //удаление записи
    {
        list<Note>::iterator iter = People.begin();
        for (; iter != People.end(); iter++)
        {
            if ((*iter).GetPhone() == value ||
                ((*iter).GetSurname() == value))
            {
                cout << "Найдена запись" << endl;
                cout << *iter << endl;
                cout << "Удалить?(1 - да, 0 - нет)" << endl;
                int a;
                cin >> a;
                if (a != 0)
                    People.erase(iter);
                cout << "запись удалена" << endl;
                break;
            }
        }
    }
};

int menu()
{
    cout << "_________menu_______________" << endl;
    cout << "1 - Добавление записи в книжку: " << endl;
    cout << "2 - Открыть книжку и посмотреть всех знакомых: " << endl;
    cout << "3 - Найти знакомого по номеру телефона. " << endl;
    cout << "4 - Вычеркнуть знакомого из жизни по номеру телефона или фамилии. " << endl;
    cout << "5 - Отсортировать по старшинству. " << endl;
    cout << "6 - Закрыть книжку и пойти по своим делам. " << endl;
    cout << "_________end_______________" << endl;
    std::string choice;
    std::cin >> choice;

    char *end;
    int x = strtol(choice.c_str(), &end, 10);
    if (*end)
    {
        std::cout << "Введите число от 1 до 6!!!" << std::endl;
        return -1;
    }
    std::cout << x << std::endl;
    return x;
}

int main()
{
    setlocale(LC_ALL, "RU");
    list<Note>::iterator IT;
    Notebook Blue;  //создаем синюю записную книжку
    Notebook Red;   // красную
    Notebook Mum_s; // мамину

    while (true)
    {
        switch (menu())
        {
        case 1:
        {
            Blue.add();
        }
        break;
        case 2:
        {
            cout << "Открыть синюю книжку и посмотреть всех знакомых: " << endl;
            Blue.Output();
        }
        break;
        case 3:
        {
            cout << "Найти знакомого по номеру телефона. " << endl;
            cout << "Номер телефона: ";
            string Phone;
            cin >> Phone;
            Blue.SearchByPhoneNumber(Phone);
        }
        break;
        case 4:
        {
            cout << "Номер телефона или фамилия на латинице: ";
            string str;
            cin >> str;
            Blue.deleteinfo(str);
        }
        break;
        case 5:
            Blue.SortByYear();
            break;
        case 6:
            return 0;
            break;
        default:
            cout << "Вы что-то не то ввели! Попробуйте еще раз. " << endl;
        }
    }
}
