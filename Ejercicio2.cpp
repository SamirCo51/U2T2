#include <iostream>

using namespace std;


// Tenemos la función esPrimo que nos ayuda a verificar si el número es primo
bool esPrimo(int n, int i = 2) 
{
    // Tenemos el caso base
    if (n <= 1) return false;
    if (i * i > n) return true;
    if (n % i == 0) return false;

    // Hacemos el paso recursivo
    return esPrimo(n, i + 1);   
}

// Tenemos la función encontrarPrimo que nos ayuda a encontrar el primo más grande menor que n
int encontrarPrimo(int n) 
{
    // Tenemos el caso base
    if (n <= 1) return -1;     
    
    // Hacemos la verificación
    if (esPrimo(n)) 
    {
        return n;
    }
    
    // Hacemos la llamada recursiva
    return encontrarPrimo(n - 1);
}

// Ya aqui tenemos la función main que ejecuta todo el programa
int main() 
{
    int n;
    char opcion;

    do 
    {
        cout << "Ingrese un numero entero positivo n: ";
        cin >> n;

        if (n <= 2) 
        {
            cout << "No hay numeros primos menores que " << n << endl;
        } 
        else 
        {
            int resultado = encontrarPrimo(n - 1);
            cout << "El numero primo mas grande menor que " << n << " es: " << resultado << endl;
        }

        cout << "¿Desea continuar ingresando valores? (s/n): ";
        cin >> opcion;

    } while (opcion == 's' || opcion == 'S');

    return 0;
}
