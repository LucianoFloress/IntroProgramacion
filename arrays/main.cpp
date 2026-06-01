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
    /*ejercicio 3*/
    /*
    int mi_array[100];
    int mi_array_par[50];
    int mi_array_impar[50];
    int indice_par = 0;
    int indice_impar = 0;

    for (int i = 0; i < 100; i++)
    {
        mi_array[i] = i + 1;

        if (mi_array[i] % 2 == 0)
        {
            mi_array_par[indice_par] = mi_array[i];
            indice_par++;
        }
        else
        {
            mi_array_impar[indice_impar] = mi_array[i];
            indice_impar++;
        }
    }
    cout << "Pares: ";
    for (int j = 0; j < indice_par; j++)
    {
        cout << mi_array_par[j] << " ";
    }

    cout << "\n";

    cout << "Impares: ";
    for (int k = 0; k < indice_impar; k++)
    {
        cout << mi_array_impar[k] << " ";
    }
    */
    /*ejercicio 4.*/
    /*
    string name;
    int contador = 0;

    cout << "ingrese un nombre: " << "\n";
    cin >> name;

    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == 'a')
        {
            contador++;
        }
    }

    cout << "El nombre ingresado tiene: " << contador << " 'a'" << "\n";
    */
    /*ejercicio 5.*/
    /*
    string name;
    int contador = 0;

    cout << "ingrese un nombre: " << "\n";
    cin >> name;

    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            contador++;
        }
    }

    cout << "El nombre ingresado tiene: " << contador << " vocales" << "\n";
    */
    /*ejercicio 6.*/
    /*
    string name;
    int contador_a = 0;
    int contador_e = 0;
    int contador_i = 0;
    int contador_o = 0;
    int contador_u = 0;

    cout << "ingrese un nombre: " << "\n";
    cin >> name;

    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == 'a')
        {
            contador_a++;
        }
        else if (name[i] == 'e')
        {
            contador_e++;
        }
        else if (name[i] == 'i')
        {
            contador_i++;
        }
        else if (name[i] == 'o')
        {
            contador_o++;
        }
        else if (name[i] == 'u')
        {
            contador_u++;
        }
    }

    cout << "El nombre ingresado tiene: " << contador_a << " 'a'\n" << contador_e << " 'e'\n" << contador_i << " 'i'\n" << contador_o << " 'o'\n" << contador_u << " 'u'" << "\n";
    */
    /*ejercicio 7.*/
    /*
    char mi_array[10];

    for (int j = 0; j < 10; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            mi_array[i] = '-';
            cout << mi_array[i] << " ";
        }
        cout << "\n";
    }
    */
    /*ejercicio 8.*/
    /*
    int mi_array[6];

    for (int j = 0; j < 6; j++)
    {
        for (int i = 0; i < 6; i++)
        {
            mi_array[i] = i;
            cout << mi_array[i] << " ";
        }
        cout << "\n";
    }
    */
    /*ejercicio 9.*/
    /*
    int mi_array[6];

    for (int j = 0; j < 6; j++)
    {
        for (int i = 0; i < 6; i++)
        {
            mi_array[i] = j;
            cout << mi_array[i] << " ";
        }
        cout << "\n";
    }
    */
    /*ejercicio 10.*/
    /*
    srand(time(NULL));
    int mi_array[100];

    for (int i = 0; i < 100; i++)
    {
        mi_array[i] = rand() % 100 + 1;
        cout << mi_array[i] << " ";
    }
    cout << "\n";
    for (int i = 99; i >= 0; i--)
    {
        cout << mi_array[i] << " ";
    }
    */
    /*ejercicio 11.*/
    /*
    int mi_array[20];
    int v1, v2, v3, v4, p1, p2, p3, p4;

    for (int i = 0; i < 20; i++)
    {
        mi_array[i] = 0;
    }

    do
    {
        cout << "Ingrese 4 posiciones entre 0 y 19: " << "\n";
        cin >> p1;
        cin >> p2;
        cin >> p3;
        cin >> p4;
    } while ((p1 < 0 || p1 > 19) || (p2 < 0 || p2 > 19) || (p3 < 0 || p3 > 19) || (p4 < 0 || p4 > 19));

    // ejemplo de como seria el ejercicio, si en vez de usar do while, uso while.

    // cout << "Ingrese 4 posiciones entre 0 y 19: " << "\n";
    // cin >> p1;
    // cin >> p2;
    // cin >> p3;
    // cin >> p4;

    // while ((p1 < 0 || p1 > 19) || (p2 < 0 || p2 > 19) || (p3 < 0 || p3 > 19) || (p4 < 0 || p4 > 19))
    // {
    //     cout << "Posiciones invalidas, vuelva a ingresar: " << "\n";

    //     cin >> p1;
    //     cin >> p2;
    //     cin >> p3;
    //     cin >> p4;
    // }


    cout << "Ahora ingrese 4 valores: " << "\n";
    cin >> v1;
    cin >> v2;
    cin >> v3;
    cin >> v4;

    mi_array[p1] = v1;
    mi_array[p2] = v2;
    mi_array[p3] = v3;
    mi_array[p4] = v4;

    for (int i = 0; i < 20; i++)
    {
        cout << mi_array[i] << " ";
    }
    */
    /*ejercicio 12.*/
    /*
    srand(time(NULL));

    int array1[20], array2[20], array3[20];

    for (int i = 0; i < 20; i++)
    {
        array1[i] = rand() % 10 + 1;
        array2[i] = rand() % 10 + 1;
        array3[i] = array1[i] + array2[i];
        cout << array3[i] << " ";
    }
    */
    /*ejercicio autoevaluable*/
    srand(time(NULL));

    int mazo[4][10] = {{1, 2, 3, 4, 5, 6, 7, 10, 11, 12}, {1, 2, 3, 4, 5, 6, 7, 10, 11, 12}, {1, 2, 3, 4, 5, 6, 7, 10, 11, 12}, {1, 2, 3, 4, 5, 6, 7, 10, 11, 12}};

    bool mazoDisponible[4][10] = {{true, true, true, true, true, true, true, true, true, true}, {true, true, true, true, true, true, true, true, true, true}, {true, true, true, true, true, true, true, true, true, true}, {true, true, true, true, true, true, true, true, true, true}};

    double suma = 0;
    double validoValor = 0;
    double sumaJ = 0;
    double sumaIA = 0;
    int randomFila = rand() % 4;
    int randomColumna = rand() % 10;
    string seguir, arrancar;
    bool estado = false;

    cout << "arrancamos a jugar?" << "\n";
    cin >> arrancar;

    if (arrancar == "si")
    {
        do
        {
            if (mazoDisponible[randomFila][randomColumna])
            {
                validoValor = mazo[randomFila][randomColumna];

                if (validoValor == 1 || validoValor == 2 || validoValor == 3 || validoValor == 4 || validoValor == 5 || validoValor == 6 || validoValor == 7)
                {
                    suma += 1;
                }
                else
                {
                    suma += 0.5;
                }

                mazoDisponible[randomFila][randomColumna] = false;
            }
            cout << "puntos: " << suma << "\n";

            if (suma == 7.5)
            {
                estado = true;
                cout << "ganaste!" << "\n";
            }
            else if (suma < 7.5)
            {
                cout << "seguis o abandonas?" << "\n";
                cin >> seguir;

                randomFila = rand() % 4;
                randomColumna = rand() % 10;

                while (mazoDisponible[randomFila][randomColumna] == false)
                {
                    randomFila = rand() % 4;
                    randomColumna = rand() % 10;
                }
            }
            else if (suma > 7.5)
            {
                estado = true;
                cout << "perdiste chaval" << "\n";
            }

        } while (seguir == "otra" && estado == false);

        sumaJ = suma;

        cout << "puntos: " << sumaJ << "\n\n";

        // parte de la ia

        if (sumaJ > 7.5)
        {
            cout << "Gano la IA" << "\n";
        }
        else
        {
            cout << "Turno de la IA" << "\n";

            suma = 0;
            estado = false;

            while (mazoDisponible[randomFila][randomColumna] == false)
            {
                randomFila = rand() % 4;
                randomColumna = rand() % 10;
            }

            do
            {
                if (mazoDisponible[randomFila][randomColumna])
                {
                    validoValor = mazo[randomFila][randomColumna];

                    if (validoValor == 1 || validoValor == 2 || validoValor == 3 || validoValor == 4 || validoValor == 5 || validoValor == 6 || validoValor == 7)
                    {
                        suma += 1;
                    }
                    else
                    {
                        suma += 0.5;
                    }

                    mazoDisponible[randomFila][randomColumna] = false;
                }
                cout << "puntos: " << suma << "\n";

                if (suma < 7.5)
                {
                    cout << "La IA agarra otra carta" << "\n";

                    randomFila = rand() % 4;
                    randomColumna = rand() % 10;

                    while (mazoDisponible[randomFila][randomColumna] == false)
                    {
                        randomFila = rand() % 4;
                        randomColumna = rand() % 10;
                    }
                }
                else if (suma == 7.5)
                {
                    cout << "La IA se planta" << "\n";
                    estado = true;
                }
                else if (suma > 7.5)
                {
                    cout << "La IA pierde!" << "\n";
                    estado = true;
                }

            } while (estado == false);

            sumaIA = suma;

            cout << "puntos: " << sumaIA << "\n\n";

            if (sumaIA > sumaJ && sumaIA < 8)
            {
                cout << "Gano la IA" << "\n";
            }
            else if (sumaIA == sumaJ)
            {
                cout << "Empataron" << "\n";
            }
            else
            {
                cout << "Gano el jugador" << "\n";
            }
        }
    }
    else
    {
        cout << "los vemo" << "\n";
    }

    return 0;
}