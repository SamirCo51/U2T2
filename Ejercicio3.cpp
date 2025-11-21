#include <iostream>

using namespace std;

// Crearemos la función fibonacci que nos ayudara a generar el número fibonacc i
int fibonacci(int n) 
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2); // Esta es la fórmula de fibonacci
}

// Ahora crearemos la función contarEnRango que nos ayudara a contar los números fibonacci en el rango
int contarEnRango(int n, int min, int max) 
{
    int valorActual = fibonacci(n);

    if (valorActual > max)
    
    {
        return 0;
    }

    int esValido = 0;
    if (valorActual >= min) 
    {
        esValido = 1;
        cout << "Numero encontrado: " << valorActual << endl;
    }

    return esValido + contarEnRango(n + 1, min, max); // Hacemos la llamada recursiva
}

// Al final ya tenemos la función main que nos ejecutara todo el programa
int main() 
{
    int rangoMin = 1000;
    int rangoMax = 2000;

    cout << "Buscar el Fibonacci con fucion recursiva" << endl;
    cout << "Hallaremos el numero Fibonacci dentro de: " << rangoMin << " y " << rangoMax << endl;

    int cantidad = contarEnRango(0, rangoMin, rangoMax); // Hacemos la llamada a la función contarEnRango para obtener la cantidad de números fibonacci en el rango

    cout << "Los numeros de Fibonacci dentro del rango definido: " << cantidad << endl;

    return 0;
}