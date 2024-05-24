#include <iostream>

using namespace std;

// Funcion
void funcion4();

// Un procedimiento
void funcion4(){
    int num;
    int suma = 0;

    do {
        cout << "Ingrese un numero (distinto de cero): ";
        cin >> num;

        if (num != 0 && num % 2 != 0) {
            suma += num;
        }
    } while (num != 0);

    cout << "La suma de los numeros impares distintos de cero es: " << suma << endl;

}
