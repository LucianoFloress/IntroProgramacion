/*ejercicios de chatgpt*/
/*
#include <iostream>
#include <string>
using namespace std;

void mostrarMsj()
{
    cout << "holis" << "\n";
}

void mostrarNum(int num)
{
    cout << num + 50;
}

int sumar(int num1, int num2)
{
    return num1 + num2;
}

int main()
{

    mostrarMsj();
    mostrarNum(5500);
    cout << "\n";
    cout << sumar(67, 69);
    return 0;
}
*/

// ejercicios 2
/*
#include <iostream>
#include <string>
using namespace std;

void mostrarNum(int num){
    cout << num;
}

void mostrarDosNum(int num1, int num2){
    cout << num1 << "\n";
    cout << num2 << "\n";
}

int name(int name){
    cin >> name;
    cout << "hola " << name << "\n";
}

int main()
{
    mostrarNum(67);
    cout << "\n";
    mostrarDosNum(6, 7);

    return 0;
}
*/

// ejercicios 3
/*
#include <iostream>
#include <string>
using namespace std;

void salida(string name){
    cout << "Hola " << name;
}

int main()
{
    string name;
    getline(cin, name);

    salida(name);

    return 0;
}
*/

// ejercicios 4
/*
#include <iostream>
#include <string>
using namespace std;

int doble(int num)
{
    return num * 2;
}

int main()
{
    cout << doble(50);
    return 0;
}
*/

// ejercicio 5
/*
#include <iostream>
#include <string>
using namespace std;

int triple(int num)
{
    return num * 3;
}

int main()
{
    cout << triple(489);
    return 0;
}
*/

// ejercicio 6
/*
#include <iostream>
#include <string>
using namespace std;

int mayorMenor(int num1, int num2)
{
    if (num1 > num2)
    {
        return num2;
    }
    else
    {
        return num1;
    }
}

int main()
{
    cout << mayorMenor(5, 8);
    return 0;
}
*/

// ejercicio 7
// ejercicio de mostrar mayor entre 2, pero pidiendolo con "cin" a los numeros
/*
#include <iostream>
#include <string>
using namespace std;

int mayorMenor(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    int numero1, numero2;

    cout << "ingresa dos numeros" << "\n";
    cin >> numero1;
    cin >> numero2;

    cout << mayorMenor(numero1, numero2);

    return 0;
}
*/

// ejercicio 8
/*
#include <iostream>
#include <string>
using namespace std;

bool esPositivo(int num)
{
    if (num > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int numero;
    cin >> numero;

    cout << esPositivo(numero);

    return 0;
}
*/

// ejercicio 9
/*
#include <iostream>
#include <string>
using namespace std;

bool esPar(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int numerin;
    cin >> numerin;

    cout << "Es par? " << esPar(numerin) << "\n";

    return 0;
}
*/

// ejercicio 10
/*
#include <iostream>
#include <string>
using namespace std;

void nota(int nota)
{
    if (nota >= 6)
    {
        cout << "Aprobado wachin";
    }
    else
    {
        cout << "Desaprobado por gato";
    }
}

int main()
{
    int num;
    cin >> num;

    nota(num);

    return 0;
}
*/

// ejercicio 11
/*
#include <iostream>
#include <string>
using namespace std;

int sumar(int num1, int num2)
{
    return num1 + num2;
}
int multiplicar(int num1, int num2)
{
    return num1 * num2;
}

int main()
{
    cout << multiplicar(sumar(2, 3), 4);

    return 0;
}
*/

// ejercicio 12
/*
#include <iostream>
#include <string>
using namespace std;

int cuadrado(int num)
{
    return num * num;
}
int sumatoria(int num1, int num2){
    return num1 + num2;
}

int main()
{
    int numero1 = cuadrado(12);
    int numero2 = cuadrado(9);

    cout << sumatoria(numero1, numero2);

    return 0;
}
*/
// ejercicio 13
/*
#include <iostream>
#include <string>
using namespace std;

bool esPar(int num)
{
    return num % 2 == 0; // <- esto es lo mismo que un if(num % 2 == 0){return true} pero simplificado
}

int main()
{
    if (esPar(230))
    {
        cout << "Es par\n";
    }
    else
    {
        cout << "Es impar\n";
    }

    return 0;
}
*/

// ejercicio 14
/*
#include <iostream>
#include <string>
using namespace std;

int valorAbsoluto(int num)
{
    if (num < 0)
    {
        return -num;
    }

    return num; // aca en este caso, no pongo else, porque si entra al if retorna, y si no el return solo hace lo mismo que el else.
}

int main()
{
    cout << valorAbsoluto(-5);

    return 0;
}
*/

// ejercicio 15
/*
#include <iostream>
#include <string>
using namespace std;

int mayorDeTres(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    return c;
}

int main()
{
    cout << mayorDeTres(10, 25, 7);

    return 0;
}
*/

