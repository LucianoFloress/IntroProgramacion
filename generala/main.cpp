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
    // array para guardar el puntaje de Todo Al X
    int puntos[6];

    int puntosFull, puntosPoker, puntosEscalera, puntosGenerala;
    int puntajeMax = 0;
    string nombreJugadaMax;

    // 5 dados de 6 caras
    int dados[5];

    // array guarda cuantas veces sale algun numero en la tirada.
    int cantidadApariciones[6] = {0};

    // tiro los dados
    tirarDados(dados);
    cout << "Tirada jugador: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << dados[i] << " ";
    }
    cout << "\n";

    // evalua todo al X y guarda los puntos correspondientes.
    for (int i = 1; i <= 6; i++)
    {
        cout << "Todo al " << i << ": " << todoAlX(dados, i) << "\n";
        puntos[i] = todoAlX(dados, i);
    }
    
    for (int i = 1; i <= 6; i++)
    {
        if (puntos[i] > puntajeMax)
        {
            puntajeMax = puntos[i];
            if (i == 1)
            {
                nombreJugadaMax = "Todo al 1";
            }
            if (i == 2)
            {
                nombreJugadaMax = "Todo al 2";
            }
            if (i == 3)
            {
                nombreJugadaMax = "Todo al 3";
            }
            if (i == 4)
            {
                nombreJugadaMax = "Todo al 4";
            }
            if (i == 5)
            {
                nombreJugadaMax = "Todo al 5";
            }
            if (i == 6)
            {
                nombreJugadaMax = "Todo al 6";
            }
        }
    }

    // funcion que usa el array cantidadApariciones para contar dichas apariciones.
    contarApariciones(dados, cantidadApariciones);

    if (esFull(cantidadApariciones))
    {
        cout << "Full: 30" << "\n";
        puntosFull = 30;
        if (puntosFull > puntajeMax)
        {
            puntajeMax = puntosFull;
            nombreJugadaMax = "Full";
        }
    }
    else
    {
        cout << "Full: 0" << "\n";
    }

    if (esPoker(cantidadApariciones))
    {
        cout << "Poker: 40" << "\n";
        puntosPoker = 40;
        if (puntosPoker > puntajeMax)
        {
            puntajeMax = puntosPoker;
            nombreJugadaMax = "Poker";
        }
    }
    else
    {
        cout << "Poker: 0" << "\n";
    }

    if (esEscalera(cantidadApariciones))
    {
        cout << "Escalera: 50" << "\n";
        puntosEscalera = 50;
        if (puntosEscalera > puntajeMax)
        {
            puntajeMax = puntosEscalera;
            nombreJugadaMax = "Escalera";
        }
    }
    else
    {
        cout << "Escalera: 0" << "\n";
    }

    if (esGenerala(cantidadApariciones))
    {
        cout << "Generala: 60" << "\n";
        puntosGenerala = 60;
        if (puntosGenerala > puntajeMax)
        {
            puntajeMax = puntosGenerala;
            nombreJugadaMax = "Generala";
        }
    }
    else
    {
        cout << "Generala: 0" << "\n";
    }

    cout << "La jugada mas alta fue: " << nombreJugadaMax << " (" << puntajeMax << ")" << "\n";

    return 0;
}