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

    /*pruebas
    for(int i=0; i<100; i+=10)
    {
        cout << i <<endl;
    }

    int sumatoria = 0;

    for(int i=0; i<5; i++){

    int numero;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    sumatoria += numero;
    cout << sumatoria <<endl;

    }

    cout<<"El promedio es: "<<sumatoria/5 <<endl;
    int valor = 20;

    while (valor<10)
    {
        cout<<"Ingrese un numero mayor a 10"<<endl;
        cin>>valor;
    }

    int valor = 20;
    do
    {
        cout << "ingrese un numero mayor a 10" << "\n";
        cin >> valor;
    } while (valor<10);
    */

    /*ejercicio 1
    int num;

    for (int i = 0; i<10; i++)
    {
        cout << "ingrese un numero: " << "\n";
        cin >> num;
    }
    */
    /*2.
    for (int i = 10; i<=100; i+=10)
    {
        cout << i << "\n";
    }
    */
    /*3.
    for (int i = 100; i>=-100; i--)
    {
        cout << i << "\n";
    }
    */
    /*4.
    int contador = 0;
    int num;
    while (contador < 5)
    {
        cout << "Ingrese un numero impar: " << "\n";
        cin >> num;
        if (num %2 != 0)
        {
            cout << num << "\n";
            contador++;
        }
    }
    */
    /*ejemplo teclado
    cout<<"Muestra las teclas de direccion y las teclas QWERTYASDFGH, con z se sale"<<endl;

    while(true){


        if(kbhit()) {
            int tecla=getch();

            switch(tecla)
            {

            case 75: //izquierda
                cout<<"izquierda"<<endl;
                break;
            case 77: //derecha
                cout<<"derecha"<<endl;
                break;
            case 72: //arriba
                cout<<"arriba"<<endl;
                break;
            case 80: //abajo
                cout<<"abajo"<<endl;
                break;
            case 'q': case 'w': case 'e': case 'r': case 't': case 'y':
            case 'a': case 's': case 'd':case 'f': case 'g': case 'h':
                cout<<"Letra: "<<(char)tecla<<endl;
                break;
            case 'z':
                return 1;
            }

        }

    }
    */
    /*5.
    while(true){

        if(kbhit()) {
            int tecla=getch();

            switch(tecla)
            {
            case 75: //izquierda
                cout<<"izquierda"<<endl;
                break;
            case 77: //derecha
                cout<<"derecha"<<endl;
                break;
            case 72: //arriba
                cout<<"arriba"<<endl;
                break;
            case 80: //abajo
                cout<<"abajo"<<endl;
                break;
            case 'q':
                return 1;
            }
        }
    }
    */
    /*6.
    int contador = 0;
    string nombre;

    while(true){

        if(kbhit()) {
            int tecla=getch();

            switch(tecla)
            {
                case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': case 'g':
                case 'h': case 'i': case 'j': case 'k': case 'l': case 'm': case 'n':
                case 'o': case 'p': case 'q': case 'r': case 's': case 't': case 'u':
                case 'v': case 'w': case 'x': case 'y': case 'z':
                if (tecla)
                {
                    nombre += tecla;
                    contador++;
                }
                    cout<<"Letra: "<<(char)tecla <<endl;
                    break;
                case 13:
                    cout << nombre << ", " << contador;
                    return 1;
            }
        }
    }
    */
    /*7.
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        cout << rand() % 6 + 1 << endl;
    }
    */
    /*8.
    // En este ejercicio, tuve que iniciar un valor (anterior) para que al entrar al while no se buguee el codigo, de forma que primero, pido un numero, lo guardo, y, una vez, que el programa entra al while, ya tengo un valor de antes, y lo puedo comparar, con otro valor, solicitado dentro del while.
    int actual, anterior;

    cout << "ingrese un numero " << "\n";
    cin >> anterior;

    int contador = 1;

    while (contador < 3)
    {
        cout << "ingrese otro numero " << "\n";
        cin >> actual;

        if (anterior == actual)
        {
            contador++;
        }else{
            contador = 1;
        }

        anterior = actual;
    }

    cout << actual << actual << actual ;
    */
    /*9.
    int contador = 1;
    int num;

    srand(time(NULL));
    int numero_azar = rand() % 20 + 1;

    cout << "ingrese un numero, entre 1 y 20, para adviniar el numero al azar " << "\n";
    cin >> num;

    while (contador < 5)
    {
        if (num == numero_azar)
        {
            cout << "muy bien! adivinaste!" << "\n";
            return 1;
        }
        else if (num > numero_azar)
        {
            cout << "el numero ingresado es mayor que el aleatorio" << "\n";
            contador++;
        }
        else
        {
            cout << "el numero ingresado es menor que el aleatorio" << "\n";
            contador++;
        }
        cout << "ingrese otro numero para adivinar" << "\n";
        cin >> num;
    }
    if (num == numero_azar)
    {
        cout << "muy bien! adivinaste!" << "\n";
    }
    else
    {
        cout << "perdiste, el numero era " << numero_azar << "\n";
    }
    */
    /*10.
    srand(time(NULL));
    int numero_azar = rand() % 20 + 1;
    int num_anterior, num_actual;
    int contador = 1;
    
    cout << "ingrese el numero a advinar" << "\n";
    cin >> num_anterior;
    
    if (contador == 1)
    {
        if (num_anterior == numero_azar)
        {
            cout << "adivinaste a la primera chaval :D" << "\n";
            return 0;
        }
        else if (num_anterior > numero_azar)
        {
            cout << "el numero ingresado es mayor que el random" << "\n";
        }
        else
        {
            cout << "el numero ingresado es menor que el random" << "\n";
        }
    }
    while (contador < 5)
    {
        cout << "con la informacion proporcionada, ingrese otro numero " << "\n";
        cin >> num_actual;
        
        if (num_actual == numero_azar)
        {
            cout << "adivinaste chaval :D" << "\n";
            return 0;
        }
        else if (num_actual > num_anterior && num_actual < numero_azar)
        {
            cout << "caliente" << "\n";
        }
        else if (num_actual < num_anterior && num_actual > numero_azar)
        {
            cout << "caliente" << "\n";
        }
        else if (num_actual > num_anterior && num_actual > numero_azar && (num_actual - numero_azar) < (numero_azar - num_anterior))
        {
            cout << "caliente" << "\n";
        }
        else if (num_actual < num_anterior && num_actual < numero_azar && (numero_azar - num_actual) < (num_anterior - numero_azar))
        {
            cout << "caliente" << "\n";
        }
        else
        {
            cout << "frio" << "\n";
        }
        
        contador++;
        num_anterior = num_actual;
    }
    
    cout << "perdiste, el numero era " << numero_azar << "\n";
    */
    /*laboratior*/
    
    int valorReferencia, n;

    cin >> valorReferencia; // desde donde arranca
    cin >> n; // cuantas veces

    for (int i = valorReferencia; i += n ; i++)
    {
        cout << i << " " << "\n";
    }   
    

    return 1;
}