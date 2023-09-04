/*Ejemplo: Determinar el numero menor de un arreglo*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int hallarMax(int *, int);

int main()
{

    const int n_elementos = 5;
    int numeros[n_elementos] = {-5, -3, 0, 55, 2};
    cout << "El numero mayor es: " << hallarMax(numeros, n_elementos) << endl;
    cout << "Hola este es el tengereche, saludos y feliz año nuevo" << endl;
    cout << "\n";
    system("pause");
    return 0;
}


int hallarMax(int *dir_numeros, int n_elementos) // La funcion crea un puntero "dir_numeros" que apunta
// a la dirección del arreglo transmitido
{
    int max = *dir_numeros;

    for (int i = 0; i < n_elementos; i++)
    {
        if (*dir_numeros > max)
        {
            max = *dir_numeros;
        }
        dir_numeros++;
    }
    return max;
}