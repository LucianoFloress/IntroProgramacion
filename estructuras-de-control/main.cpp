#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


using namespace std;

int main () {
    
    // Ejercicios
    /*1.
    int numero;
    
    cout << "Ingrese un numero positivo o negativo: ";
    cin >> numero;
    
    if (numero >= 1)
    {   
        cout << "El numero ingresado es: " << numero << " y es positivo" <<endl;
    }else
    {
        cout << "El numero ingresado es: " << numero << " y es negativo" <<endl;
    }    
    */
    /*2.
    int numero;
    
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    if (numero %2 == 0 ) // Se lee así:  si al dividir el "numero ingresado" por 2 no hace falta agregar nada (para llegar al  numero: por ejemplo 10 / 5 = 2 redondo) es verdadero, si hace falta agregar un 1, en la mayoria de los casos: por ejemplo 7 / 2 = 3 + 1 <- tengo que sumarle 1 para llegar al 7, porque 3*2 = 6, + 1 -> 7. La operacion termina siendo falsa porque no es 0.
    {
        cout << "El numero ingresado es: " << numero << " y es par" <<endl;
    }else
    {
        cout << "El numero ingresado es: " << numero << " y es impar" <<endl;
    }
    */
    /*3.
    int numero1;
    int numero2;
    
    cout << "Ingrese primero un numero: ";
    cin >> numero1;
    cout << "y ahora otro: ";
    cin >> numero2;
    
    if (numero1 > numero2)
    {
        cout << "El numero " << numero1 << " es mayor que " << numero2 <<endl;
    }else
    {
        cout << "El numero " << numero1 << " es menor que " << numero2 <<endl;
    }
    */
    /*4.
    int numero;
    
    // genera valores entre 1 y 20
    srand(time(NULL));
    int numero_al_azar = rand() % 20 + 1;
    
    cout << "Ingrese un numero entre 1 y 20: ";
    cin >> numero;
    cout << "El numero ingresado es: " << numero <<endl; 
    
    if (numero > numero_al_azar)
    {
        cout << "El numero al azar es: " << numero_al_azar << " y es menor que " << numero <<endl;
    }   else if (numero < numero_al_azar)
    {
        cout << "El numero al azar es: " << numero_al_azar << " y es mayor que " << numero <<endl;
    }   else if (numero == numero_al_azar)
    {
        cout << "El numero al azar es: " << numero_al_azar << " y es igual que " << numero <<endl;
    }  
    */
    /*5.
    // genera valores entre 1 y 5
    srand(time(NULL));
    int numero_al_azar = rand() % 5 + 1;
    
    switch (numero_al_azar)
    {
        case 1:
        cout << "primero\n";
        break;
        
        case 2:
        cout << "segundo\n";
        break;
        
        case 3:
        cout << "tercero\n";
        break;
        
        case 4:
        cout << "cuarto\n";
        break;
        
        case 5:
        cout << "quinto\n";
        break;
        
        default:
        break;
    }
    */
    /*6.
    int numero;
    
    cout << "Ingrese un numero: ";
    cin  >> numero;
    
    if (numero %2 == 0 && ((numero >=1 && numero <=25) || (numero >= 75 && numero <=100)))
    //  20      true                    true                        false
    //  64      true                   false                       false                        
    //  77      false                   false                       true
    {
        cout << "El numero es par, está entre 1 y 25 o 75 y 100\n";
    }else{
        cout << "El numero no es par, no está entre 1 y 25 o 75 y 100\n";
    }
    // segun chatgpt pude haber hecho un if para cada condicion, if es par, if esta entre 1 y 25 e if si esta entre 75 y 100, pero no podria haber usado OR.
    */
    
    return 0;
}   