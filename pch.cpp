#include "pch.h"
#include<iostream>
#include <vector>
using namespace std;


vector <int> factors(int number)
{
    vector <int> czynniki;
    for (int i = 2; i <= number; i++)
    { 
        while (number % i == 0)
        { 
            number /= i; 
            czynniki.push_back(i); 
        }
    }
    return czynniki; 
}

int NWD(int x, int y)
{
    if (x != y)
        return NWD(x > y ? x - y : x, y > x ? y - x : y);
    return x;
}

int main()
{
    int x, y;

    cout << "Podaj dwie liczby: ";
    cin >> x >> y;

    cout << "NWD(" << x << "," << y << ") = " << NWD(x, y) << endl;

    vector <int> czynniki = factors(12); 
    cout << "ile czynnikow: " << czynniki.size() << endl;
    for (int i = 0; i < czynniki.size(); i++)
        cout << czynniki[i] << " * ";

    system("pause");
    return 0;
}