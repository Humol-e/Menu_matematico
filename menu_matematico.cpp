
#include<iostream>
#include<math.h>
#include <windows.h>

int opcion, numero;
float valor1, resultado, valor2;
using namespace std;


void suma(){
resultado = valor1 + valor2;
}


void numerocubo(){
resultado = valor1 * valor1 * valor1;
}


void parimpar(){
    if (numero==00)
{
    cout<<"El numero es igual a 0.";
     Sleep(20000);
}
else if ( numero % 2==0)
{
    cout<<"El numero es numero par.";
    Sleep(20000);
}
else{
    cout<<"El numero es impar.";
     Sleep(20000);
}

}
int main(){
cout<<"Bienvenido a tu resuelve todo :)"<<endl;
cout<<"Seleccione lo que desees resolver."<<endl;
cout<<"1. Suma x + y"<<endl;
cout<<"2. Cubo de un numero"<<endl;
cout<<"3. Verifique si el numero es par o impar"<<endl; 
cout<<"4. Salir"<<endl; cin>>opcion;


switch(opcion){
case 1: cout<<"Inserte el primer valor: ";
          cin>>valor1;
        cout<<"Inserte el segundo valor: ";
          cin>>valor2;
           suma();
             cout<<resultado;
             Sleep(20000);
             break;

case 2: cout<<"Escriba el tamaño de un lado: "; 
         cin>>valor1;
         numerocubo();
         cout<<resultado;
         Sleep(20000);
         break;
        
case 3: cout<<"Inserte el valor: ";
          cin>>numero;
        parimpar();
        Sleep(20000);
        break;
case 4: cout<<"Gracias por utilizar.";
Sleep(3000);
break;

}
    return 0;
}


