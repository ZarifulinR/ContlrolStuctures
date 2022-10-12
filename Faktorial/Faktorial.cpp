#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
//#define STEPEN
#define FAKTORIAL
//#define ASCII
//#define FIBONACH
//#define FIBONACH_1
//#define PROS
void main()
{
#ifdef FAKTORIAL
	setlocale(LC_ALL, "rus");
	int n;
	double f = 1; //faktorial
	cout << "Введите число"; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "!=";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif 
	setlocale(LC_ALL, "Rus");
#ifdef STEPEN
	double a;// основание степени которое умножается само на себя
	int n; //показатель степени
	double N = 1;// Степень
	cout << "ведите число"; cin >> a;
	cout << "Введитое показатель степени"; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif 
#ifdef ASCII
	cout << "Таблица ASCII символов:\n";
	setlocale(LC_ALL, "c");//включает кодировку по умолчанию.
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << "";
	}
	cout << endl;
#endif 
#ifdef FIBONACH
	int n;
	cout << "Введите предельное число"; cin >> n;
	for (int a = 0, b = 1, c = a = b; a < n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif 
#ifdef FIBONACH_1
	int n;
	int a = 0, b = 1, i;
	cout << "Введите колличество чисел из ряда фибоначи: "; cin >> n;
	for (i = 0; i < n; i++)
	{
		a = a + b;
		b = a - b;

		cout << a << '\t';
	}
	cout << endl;
#endif // FIBONACH_1
#ifdef PROS
	int n;
	cout << "Введите предельное  число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true;//предпологаем что число простое 
		//но это нужно проверить
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
				simple = false;
			break;
		}
		if (simple)cout << i << "\t";
	}
	cout << endl;
#endif // PROS

}