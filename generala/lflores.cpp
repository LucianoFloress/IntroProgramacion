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

void calcularTodoAlX(int dados[], int puntos[], int &puntajeMax, string &nombreJugadaMax, string todoAl[])
{
    for (int i = 0; i < 6; i++)
    {
        puntos[i] = todoAlX(dados, i + 1);
        cout << "Todo al " << i + 1 << ": " << puntos[i] << "\n";
        if (puntos[i] > puntajeMax)
        {
            puntajeMax = puntos[i];
            nombreJugadaMax = todoAl[i];
        }
    }
}

void contarApariciones(int dados[], int cantidadApariciones[])
{
    for (int i = 0; i < 5; i++)
    {
        cantidadApariciones[dados[i] - 1]++;
    }
}

void evaluarJugada(bool jugada, string nombreJugada, int puntos, int &puntajeMax, string &nombreJugadaMax)
{

    if (jugada)
    {
        cout << nombreJugada << ": " << puntos << "\n";
        if (puntos > puntajeMax)
        {
            puntajeMax = puntos;
            nombreJugadaMax = nombreJugada;
        }
    }
    else
    {
        cout << nombreJugada << ": 0" << "\n";
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
    int dados[5];
    int puntos[6];
    int puntajeMaxJugador = 0;
    string nombreJugadaMax = "";
    string todoAl[6] = {"Todo al 1", "Todo al 2", "Todo al 3", "Todo al 4", "Todo al 5", "Todo al 6"};

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
    calcularTodoAlX(dados, puntos, puntajeMaxJugador, nombreJugadaMax, todoAl);

    contarApariciones(dados, cantidadApariciones);

    evaluarJugada(esFull(cantidadApariciones), "Full", 30, puntajeMaxJugador, nombreJugadaMax);

    evaluarJugada(esPoker(cantidadApariciones), "Poker", 40, puntajeMaxJugador, nombreJugadaMax);

    evaluarJugada(esEscalera(cantidadApariciones), "Escalera", 50, puntajeMaxJugador, nombreJugadaMax);

    evaluarJugada(esGenerala(cantidadApariciones), "Generala", 60, puntajeMaxJugador, nombreJugadaMax);

    cout << "La jugada mas alta fue: " << nombreJugadaMax << " (" << puntajeMaxJugador << ")" << "\n\n";

    // TURNO PC
    int puntajeMaxPc = 0;
    // reinicio las apariciones si no se acumulan con las del jugador
    for (int i = 0; i < 6; i++)
    {
        cantidadApariciones[i] = 0;
    }

    tirarDados(dados);
    cout << "Tirada PC: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << dados[i] << " ";
    }
    cout << "\n";

    calcularTodoAlX(dados, puntos, puntajeMaxPc, nombreJugadaMax, todoAl);

    contarApariciones(dados, cantidadApariciones);

    evaluarJugada(esFull(cantidadApariciones), "Full", 30, puntajeMaxPc, nombreJugadaMax);

    evaluarJugada(esPoker(cantidadApariciones), "Poker", 40, puntajeMaxPc, nombreJugadaMax);

    evaluarJugada(esEscalera(cantidadApariciones), "Escalera", 50, puntajeMaxPc, nombreJugadaMax);

    evaluarJugada(esGenerala(cantidadApariciones), "Generala", 60, puntajeMaxPc, nombreJugadaMax);

    cout << "La jugada mas alta fue: " << nombreJugadaMax << " (" << puntajeMaxPc << ")" << "\n\n";

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