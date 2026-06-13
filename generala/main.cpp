#include <iostream>
#include <string>
using namespace std;
/*
el juego es una sola tirada. de ahi hay que mandar los valores que salen, a cada funcion, todo al 1, o al 2, o al 3, etc. y tambien verificar si se forma algun juego, y de formarse, se guarda el valor mas alto, para luego compararlo contra la pc.
-una funcion para hacer 5 dados, de 6 caras. ✅
-una funcion para todo al 'X', es tratar de sacar la mayor cantidad de numeros iguales para sumarlos y decidir el grupo, por ejemplo: me sale 4 4 4 4 2, me conviene guardar esos 16 para "todo al 4", otro ejemplo: me sale 5 5 2 2 2, puedo decidir, si todo al 5 (10) o todo al 2 (6).
-una funcion para full, que 3 dados sean iguales y 2 dados sean iguales. (30pts)
-una funcion para poker, que 4 dados tengan el mismo numero (40pts)
-una funcion para escalera, del 1 al 5 o del 2 al 6 (50pts)
-una funcion para la generala, todos los dados iguales (60pts)
-una funcion que tire los dados.
*/

// void tirarDados(int dados[])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         dados[i] = rand() % 6 + 1;
//     }
// }

int todoAlX(int dados[], int x)
{
    int suma = 0;
    for (int i = 0; i < 5; i++)
    {
        if (dados[i] == x)
        {
            suma += dados[i];
        }
    }
    return suma;
}

void contarApariciones(int dados[], int cantidadApariciones[])
{
    for (int i = 0; i < 5; i++)
    {
        if (dados[i] == 1)
        {
            cantidadApariciones[0]++;
        }
        if (dados[i] == 2)
        {
            cantidadApariciones[1]++;
        }
        if (dados[i] == 3)
        {
            cantidadApariciones[2]++;
        }
        if (dados[i] == 4)
        {
            cantidadApariciones[3]++;
        }
        if (dados[i] == 5)
        {
            cantidadApariciones[4]++;
        }
        if (dados[i] == 6)
        {
            cantidadApariciones[5]++;
        }
    }
}

bool esFull(int cantidadApariciones[])
{
    bool hayDos = false;
    bool hayTres = false;

    for (int i = 0; i < 6; i++)
    {
        if (cantidadApariciones[i] == 3)
        {
            hayTres = true;
        }
        if (cantidadApariciones[i] == 2)
        {
            hayDos = true;
        }
    }
    return hayTres && hayDos;
}

bool esPoker(int cantidadApariciones[])
{
    bool hayCuatro = false;

    for (int i = 0; i < 6; i++)
    {
        if (cantidadApariciones[i] == 4)
        {
            return true;
        }
    }
    return false;
}

bool esGenerala(int cantidadApariciones[])
{

    for (int i = 0; i < 6; i++)
    {
        if (cantidadApariciones[i] == 5)
        {
            return true;
        }
    }
    return false;
}

bool esEscalera(int cantidadApariciones[])
{
    if ((cantidadApariciones[0] == 1 && cantidadApariciones[1] == 1 && cantidadApariciones[2] == 1 && cantidadApariciones[3] == 1 && cantidadApariciones[4] == 1 && cantidadApariciones[5] == 0) || (cantidadApariciones[0] == 0 && cantidadApariciones[1] == 1 && cantidadApariciones[2] == 1 && cantidadApariciones[3] == 1 && cantidadApariciones[4] == 1 && cantidadApariciones[5] == 1))
    {
        return true;
    }
    return false;
}

int main()
{
    srand(time(NULL));

    // dados de 6 caras
    int dados[5] = {5, 4, 4, 5, 5};

    // en este array, guardo cuantas veces se repite el numero de los dados.
    int cantidadApariciones[6] = {0};

    // tiro los dados
    // tirarDados(dados);
    for (int i = 0; i < 5; i++)
    {
        cout << dados[i] << " ";
    }
    cout << "\n";

    // evalua todo al X
    // cout << "puntaje todo al 1: " << todoAlX(dados, 1) << "\n";
    // cout << "puntaje todo al 2: " << todoAlX(dados, 2) << "\n";
    // cout << "puntaje todo al 3: " << todoAlX(dados, 3) << "\n";
    // cout << "puntaje todo al 4: " << todoAlX(dados, 4) << "\n";
    // cout << "puntaje todo al 5: " << todoAlX(dados, 5) << "\n";
    // cout << "puntaje todo al 6: " << todoAlX(dados, 6) << "\n";

    // funcion que cuenta las apariciones de los numeros de los dados.
    contarApariciones(dados, cantidadApariciones);
    // muestro cuantas veces salen los numeros
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << cantidadApariciones[i] << " ";
    // }
    // cout << "\n";

    // funcion que evalua si hay full o no, y muestra.
    cout << "es full? " << esFull(cantidadApariciones) << "\n";

    // funcion que evalua si hay poker o no, y muestra.
    cout << "es poker? " << esPoker(cantidadApariciones) << "\n";

    // funcion que evalua si hay generala o no, y muestra.
    cout << "es generala? " << esGenerala(cantidadApariciones) << "\n";

    // funcion que evalua si hay escalera o no, y muestra.
    cout << "es escalera? " << esEscalera(cantidadApariciones) << "\n";

    return 0;
}