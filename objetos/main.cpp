/* ejericicio 1
#include <iostream>
#include <string>
using namespace std;

class Jugador {
    // atributos
    string nombre;
    public:
    // metodos
    void setNombre(string nuevoNombre);
    //void mostrar();
};

void Jugador::setNombre(string nuevoNombre){
    nombre = nuevoNombre;
    cout << "Mi nombre es " << nombre << "\n";
}

// void Jugador::mostrar(){
//     cout << nombre;
// }

int main()
{
    Jugador Saludo;

    Saludo.setNombre("Manuel");
    //Saludo.mostrar();

    return 0;
}
*/
/* ejercicio 2
#include <iostream>
#include <string>
using namespace std;

class Armadura
{
    // atriutos
    int resistencia;

public:
    // metodos
    void recibirDanio(int danio);
    void mostrar();

    // constructor
    Armadura();
};

void Armadura::recibirDanio(int danio)
{
    resistencia -= danio;
};

Armadura::Armadura()
{
    resistencia = 100;
}

void Armadura::mostrar()
{
    cout << resistencia;
}

int main()
{
    Armadura juego;
    juego.recibirDanio(20);

    juego.mostrar();

    return 0;
}
*/
/*ejercicio 3 combinado con el 1 y 2
#include <iostream>
#include <string>
using namespace std;

class Armadura
{
    // atributo
    int armadura;

public:
    // metodos
    void recibirDanio(int danio);
    int getArmadura();
    // constructor
    Armadura();
};

void Armadura::recibirDanio(int danio)
{
    armadura -= danio;
};

Armadura::Armadura()
{
    armadura = 100;
}

int Armadura::getArmadura()
{
    return armadura;
}

class Personaje
{
    // atributos
    string nombre;
    Armadura armadura;

public:
    // metodos
    void miNombreEs();
    void danio(int danio);
    // recuperamos el valor de la armadura
    int getArmadura();
    Personaje(string nombreInicial);
};

void Personaje::danio(int danio)
{
    armadura.recibirDanio(danio);
};

int Personaje::getArmadura()
{
    return armadura.getArmadura();
}

Personaje::Personaje(string nombreInicial){
    nombre = nombreInicial;
}

void Personaje::miNombreEs(){
    cout << nombre << " ";
}

int main()
{
    Personaje P1("Aldebaran");
    P1.miNombreEs();
    P1.danio(10);
    cout << P1.getArmadura() << endl;

    return 0;
}
*/
/*ejercicio 4*/
#include "raylib.h"
#include <iostream>

const int ANCHO = 800;
const int ALTO = 600;

class Pelota
{
    // atributos
    float x, y;

    float vx, vy;

    int radio;
    // metodos
public:
    void mover();
    int getX();
    int getY();
    int getRadio();
    // constructor
    Pelota(int x, int y, float vx, float vy, int radio);
};

void Pelota::mover()
{
    // Actualizar posici�n
    x += vx;
    y += vy;

    // Rebote horizontal
    if (x - radio <= 0 || x + radio >= ANCHO)
    {
        vx = -vx;
    }

    // Rebote vertical
    if (y - radio <= 0 || y + radio >= ALTO)
    {
        vy = -vy;
    }
}

Pelota::Pelota(int xi, int yi, float vxi, float vyi, int radioi)
{
    x = xi;
    y = yi;

    vx = vxi;
    vy = vyi;

    radio = radioi;
}

int Pelota::getX()
{
    return x;
}
int Pelota::getY()
{
    return y;
}
int Pelota::getRadio()
{
    return radio;
}

int main()
{

    InitWindow(ANCHO, ALTO, "Pelota rebotando");
    SetTargetFPS(60);
    Pelota Juego(400, 300, 4, 3, 20);

    while (!WindowShouldClose())
    {
        Juego.mover();
        // Dibujar
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawCircle(Juego.getX(), Juego.getY(), Juego.getRadio(), RED);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}