// ejercicios facu
/*
#include <iostream>
#include <string>
using namespace std;

int maximo(int array[], int tamanio)
{
    int mayor = array[0];
    for (int i = 1; i < tamanio; i++)
    {
        if (array[i] > mayor)
        {
            mayor = array[i];
        }
    }
    return mayor;
}
//para no hardcodear el largo del array, le paso la longitud del array como parametro a la funcion (tamanio), luego la uso en el for, y luego en el main le asigno un valor cuando llamo a la funcion, en este caso 8.
int main()
{
    int array[] = {2, 5, 4, 9, 2, 9, 5, 0};

    cout << maximo(array, 8) << "\n";

    return 0;
}
*/

// ejercicio 2
/*
#include <iostream>
#include <string>
using namespace std;

int dado(int cantidadCaras) // primero ingreso cuantas caras tiene el dado y despues, tiro el dado con N caras.
{
    int resultado = rand() % cantidadCaras + 1;
    return resultado;
}
// el srand siempre va en el main. no puede ir en ningun otro lado. el rand() si puede ir en cualquier lado que se necesite generar un nuevo numero.
int main()
{
    srand(time(NULL));

    int cantidadCaras;

    cout << "cuantas caras tiene el dado? " << "\n";
    cin >> cantidadCaras;

    cout << dado(cantidadCaras);

    return 0;
}
*/

// ejercicio 3
/*
#include <iostream>
#include <string>
using namespace std;

string saludo(string nombre)
{
    return "hola " + nombre;
}
// en una funcion tipo string, puedo retornar texto, pero para meter texto pasado por parametro, tengo que usar + en vez de '<<'
int main()
{
    string nombre;
    cin >> nombre;
    cout << saludo(nombre);

    return 0;
}
*/

// ejercicio 4
/*
#include <iostream>
#include <string>
using namespace std;

string saludo(string hola, string mundo)
{
    return hola + mundo;
}

int main()
{
    string h = "hola";
    string m = "mundo";

    cout << saludo(h, m);

    return 0;
}
*/

// ejercicio 5
/*
#include <iostream>
#include <string>
using namespace std;

double promedio(int array[], int tamanio)
{
    double suma = 0;
    double promedio = 0;
    for (int i = 0; i < tamanio; i++)
    {
        suma += array[i];
    }
    promedio = suma / tamanio;
    return promedio;
}

int main()
{
    int array[] = {95, 159, 123, 14, 78, 66, 99, 501};

    cout << promedio(array, 8);

    return 0;
}
*/

// ejercicio 6
/*
#include <iostream>
#include <string>
using namespace std;

string multiplo(int valor, int n)
{
    if (valor % n == 0)
    {
        return "si";
    }
    return "no";
}

int main()
{
    cout << multiplo(40, 5);

    return 0;
}
*/

// ejercicio 7
/*
#include <iostream>
#include <string>
using namespace std;

int ocurrencias(int array[], int tamanio, int num)
{
    int contador = 0;
    for (int i = 0; i < tamanio; i++)
    {
        if (array[i] == num)
        {
            contador++;
        }
    }
    return contador;
}

int main()
{
    int array[] = {2, 5, 4, 7, 2, 1, 5, 2};

    cout << ocurrencias(array, 8, 2);
    return 0;
}
*/

// ejercicio 8
/*
#include <iostream>
#include <string>
using namespace std;

int ocurrencias(int array[], int tamanio, int num)
{
    int contador = 0;
    for (int i = 0; i < tamanio; i++)
    {
        if (array[i] == num)
        {
            contador++;
        }
    }
    return contador * num;
}

int main()
{
    int array[] = {2, 5, 4, 7, 2, 1, 5, 2};

    cout << ocurrencias(array, 8, 2);
    return 0;
}
*/

// ejercicio 10
#include <iostream>
#include <string>
using namespace std;

void palabra(string p, int &a, int &e, int &i, int &o, int &u)
{
    for (int j = 0; j < p.length(); j++)
    {
        if (p[j] == 'a')
        {
            a++;
        }
        if (p[j] == 'e')
        {
            e++;
        }
        if (p[j] == 'i')
        {
            i++;
        }
        if (p[j] == 'o')
        {
            o++;
        }
        if (p[j] == 'u')
        {
            u++;
        }
    }
}
// funcion con int por referencia. le paso un string por parametro y por cada vocal aumento el contador ++. como es void no hace falta nada mas. En el main, declaro las variables pasado por parametro y referencia. Luego llamo a la funcion y le paso sus parametros, en este caso, la "palabra" y las variables. Luego las muestro a cada una con cout. Es como si en la funcion hace las cuentas, pero se habilita cuando llamo a la funcion en el main, si no no funciona. 
int main()
{
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;

    palabra("esternocleidomastoideo", a, e, i, o, u);

    cout << "a: " << a << "\n";
    cout << "e: " << e << "\n";
    cout << "i: " << i << "\n";
    cout << "o: " << o << "\n";
    cout << "u: " << u << "\n";

    return 0;
}
