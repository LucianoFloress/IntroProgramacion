#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cctype>
#include <conio.h>
#include <windows.h>


using namespace std;

int main (int argc, char *argv[]) {
    
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
    /*6.*/

    
    while(true){
		
		if(kbhit()) { 
			int tecla=getch();
            
			switch(tecla)
			{
            case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': case 'g': 
            case 'h': case 'i': case 'j': case 'k': case 'l': case 'm': case 'n': 
            case 'o': case 'p': case 'q': case 'r': case 's': case 't': case 'u': 
            case 'v': case 'w': case 'x': case 'y': case 'z': 
				cout<<"Letra: "<<(char)tecla <<endl;
				break;
			case 13:
				return 1;
			}
		}
	}

    return 0;
}