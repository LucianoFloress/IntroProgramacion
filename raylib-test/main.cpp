#include <iostream>
#include <string>

using namespace std;

int main () {
    /*
    char letra = 'a';
    
    cout << "la primer letra del abecedario es: " << letra <<endl;
    
    int manzanas = 30;
    
    cout << "en la mochila tengo " << manzanas << " manzanas" <<endl;
    
    int monedas = 4567;
    
    cout << "monedas juntadas en el nivel 1: " << monedas <<endl;
    
    bool vida_heroe = true;
    
    cout << "el heroe está vivo?" << vida_heroe <<endl;
    */
    /*
    int vida = 100;
    int golpe = 10;
    int fruta = 5;
    
    cout << "el heroe recibió dos trompadas que le resta " << golpe*2  <<" de vida" <<endl;
    
    vida = vida-golpe*2;
    
    cout << "acto seguido, el heroe cuenta con " << vida << " de vida" <<endl;
    
    cout << "rapidamente encuentra 2 frutas, que se las come y le proporciona " << fruta*2 <<" de vida" <<endl;
    
    vida = vida+fruta*20;
    
    cout << "nuevamente la vida del heroe es de " << vida <<" de vida" <<endl;
    
    bool vidaMax = vida >= 100;
    
    cout <<"el heroe tiene su vida al maximo?" << vidaMax <<endl;
    */
    /*
    string MiNombre = "Luciano";
    cout << "Mi nombre es " << MiNombre <<endl;
    string Materia = "Introduccion a la programación";
    cout << "y esto es " << Materia <<endl;
    */
    /*
    // Establezco una variable de nombre "Nombre"
    string Nombre;
    // Mando msj diciendo que ingrese nombre (solo legible)
    cout << "Por favor, ingrese su nombre ";
    // Pido el texto (aca seria la parte donde uno escribe)
    cin >> Nombre;
    // Mando texto + lo ingresado
    cout << "El nombre ingresado es: " << Nombre <<endl;
    */
    /*
    string a = "hola naranjas naranjosas";
    a = a.insert(5, "manzanas y ");
    cout << a <<endl;
    
    string b = "hola naranjas naranjosas";
    b = b.erase(1, 3);
    int tam1 = b.length();
    cout << tam1 <<endl;
    cout << b <<endl;
    */
    /* 1.
    cout << "Mi nombre es Luciano Flores" <<endl;
    2.
    cout << "Mi nombre es Luciano" <<endl;
    cout << "y mi apellido Flores" <<endl;
    3.
    cout << "Mi nombre es Luciano y tengo 25 anios" <<endl;
    */
    /* 4.
    string nombre = "Luciano";
    string apellido = "Flores";
    int edad = 25;
    
    cout << "Mi nombre es " << nombre << " " << apellido << " y tengo " << edad << " anios ";
    */

    /* 5.
    string nombre = "Luciano";
    string apellido = "Flores";
    int edad = 25;
    
    cout << "Mi nombre es " << nombre <<endl;
    cout << "mi apellido es " << apellido <<endl;
    cout << "y tengo " << edad << " anios" <<endl;
    */
    /*6.
    int edad = 25;
    cout << "Hoy en dia tengo " << edad << " anios, dentro de 10 anios voy a tener " << edad+10 << " anios ";
    */
    /*7.
    int edad = 25;
    bool edad50 = edad > 50;
    
    cout << "Mi edad es " << edad << ". Es mayor a 50? " << edad50 << " (1 para si, 0 para no.) ";
    */
    /*8.
    int num = 1;
    cout << num << " " << ++num << " " << ++num << " " << ++num << " " << ++num << " " << ++num << " " << ++num << " " << ++num << " " << ++num << " " << ++num << " ";
    */
    /*9.
    int num;

    cout << "por favor, ingrese un numero ";
    cin >> num;
    cout << "numero ingresado: " << num;
    */
    /*10.
    string nombreYapellido;

    cout << "Ingrese su nombre y apellido ";
    getline(cin, nombreYapellido);
    cout << "Su nombre completo es: " << nombreYapellido;
    */        
    /*11.
    string nombre;
    string apellido;
    int edad;

    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Mi nombre es: " << nombre <<endl;
    cout << "Ingrese su apellido: ";
    cin >> apellido;
    cout << "Mi apellido es: " << apellido <<endl;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Mi edad es: " << edad << " anios"<<endl;
    */
    /*12.
    int numero;
    
    cout << "Ingrese un numero del 1 al 100: ";
    cin >> numero;
    
    bool numeroMayor100 = numero > 100;
    cout << "El numero ingresado es: " << numero << " Es mayor a 100? " << numeroMayor100 << " (1 para si 0 para no.) " <<endl;
    */
    /*13.
    int x;
    int y;
    int z;
    
    cout << "Ingrese un numero para x: ";
    cin >> x;
    cout << "El numero ingresado fue: " << x <<endl;
    cout << "Ingrese un numero para y: ";
    cin >> y;
    cout << "El numero ingresado fue: " << y <<endl;
    cout << "Ingrese un numero para z: ";
    cin >> z;
    cout << "El numero ingresado fue: " << z <<endl;
    
    double operacion = ((x+2*y)+3*z)/6.0;
    
    cout << "La operacion suma de x, el doble de y, todo mas el triple de z, dividido 6, da como resultado: " << operacion <<endl;
    */
    /*Ejercicio autoevaluable.
    string namepj;
    int vida = 10;
    int runa1;
    int runa2;
    int runa3;
    
    cout << "Ingrese el nombre del personaje: ";
    cin >> namepj;
    cout << namepj << " tiene " << vida << "HP\n";
    
    cout << "Ingrese un numero entre 1 y 10: \n";
    cin >> runa2;
    cout << "Ingrese un numero entre 1 y 10: \n";
    cin >> runa3;
    cout << "Ingrese un numero entre 1 y 10: \n";
    cin >> runa1;
    
    vida = vida - runa1 - (runa2/2);
    cout << "Sus puntos de vida son: " << vida << "HP\n";
    vida = vida + (runa3/2);
    cout << "Sus puntos de vida son: " << vida << "HP\n";
    
    bool pjvivo = vida >= 1;
    
    cout << "Su personaje sigue vivo? " << pjvivo << " (1 para si 0 para no)" << endl;
    */
    /*entregable.
    cout << "Bienvenidos a Introduccion a la Programacion" << endl;
    */

    return 0;
}