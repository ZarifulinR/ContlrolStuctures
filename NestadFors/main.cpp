#include <iostream>
using namespace std;
//#define MULTIPLICATION_TABLE
void main()
{
    setlocale(LC_ALL, "");
#ifdef MULTIPLICATION_TABLE
    for (int i = 1; i <= 10; i++)//�������� for
    {
        cout << "������� ���������" << i << ":\n";
        // �������� J ��� ���
        for (int j = 1; j <= 10; j++)// ��������� for
        {
            if (i < 10)cout << " ";
            cout << i << "*";
            if (j < 10)cout << " ";
            cout << j << "=";
            if (i * j < 100)cout << " ";
            if (i * j < 10)cout << " ";
            cout << i * j << endl;
        }
    }// �������� J ��� ���  
#endif // MULTIPLICATION_TABLEaet
    setlocale(LC_ALL, "");
    for (int i = 1; i <= 9; i++)
    {
       
        for (int j = 1; j <= 9; j++)
        {
            cout.width(5);// ��� �������� ������ ������
            //���� � ������������� ���� ����� ��� ������ ��������
            //������ �� ��������� ������� ��������� �� ���������
            //��������� ���� � ������ ������ 5 ������������
            //���� ��������� �������� ������� ������ ������������
            // �� �� ������ ������� ����� �� ������.
            cout << left;//����������� ����� �� ������ ����
            cout << i * j;

        }
        cout << endl;
    }
    
    
}