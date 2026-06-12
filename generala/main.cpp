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

void tirarDados(int dados[])
{
    for (int i = 0; i < 5; i++)
    {
        dados[i] = rand() % 6 + 1;
    }
}

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

if (dados[i] = i)
{
    cont[i]++;
}


int main()
{
    srand(time(NULL));
    // dados 6 caras
    int dados[5];
    int cont[7] = {};

    // tiro los dados
    tirarDados(dados);
    for (int i = 0; i < 5; i++)
    {
        cout << dados[i] << " ";
    }
    cout << "\n";

    // evalua todo al X
    cout << "puntaje todo al 1: " << todoAlX(dados, 1) << "\n";
    cout << "puntaje todo al 2: " << todoAlX(dados, 2) << "\n";
    cout << "puntaje todo al 3: " << todoAlX(dados, 3) << "\n";
    cout << "puntaje todo al 4: " << todoAlX(dados, 4) << "\n";
    cout << "puntaje todo al 5: " << todoAlX(dados, 5) << "\n";
    cout << "puntaje todo al 6: " << todoAlX(dados, 6) << "\n";

    // evalua full


    return 0;
}