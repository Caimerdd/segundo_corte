/*Escribe un programa que muestre los múltiplos de 3 y 5
simultáneamente a partir del 15 hasta el 45.*/

#include <iostream>

using namespace std;

void multiplos();

void multiplos()
{
    int pos=15;
    cout << "Los multiplos de 3 y 5, de 15 a 45, son: " << endl;
    do
    {
        if (pos%3==0 && pos%5==0)
        {
            cout << pos << endl;
        }
        pos++;
    } while (pos<=45);
}