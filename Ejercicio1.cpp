#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// La función recursiva para generar laspermutaciones
void permutar(string& str, int l, int r) 
{
    // Tenemos el caso base que es si l es igual a r se acaba la permutación
    if (l == r) 
    {
        cout << str << endl;

    } 
    else 
    {
        // Hacemos el recorrido desde l hasta llegar a r
        for (int i = l; i <= r; i++) 
        {
            // Se intercambia el carácter actual con el carácter en la posición l
            swap(str[l], str[i]);
            
            // Se hace la llamada recursiva para la siguiente posición
            permutar(str, l + 1, r);
            
            // Se hace el backtracking para restaurar la cadena original (backtracking es una técnica que permite revertir los cambios realizados en la llamada recursiva)
            swap(str[l], str[i]);
        }
    }
}

// Tenemos el main o función principal
int main() 
{
    char opcion;
    do 
    {
        string str;
        // Hace validar la cadena para tener al menos 2 caracteres
        do 
        {
            cout << "Ingrese una cadena de texto (minimo 2 caracteres): ";
            cin >> str;
            if (str.length() < 2) 
            {
                cout << "Error: La cadena debe tener al menos 2 caracteres." << endl;
            }
        } while (str.length() < 2); // Mientras la cadena tenga menos de 2 caracteres se repite el bucle

        int n = str.length(); // Obtenemos el tamaño de la cadena 
        
        cout << "Entrada: \"" << str << "\"" << endl;
        cout << "Salida:" << endl;
        
        permutar(str, 0, n - 1); // Aquí se llama a la función permutar

        cout << "\nDesea continuar? (s/n): "; //Como adicional preguntamos si desea continuar
        cin >> opcion;
        cout << endl; 

    } while (opcion == 's' || opcion == 'S'); // Mientras la opción sea s o S se repite el bucle
    
    return 0;
}
