#include<iostream>
using namespace std;

//#define TEMPERATURE
//#define TARGET
//#define HOMW_WORK
#define CALC_1
//define - ����������
//defunition - ����������
void main()
{
	setlocale(LC_ALL, "Rus");
#if defined TEMPERATURE
	int temperature;
	cout << "������� ����������� �������:"; cin >> temperature;
	if (temperature > 0)
		cout << "�� ����� �����" << endl;
	else
		cout << "�� ����� �������" << endl;
#endif


#ifdef TARGET

	int n;
	cout << "������� �����"; cin >> n;
	if (!(n > 0 && n < 10))
		cout << "���� ��������" << endl;
	else
		cout << "�� ������������" << endl;
 #endif  //TARGET

#ifdef HOMW_WORK
	int a, b, rez;
	cout << "������� 1 �����"; cin >> a;
	cout << "������� 2�����"; cin >> b;
	cout << "������� ����������� ��������('+' '-' '*' '/'";
	cin >> a;
	cin >> b;
	if (rez == '+')cout << a + b;
#endif // HOMW_WORK
# if defined CALC_1 //������ �����
	// ���� ���������� CALC_1,  �� ������������� ���,�� ���������
//#endif, ����� ����� �����������
	using namespace std;

	double a, b ; //����� �������� � ����������
	char s; // Sing-���� ��������
	cout << "������� ������� �������������� ���������";
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
#endif //����� �����
	
	
}
  