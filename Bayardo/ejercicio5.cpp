#include <iostream>

using namespace std;

void funcion5()
{
    int i = 15;
    do
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << i << " es multiplo de 3 y 5" << endl;
            cout << "______________________________" << endl;
            cout << "Gracias por utilizar este programa " << endl;
        }
        i++;
    } while (i <= 45);
}