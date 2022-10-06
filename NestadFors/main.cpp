#include <iostream>
using namespace std;
//#define MULTIPLICATION_TABLE
void main()
{
    setlocale(LC_ALL, "");
#ifdef MULTIPLICATION_TABLE
    for (int i = 1; i <= 10; i++)//основной for
    {
        cout << "ТАблица умножения" << i << ":\n";
        // счетчика J ещу нет
        for (int j = 1; j <= 10; j++)// вложенный for
        {
            if (i < 10)cout << " ";
            cout << i << "*";
            if (j < 10)cout << " ";
            cout << j << "=";
            if (i * j < 100)cout << " ";
            if (i * j < 10)cout << " ";
            cout << i * j << endl;
        }
    }// счетчика J уже нет  
#endif // MULTIPLICATION_TABLEaet
    setlocale(LC_ALL, "");
    for (int i = 1; i <= 9; i++)
    {
       
        for (int j = 1; j <= 9; j++)
        {
            cout.width(5);// это свойство задает щирину
            //поля в знакопозициях если вывод был меньше заданной
            //щирины то следующее значени выведится за пределами
            //заданного поля в данном случае 5 знокопозицый
            //если выводимое значение требует больше знакопозицый
            // то он займет юольшне места на экране.
            cout << left;//выравнивает знаки по левому краю
            cout << i * j;

        }
        cout << endl;
    }
    
    
}