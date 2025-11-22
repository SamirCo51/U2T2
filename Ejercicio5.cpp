#include <iostream>
using namespace std;

template <typename T>
T alCuadrado (T num) 
{
    return num * num;
}

int sumatoria (int n) 
{
    if (n <= 0) 
    {
        return 0;
    } 
    else 
    {
        return n + sumatoria(n - 1);
    }
}

int main() 
{
    int numero;
    
    cout<<"Bienvenido"<<endl;
    cout<<"------------------"<<endl;
    cout<<"Puede ingresar 0 para finalizar el programa"<<endl;

    while (true) 
    {
        cout<<"Ingrese un numero entero positivo: ";
        cin>>numero;

        if (numero == 0) 
        {
            cout<<"Programa finalizado."<<endl;
            break;
        } 
        else if (numero < 0) 
        {
            cout<<"Por favor ingrese un numero entero positivo."<<endl;
            continue;
        }

        int cuadrado = alCuadrado(numero);
        int suma = sumatoria(numero);

        cout<<"El cuadrado de "<<numero<<" es: "<<cuadrado<<endl;
        cout<<"La sumatoria desde 1 hasta "<<numero<<" es: "<<suma<<endl;
        cout<<"------------------"<<endl;
        return 0;
    }
}
/*
    Mi propuesta para el programa es algo sencillo y que usa todos las clases que hemos visto, ademas que sirvio de practica para terminar de entender
    todo lo visto.
    Lo que quise hacer fue un programa que nos ayude a calcular el cuadrado de un numero y que despues nos ayude sumando todos los numeros que le preceden
    como por ejemplo, si se ingresa un 4 se nos dara 16 como resultado al ser su cuadrado, y despues se sumaran todos los numeros que esten antes de el
    que seria 1+2+3+4, y el resultado seria 10.
    Use un template para que la funcion "alCuadrado" reciba datos numericos de cualquier tipo como int, float o double.
    Para "sumatoria" use una funcion recursiva, lo cual permite que la funcion se termine llamando a si misma hasta llegar al caso base.
    El caso base es que cuando n es menor o igual que 0, la funcion se detiene y retorna 0.
    En el main implemente un bucle que hace que si el usuario ingrese un numero negativo, se le pida que ingrese un numero valido.
    Una vez evaluado el numero y comprobando que no sea ni negtivo ni 0, se llaman a las dos funciones y se muestran los resultados esperados.
*/