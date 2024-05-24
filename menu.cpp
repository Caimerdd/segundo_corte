#include <iostream>
#include "function1.cpp"
#include "function2.cpp"
#include "function3.cpp"
#include "function4.cpp"
#include "function5.cpp"
using namespace std;

main()
{
    int op;
    cout << "1. Ejercicio 1..." << endl;
    cout << "2. Ejercicio 2..." << endl;
    cout << "3. Ejercicio 3..." << endl;
    cout << "4. Ejercicio 4..." << endl;
    cout << "5. Ejercicio 5..." << endl;
    cout << "Ingrese la opcion" << endl;
    cin >> op;
    switch (op)
    {
    case 1:
        funcion1();
        break;

    case 2:
        funcion2();
        break;

    case 3:
        funcion3();
        break;

    case 4:
        funcion4();
        break;

    case 5:
        funcion5();
        break;

    default:
        cout << "Opcion no valida..." << endl;
        break;
    }
}
