#include <iostream>
#include <cmath>

using namespace std;
const double PI = 3.14159265;

// Usaremos funciones recursivas para calcular el seno y coseno
double factorial(int n) 
{
    if (n <= 1) return 1;
    return n * factorial(n - 1); // Este es la recursiva para el factorial
}

double seno(double x, int n)
{
    if (n < 0) 
    return 0; 
    return (pow(-1, n) * pow(x, 2 * n + 1) / factorial(2 * n + 1)) + seno(x, n - 1); // Esta es la formula para calcular el seno
}

double coseno(double x, int n) 
{
    if (n < 0) return 0; 
    return (pow(-1, n) * pow(x, 2 * n) / factorial(2 * n)) + coseno(x, n - 1); // Esta es la formula para calcular el coseno
}

int main() 
{
    double grados;
    cout << "Ingresa grados: ";
    cin >> grados;

    double rad = grados * PI / 180.0; // Para usar las series de Taylor debemos obligatoriamente convertir a radianes los grados ingresados
    int terminos = 9; // Este es el numero de terminos que usaremos en las series de Taylor

    cout << "Seno:   " << seno(rad, terminos) << endl;
    cout << "Coseno: " << coseno(rad, terminos) << endl;

    return 0;
}