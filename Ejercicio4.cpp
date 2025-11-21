#include <iostream>
#include <cmath>

using namespace std;
const double PI = 3.14159265;


double factorial(int n) 
{
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

double seno(double x, int n) 
{
    if (n < 0) 
    return 0; 
    return (pow(-1, n) * pow(x, 2 * n + 1) / factorial(2 * n + 1)) + seno(x, n - 1);
}

double coseno(double x, int n) 
{
    if (n < 0) return 0; 
    return (pow(-1, n) * pow(x, 2 * n) / factorial(2 * n)) + coseno(x, n - 1);
}

int main() 
{
    double grados;
    cout << "Ingresa grados: ";
    cin >> grados;

    double rad = grados * PI / 180.0;
    int terminos = 9;

    cout << "Seno:   " << seno(rad, terminos) << endl;
    cout << "Coseno: " << coseno(rad, terminos) << endl;

    return 0;
}