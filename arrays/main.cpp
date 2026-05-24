#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    /*ejercicio 1*/
    /*

    srand(time(NULL));
    bool existe_el_5 = false;

    int mi_array[10];

    for (int i = 0; i < 10; i++)
    {
        mi_array[i] = rand() % 10 + 1;
        cout << mi_array[i] << " " ;
    }

    for (int i = 0; i < 10; i++)
    {
        if (mi_array[i] == 5)
        {
            existe_el_5 = true;
        }
    }
    if (existe_el_5)
    {
        cout << "existe el 5" << "\n";
    }
    else
    {
        cout << "no hay 5" << "\n";
    }
    */
    /*ejercicio 2*/
    /*
    srand(time(NULL));
    int mi_array[20];
    int mayor = 0;

    for (int i = 0; i < 20; i++)
    {
        mi_array[i] = rand() % 100 + 1;
        cout << mi_array[i] << " ";
        if (mayor < mi_array[i])
        {
            mayor = mi_array[i];
        }
    }
    cout << "El mayor es: " << mayor << "\n";
    */
    

    return 0;
}