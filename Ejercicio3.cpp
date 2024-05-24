
#include <iostream>

using namespace std;

void funcion3();

void funcion3() {
    int num;
    char opt;
    do {
        cout << "Ingrese el numero que desee: ";
        cin >> num;
        cout << "Quiere continuar (S/N)? ";
        cin >> opt;
    } while (opt == 'S');
}

