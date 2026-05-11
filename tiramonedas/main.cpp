#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cctype>
#include <conio.h>
#include <windows.h>

using namespace std;

int main(int argc, char *argv[])
{
    int monedas;
    int contador_ganadas = 0;
    int num_tirada = 1;
    srand(time(NULL));

    do
    {
        cout << "Ingrese monedas <1 a 10> " << "\n";
        cin >> monedas;
    } while (monedas < 1 || monedas > 10);

    if (monedas == 1)
    {
        cout << "Tenes " << monedas << " tirada" << "\n";
    }
    else
    {
        cout << "Tenes " << monedas << " tiradas" << "\n";
    }

    cout << "Presione P para tirar" << "\n";

    while (true)
    {

        while (monedas > 0)
        {
            if (kbhit())
            {
                int tecla = getch();
                {
                    switch (tecla)
                    {
                    case 'p':
                        int azar1 = rand() % 3 + 1;
                        int azar2 = rand() % 3 + 1;
                        int azar3 = rand() % 3 + 1;

                        cout << "Tirada " << num_tirada << "\n";
                        num_tirada++;

                        cout << "Valores: " << azar1 << " " << azar2 << " " << azar3 << "\n";

                        if (azar1 == azar2 && azar1 == azar3 && azar2 == azar3)
                        {
                            cout << "Son iguales" << "\n";
                            contador_ganadas++;
                        }

                        monedas--;

                        if (monedas > 0)
                        {
                            cout << "Presione P para seguir tirando " << "\n";
                        }

                        break;
                    }
                }
            }
        }
        if (contador_ganadas == 0)
        {
            cout << "No ganaste nada :( " << "\n";
        }
        else if (contador_ganadas == 1)
        {
            cout << "Ganaste " << contador_ganadas << " vez" << "\n";
        }

        else
        {
            cout << "Ganaste " << contador_ganadas << " veces" << "\n";
        }
        
        return 0;
    }
}