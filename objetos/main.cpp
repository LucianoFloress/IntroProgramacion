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
public:
    int resistencia = 100;
    // metodos
    void recibirDanio(int danio);
};

void Armadura::recibirDanio(int danio)
{
    resistencia = -danio;
};

int main()
{
    Armadura juego;

    juego.recibirDanio(20);

    return 0;
}
