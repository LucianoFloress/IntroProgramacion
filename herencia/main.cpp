#include <iostream>
#include <string>
using namespace std;

class Flor
{
public:
    int petalos;
    void regar();
};

void Flor::regar()
{
    cout << "Regando la flor..." << "\n";
}

class Margarita : public Flor
{
public:
    Margarita(int parametroPetalosMargarita)
    {
        petalos = parametroPetalosMargarita;
    }
};

class Rosa : public Flor
{
public:
    void regar()
    {
        cout << "Regalando la Rosa..." << "\n";
    }
};

int main()
{
    Margarita miMargarita(6);
    cout << miMargarita.petalos << "\n";
    miMargarita.regar();
    Rosa miRosa;
    miRosa.regar();

    return 0;
}