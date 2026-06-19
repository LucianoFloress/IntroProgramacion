#include <iostream>
#include <string>
using namespace std;

// funciones jugador
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

// funciones PC

void reiniciarApariciones(int cantidadApariciones[])
{
    for (int i = 0; i < 6; i++)
    {
        cantidadApariciones[i] = 0;
    }
}

int main()
{
    srand(time(NULL));
    // array para guardar el puntaje de Todo Al X
    int puntos[6];
    int puntosFull, puntosPoker, puntosEscalera, puntosGenerala;
    int puntajeMaxJugador = 0;
    string nombreJugadaMax;

    // 5 dados de 6 caras
    int dados[5];

    // tiro los dados
    tirarDados(dados);
    cout << "Tirada jugador: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << dados[i] << " ";
    }
    cout << "\n";

    // array que guarda cuantas veces sale algun numero en la tirada.
    int cantidadApariciones[6] = {0};

    // evalua todo al X y guarda los puntos correspondientes.
    for (int i = 1; i <= 6; i++)
    {
        cout << "Todo al " << i << ": " << todoAlX(dados, i) << "\n";
        puntos[i] = todoAlX(dados, i);
    }

    for (int i = 1; i <= 6; i++)
    {
        if (puntos[i] > puntajeMaxJugador)
        {
            puntajeMaxJugador = puntos[i];
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
        if (puntosFull > puntajeMaxJugador)
        {
            puntajeMaxJugador = puntosFull;
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
        if (puntosPoker > puntajeMaxJugador)
        {
            puntajeMaxJugador = puntosPoker;
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
        if (puntosEscalera > puntajeMaxJugador)
        {
            puntajeMaxJugador = puntosEscalera;
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
        if (puntosGenerala > puntajeMaxJugador)
        {
            puntajeMaxJugador = puntosGenerala;
            nombreJugadaMax = "Generala";
        }
    }
    else
    {
        cout << "Generala: 0" << "\n";
    }

    cout << "La jugada mas alta fue: " << nombreJugadaMax << " (" << puntajeMaxJugador << ")" << "\n\n";

    // TURNO PC

    int puntajeMaxPc = 0;
    // reinicio las apariciones para la PC
    reiniciarApariciones(cantidadApariciones);

    // tiro los dados
    tirarDados(dados);
    cout << "Tirada PC: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << dados[i] << " ";
    }
    cout << "\n";

    for (int i = 1; i <= 6; i++)
    {
        cout << "Todo al " << i << ": " << todoAlX(dados, i) << "\n";
        puntos[i] = todoAlX(dados, i);
    }

    for (int i = 1; i <= 6; i++)
    {
        if (puntos[i] > puntajeMaxPc)
        {
            puntajeMaxPc = puntos[i];
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

    contarApariciones(dados, cantidadApariciones);

    if (esFull(cantidadApariciones))
    {
        cout << "Full: 30" << "\n";
        puntosFull = 30;
        if (puntosFull > puntajeMaxPc)
        {
            puntajeMaxPc = puntosFull;
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
        if (puntosPoker > puntajeMaxPc)
        {
            puntajeMaxPc = puntosPoker;
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
        if (puntosEscalera > puntajeMaxPc)
        {
            puntajeMaxPc = puntosEscalera;
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
        if (puntosGenerala > puntajeMaxPc)
        {
            puntajeMaxPc = puntosGenerala;
            nombreJugadaMax = "Generala";
        }
    }
    else
    {
        cout << "Generala: 0" << "\n";
    }

    cout << "La jugada mas alta fue: " << nombreJugadaMax << " (" << puntajeMaxPc << ")" << "\n\n";

    // comparamos y verificamos quien gana

    if (puntajeMaxJugador > puntajeMaxPc)
    {
        cout << "Gana el jugador" << "\n";
    }
    else if (puntajeMaxJugador == puntajeMaxPc)
    {
        cout << "Empate" << "\n";
    }
    else
    {
        cout << "Gana la Pc" << "\n";
    }

    return 0;
}