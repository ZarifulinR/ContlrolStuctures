#include<iostream>
using namespace std;

//#define TEMPERATURE
//#define TARGET
//#define HOMW_WORK
#define CALC_1
//define - определить
//defunition - определить
void main()
{
	setlocale(LC_ALL, "Rus");
#if defined TEMPERATURE
	int temperature;
	cout << "Введите температуру воздуха:"; cin >> temperature;
	if (temperature > 0)
		cout << "На улице тепло" << endl;
	else
		cout << "На улице холодно" << endl;
#endif


#ifdef TARGET

	int n;
	cout << "Введите число"; cin >> n;
	if (!(n > 0 && n < 10))
		cout << "Цель поражена" << endl;
	else
		cout << "Вы промахнулись" << endl;
 #endif  //TARGET

#ifdef HOMW_WORK
	int a, b, rez;
	cout << "Введите 1 число"; cin >> a;
	cout << "Введите 2число"; cin >> b;
	cout << "Введите необходимую операцию('+' '-' '*' '/'";
	cin >> a;
	cin >> b;
	if (rez == '+')cout << a + b;
#endif // HOMW_WORK
# if defined CALC_1 //начало блока
	// если определено CALC_1,  то нижеследующий код,до дерективы
//#endif, будет виден компелятору
	using namespace std;

	double a, b ; //Числа вводимые с клавиатуры
	char s; // Sing-знак операции
	cout << "Введите простые арифметические выражение";
	cin >> a >> s >> b;
	//cout <<a<<s<<b;
	//if (s == '+')cout << a + b;
	//else if (s == '-')cout << a - b;
	//else if (s == '*')cout << a * b;
	//else if (s == '/')cout << a / b;
	//else cout << "Eror no operation";
	switch (s)
	{
	case '+':cout << a << "+" << b << "="<<a+b<< endl ;break;
	case '-': cout << a << "-" << b << "=" << a - b << endl; break;
	case '*': cout << a << "*" << b << "=" << a * b << endl; break;
	case '/': cout << a << "/" << b << "=" << a / b << endl; break;
	
	default:cout << "Error: No operation";



		break;
	}
#endif //конец блока
	
	
}
  