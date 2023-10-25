#include <iostream>
#include <Windows.h> 
using namespace std;

int findLastPerson(int n, int& rounds) 
{
    if (n == 1)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        rounds++;
        return 2 * findLastPerson(n / 2, rounds) - 1;
    }
    else 
    {
        rounds++;
        return 2 * findLastPerson(n / 2, rounds) + 1;
    }
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "������ ������� �����: "; cin >> n;

    int rounds = 0;
    int lastPerson = findLastPerson(n, rounds);

    cout << "ʳ������ ��������� ���� ����� ��������: " << rounds << std::endl;
    cout << "����� �������� �������� ������: " << lastPerson << std::endl;

    return 0;
}