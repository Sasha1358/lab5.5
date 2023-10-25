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
    cout << "Введіть кількість людей: "; cin >> n;

    int rounds = 0;
    int lastPerson = findLastPerson(n, rounds);

    cout << "Кількість повторень після першої ітерації: " << rounds << std::endl;
    cout << "Номер останньої залишеної людини: " << lastPerson << std::endl;

    return 0;
}