#include <iostream>
#include<conio.h>
using namespace std;

#define Enter 13
#define Escape 27
#define UP_ARROW 72 
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77
//#define IF_SHOOTER
void main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Shooter\n" << endl;
    char key;
    key = _getch();
    do
    {
        key = _getch();
       // cout << (int)key << "\t" << key << endl;
#ifdef IF_SHOOTER
        if (key == 'w' || key == 'W' || key == UP_ARROW)
        {
            cout << "Вперед" << endl;
        }
        else if (key == 'a' || key == 'A' || key == LEFT_ARROW)
        {
            cout << "влево" << endl;
        }
        else if (key == 'd' || key == 'D' || key == RIGHT_ARROW)
        {
            cout << "вправо" << endl;
        }
        else if (key == 's' || key == 'S' || key == DOWN_ARROW)
        {
            cout << "Назад" << endl;
        }
        else if (key == ' ')
        {
            cout << "пыжок" << endl;
        }
        else if (key == Enter)
        {
            cout << "Огонь" << endl;
        }
        else
        {
            if (key != -32 && key != Escape) cout << "Error" << endl;
        }
#endif
        switch (key)
        {
        case'w':    
        case UP_ARROW :
        case'W':cout     << "Вперед" << endl; break;
        case's':    
        case DOWN_ARROW :
        case'S':cout     << "Назад" << endl;  break;
        case'a':     
        case LEFT_ARROW :
        case'A':    cout << "Влево" << endl;  break;
        case'D':    
        case RIGHT_ARROW :
        case'd':     cout << "Вправо" << endl;  break;
        case' ':cout     << "Прыжок"    << endl; break;
        case Enter: cout << "Огонь"     << endl; break;
        case  -32:break;
        case Escape:break; cout << "Exit";
        default: cout    << "Error"     << endl;

        }
    } while (key != Escape);
 

}