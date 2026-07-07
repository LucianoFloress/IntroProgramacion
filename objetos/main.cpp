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
    string nombrePJ;

public:
    // metodos
    void recibirDanio(int danio);
    void mostrar();
    // constructor
    Armadura(string nombre);
};

void Armadura::recibirDanio(int danio)
{
    resistencia -= danio;
}

void Armadura::mostrar()
{
    cout << resistencia;
    cout << nombrePJ;
}

Armadura::Armadura(string nombre)
{
    nombrePJ = nombre;
    resistencia = 100;
}

int main()
{
    Armadura juego("lucho");
    juego.recibirDanio(120);
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
/* ejercicio 4 PELOTA REBOTANDO REBOTE
modificar tasks.json para que ejecute la pelotita rebotando
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "Build & Run Raylib",
            "type": "shell",
            "command": "g++",
            "args": [
                "main.cpp",
                "-o",
                "main.exe",
                "-lraylib",
                "-lopengl32",
                "-lgdi32",
                "-lwinmm",
                "&&",
                "./main.exe"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            }
        }
    ]
}

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
    float getX();
    float getY();
    int getRadio();
    // constructor
    Pelota(float x, float y, int radio, float vx, float vy);
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

float Pelota::getX()
{
    return x;
}
float Pelota::getY()
{
    return y;
}
int Pelota::getRadio()
{
    return radio;
}

Pelota::Pelota(float xi, float yi, int radioi, float vxi, float vyi)
{
    x = xi;
    y = yi;
    radio = radioi;
    vx = vxi;
    vy = vyi;
}

int main()
{

    InitWindow(ANCHO, ALTO, "Pelota rebotando");
    SetTargetFPS(60);
    Pelota Juego(400, 300, 20, 4, 3);

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
*/
/*Ejercicio 1 chatgpt
#include <iostream>
#include <string>
using namespace std;

class Perro{
    //atributos
    string nombre;
    int edad;

    public:
    //metodos
    void ladrar();
    void mostrarDatos();
    void setNombre(string nuevoNombre);
    void setEdad(int nuevaEdad);
    //constructor
    Perro(string nombreP, int edadP);
};

void Perro::ladrar(){
    cout << "Guau guau" << "\n";
}

void Perro::mostrarDatos(){
    cout << nombre << ", " << edad << "\n";;
}

void Perro::setNombre(string nuevoNombre){
    nombre = nuevoNombre;
}

void Perro::setEdad(int edadNueva){
    edad = edadNueva;
}

Perro::Perro(string nombreP, int edadP){
    nombre = nombreP;
    edad = edadP;
}

int main()
{
    Perro perrito("Pelusa", 14);
    perrito.mostrarDatos();
    perrito.ladrar();
    perrito.setEdad(10);
    perrito.setNombre("Zoe");
    perrito.mostrarDatos();
    perrito.ladrar();

    return 0;
}
*/
/*ejer 2
#include <iostream>
#include <string>
using namespace std;

class Lampara
{
    // a
    bool estado;

public:
    // m
    void encender();
    void apagar();
    void estaEncendida();
    // c
    Lampara();
};

void Lampara::encender()
{
    estado = true;
}

void Lampara::apagar()
{
    estado = false;
}

void Lampara::estaEncendida()
{
    if (estado)
    {
        cout << "Esta encendida" << "\n";
    }
    else
    {
        cout << "Esta apagada" << "\n";
    }
}

Lampara::Lampara()
{
    estado = false;
}

int main()
{
    Lampara lampara;
    lampara.estaEncendida();
    lampara.encender();
    lampara.estaEncendida();

    return 0;
}
*/
/* ejercicio 3
#include <iostream>
#include <string>
using namespace std;

class cuentaBancaria
{
    // a
    string titular;
    int saldo;

public:
    // m
    void depositar(int saldoADepositar);
    void retirar(int saldoARetirar);
    void mostrarSaldo();
    // c
    cuentaBancaria(string quienRecibe, int saldo);
};

void cuentaBancaria::depositar(int saldoADepositar)
{
    saldo += saldoADepositar;
}

void cuentaBancaria::retirar(int saldoARetirar)
{
    saldo -= saldoARetirar;
}

void cuentaBancaria::mostrarSaldo()
{
    cout << titular << ", " << saldo << "\n";
}

cuentaBancaria::cuentaBancaria(string quienRecibe, int saldo0)
{
    titular = quienRecibe;
    saldo = saldo0;
}

int main()
{
    cuentaBancaria banco("Lucho", 0);
    banco.mostrarSaldo();
    banco.depositar(565413);
    banco.mostrarSaldo();

    return 0;
}
*/
