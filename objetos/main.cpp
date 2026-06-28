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

int main()
{
    Armadura juego;
    juego.recibirDanio(20);

    return 0;
}
