#include <iostream>

using namespace std;


void funcion1()
{
    int valor, acumulador = 0;
    do
    {
        cout << "Ingrese un valor: ";
        cin >> valor;
        if (valor != 9999)
        {
            acumulador += valor;
        }
    } while (valor != 9999);
    cout << "El valor acumulado es: " << acumulador << endl;
    if (acumulador == 0)
    {
        cout << "El valor acumulado es cero" << endl;
    }
    else if (acumulador > 0)
    {
        cout << "El valor acumulado es mayor a cero" << endl;
    }
    else
    {
        cout << "El valor acumulado es menor a cero" << endl;
    }
}
