#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;


enum color{red, green, blue};
class monstr
{
    int health, ammo;
    color skin;
    char *name;
   // private:
    public:
      monstr(int he = 100, int am = 10 );//конструктор
      monstr(color sk);
      monstr(char *nam);
      void draw(int x, int y, int scale, int position);//обЪявление метода
      int get_health(){return health;}//определение метода 
      int get_ammo() {return ammo;}
};

monstr::monstr(int he, int am)
{
    health = he; ammo = am; skin = red; name = 0;
}

monstr::monstr(color sk)
{
    switch(sk)
    {
        case red: health = 100; ammo = 10; skin = red; name = 0; break;
        case green: health = 500; ammo = 20; skin = green; name = 0; break;
        case blue: health = 600; ammo = 40; skin = blue; name = 0; break;
    }
}

monstr::monstr (char *nam)
{
    name = new char [strlen(nam) + 1];
    // к длине строки прибавляется 1 - для хранения 0 - символа
    strcpy(name, nam);
    health = 100; ammo = 10; skin = red;
}

void monstr::draw(int x, int y, int scale, int position)
{
    cout<<x<<endl;
}

int main()
{
    monstr Vasia;//объект класса Монстр с параметрами по умолчанию
    monstr Super(200, 300);//объект класса Монстр с явной инициализацией
    monstr stado[100];//массив обЪектов с параметрами по умолчанию
    monstr *beavis = new monstr(10);//динамический объект 
    //второй параметр задается по умолчанию
    monstr &butthead = Vasia; //ссылка на объект
    int n = Vasia.get_ammo();
    stado[5].draw(10,20,3,4);
    cout<<beavis->get_health();
    //указатель this
    monstr * m = new monstr("ORK");
    monstr Green(green);

}