#include <iostream>

using namespace std;

void funcion2()
{

    int numero, contador = 0;

    do
    {
        cout << "Ingrese un numero negativo: ";
        cin >> numero;

        if (numero < 0)
        {
            numero = numero * -1;
            cout << "El numero positivo es: " << numero << endl;
            contador++;
        }
        else
        {
            cout << "El numero ingresado no es negativo" << endl;
        }

    } while (contador < 15);

    cout << "Se han ingresado 15 numeros negativos" << endl;

    return;
}