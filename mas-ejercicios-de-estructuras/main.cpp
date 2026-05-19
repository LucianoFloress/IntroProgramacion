#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cctype>

using namespace std;

int main()
{
    /*
    string usuario, clave;

    cout << "ingrese usuario y contrasenia " << "\n";
    cin >> usuario;
    cin >> clave;

    while (usuario != "admin" || clave != "admin123")
    {
        cout << "datos invalidos" << "\n";
        cout << "ingrese usuario y contrasenia " << "\n";
        cin >> usuario;
        cin >> clave;
    }

    cout << "Bienvenido" << "\n";
    */
    /*

    int num = 0;
    int negativo = 0;
    int positivo = 0;
    int cero = 0;
    int contador = 1;

    while (contador <= 10)
    {
        cout << "ingrese un numero" << "\n";
        cin >> num;

        if (num < 0)
        {
            negativo++;
        }
        else if (num > 0)
        {
            positivo++;
        }
        else
        {
            cero++;
        }
        contador++;
    }

    cout << "hubo " << negativo << " negativos" << "\n";
    cout << "hubo " << positivo << " positivos" << "\n";
    cout << "hubo " << cero << " ceros" << "\n";
    */
    /*
    int num = 0;
    int negativo = 0;
    int positivo = 0;
    int cero = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << "ingrese un numero " << "\n";
        cin >> num;

        if (num < 0)
        {
            negativo++;
        }
        else if (num > 0)
        {
            positivo++;
        }
        else
        {
            cero++;
        }
    }
    cout << "positivos: " << positivo << "\n";
    cout << "negativos: " << negativo << "\n";
    cout << "ceros: " << cero << "\n";
    */
    /*
    int num = 0;
    int mayor = 0;
    int pos = 1;

    cout << "ingrese un numero " << "\n";
    cin >> mayor;

    for (int i = 1; i <= 7; i++)
    {
        if (num > mayor)
        {
            mayor = num;
            pos = i;
        }
        cout << "ingrese otro numero " << "\n";
        cin >> num;
    }
    cout << "Mayor: " << mayor << "\n";
    cout << "Posicion: " << pos << "\n";
    */
    /*
    double num;
    double sumatoria = 0;
    double cantidad_numeros = 0;
    double promedio = 0;

    cout << "ingresar numeros positivos " << "\n";
    cin >> num;

    while (num > 0)
    {
        sumatoria += num;
        cantidad_numeros++;
        cin >> num;
    }
    promedio = sumatoria / cantidad_numeros;
    cout << "Suma: " << sumatoria << "\n";
    cout << "Cantidad: " << cantidad_numeros << "\n";
    cout << "Promedio: " << promedio << "\n";
    */
   
    return 0;
}