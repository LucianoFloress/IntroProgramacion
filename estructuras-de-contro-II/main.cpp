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
    /*laboratior

    int valorReferencia, n;

    cin >> valorReferencia;
    cin >> n;

    for (int i = valorReferencia; i < (valorReferencia + n); i++)
    {
        cout << i << "\n";
    }
    */
    /*practicas de claude*/
    /*
    for (int i = 1; i < 101; i++)
    {
        if (i %3 == 0 && i %5 == 0)
        {
            cout << i << " FizzBuzz" << "\n";
        }
        else if (i %5 == 0 && i %7 == 0)
        {
            cout << i << " BuzzBazz" << "\n";
        }
        else if (i %3 == 0 && i %7 == 0)
        {
            cout << i << " FizzBazz" << "\n";
        }
        else if (i %3 == 0)
        {
            cout << i << " Fizz" << "\n";
        }
        else if (i %5 == 0)
        {
            cout << i << " Buzz" << "\n";
        }
        else if (i %7 == 0)
        {
            cout << i << " Bazz" << "\n";
        }else{
            cout << i << "\n";
        }
    }
    */
    /*
    int contador = 1;
    int num;
    srand(time(NULL));
    int numero_azar = rand() % 100 + 1;
    cout << numero_azar << "\n";
    cout << "numero: " << "\n";
    cin >> num;

    while (contador <= 7)
    {
        if (num == numero_azar && contador == 1)
        {
            cout << "Demonios, adivinaste a la primera" << "\n";
            return 0;
        }
        else if (num == numero_azar)
        {
            cout << "adivinaste usando un total de: " << contador << " intentos \n";
            return 0;
        }
        else if (num > numero_azar)
        {
            cout << "es mayor" << "\n";
            contador++;
        }
        else
        {
            cout << "es menor" << "\n";
            contador++;
        }
        cout << "proba otro num " << "\n";
        cin >> num;

        if (contador > 7)
        {
            cout << "perdiste bro, el numero era " << numero_azar << "\n";
        }
    }
    */
    /*
    char operacion;
    int num1, num2;

    cout << "ingrese la operacion a realizar: " << "\n";
    cin >> operacion;

    while (operacion != 's')
    {
        cout << "ahora ingrese los numeros a operar" << "\n";
        cin >> num1;
        cout << operacion << "\n";
        cin >> num2;

        switch (operacion)
        {
        case '+':
            cout << num1 + num2 << "\n";
            break;
        case '-':
            cout << num1 - num2 << "\n";
            break;
        case '/':
            if (num2 != 0)
            {
                cout << num1 / num2 << "\n";
            }
            else
            {
                cout << "no se puede dividir por 0!" << "\n";
            }
            break;
        case '*':
            cout << num1 * num2 << "\n";
            break;
        case '^':
        {
            int resultado = 1;
            for (int i = 1; i <= num2; i++)
            {
                resultado = resultado * num1;
            }
            cout << resultado << "\n";
            break;
        }
        default:
            cout << "Operacion incorrecta" << "\n";
            break;
        }
        cout << "ingrese la operacion a realizar o 's' para salir " << "\n";
        cin >> operacion;
    }
    cout << "saliendo..." << "\n";
    */
    /*piramide
    int num;
    cin >> num;

    for (int f = 1; f <= num; f++) // filas. arranca en 1 (porque sino la primer linea arranca vacia) hace filas, hasta que 'f' sea menor o igual que 'num' e imprime un "\n" cada vez que hace un ciclo.
    {
        for (int e = 1; e <= num - f; e++) // espacios. arranca en 1 porque si no cuenta la vuelta 0 y le agrega un espacio mas, a la vista no pasa nada, pero a la hora de calcular si, no es lo mismo pedir 3 y contar 012 que pedir 3 y contar 123.
        {
            cout << " ";
        }
        for (int a = 1; a <= ((2 * f) - 1); a++) // asteriscos. arranca en 1 pq si no la piramide iria de 2 en 2, en vez de ser puntiaguda (1 asterisco), imprime 2 asteriscos hasta que el numero de asteriscos por fila sea igual a la fila, pero x2 y -1 para que sea impar. (si son 3 filas, es 3x2 - 1, 6-5)
        {
            cout << "*";
        }
        cout << "\n";
    }
    */
    /*claude*/
    /*
    int num;
    int resultado = 0;

    cout << "ingrese el numero para ver su tabla " << "\n";
    cin >> num;

    while (num != 0)
    {
        for (int i = 1; i <= 10; i++)
        {
            resultado = num * i;
            cout << num << " x " << i << " : " << resultado << "\n";
        }
        cout << "para ver otra tabla ingrese el numero o '0' para salir" << "\n";
        cin >> num;
    }

    cout << "saliendo..." << "\n";
    */
    /*
    int num;
    bool es_primo = true;

    cout << "Ingrese un num: ";
    cin >> num;
    // primo -> por 1 y por numero

    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            es_primo = false;
        }
    }
    if (es_primo == true)
    {
        cout << "es primo" << "\n";
    }
    else
    {
        cout << "No es primo" << "\n";
    }
    */
    /*
    int num;
    cin >> num;

    for (int f = 1; f <= num; f++)
    {
        for (int e = 1; e <= num - f; e++)
        {
            cout << " ";
        }
        for (int a = 1; a <= ((2 * f) - 1); a++)
        {
            cout << f ;
        }
        cout << "\n";
    }
    */
    /*
    int num;
    int acumulador = 0;

    cout << "Ingrese un num: ";
    cin >> num;
    // 6 % 1 == 0 → sumás 1
    // 6 % 2 == 0 → sumás 2
    // 6 % 3 == 0 → sumás 3
    // 6 % 4 != 0 → ignorás
    // 6 % 5 != 0 → ignorás
    for (int i = 1; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            acumulador += i;
        }
    }
    if (acumulador == num)
    {
        cout << "perfecto" << "\n";
    }
    else
    {
        cout << "No es perfecto" << "\n";
    }
    */
    /*
    int n, m= 0;

    cout << "ingrese dos numeros separados por enter " << "\n";
    cin >> n;
    cin >> m;

    for (int f = 1; f <= n; f++) // filas
    {
        for (int c = 1; c <= m; c++) // columnas. esto repite hasta que c iguale a m, e imprime f (1) x c (1) inserta espacio " ", repite, f(1) x c (2) inserta espacio " ". una vez que c alcanza al valor ingresado m, sale del for.
        {
            cout << f * c << " "; // este for de filas, cuando termine el for de arriba, inserta un renglon, y f pasa a valer 2, entonces repite el for interior pero con f (2) x c (1) inserta espacio " ", etc...
        }
        cout << "\n";
    }
    */
    int num, final = 0;
    

    cout << "ingrese un numero " << "\n";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        
    }
    
    
    

    return 0;
}