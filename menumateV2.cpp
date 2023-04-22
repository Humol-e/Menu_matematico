
#include<iostream>
#include<math.h>
#include<windows.h>
#include<conio.h>

int opcion, numero;
float valor1, resultado, valor2;
using namespace std;
double a, b, c;

void suma(){
resultado = valor1 + valor2;
getch();
} 
void numerocubo(){
resultado = valor1 * valor1 * valor1;
}
void parimpar(){
    if (numero==00)
{
    cout<<"El numero es igual a 0."<<endl;
     getch();
}
else if ( numero % 2==0)
{
    cout<<"El numero es numero par.";
    getch();
}
else{
    cout<<"El numero es impar.";
     getch();
}
}

void hipotenusa(){
    resultado = (sqrt((valor1 * valor1) + (valor2 * valor2)));
    cout<<"La hipotenusa mide: "<<resultado<<endl;
    getch();  
}

void formulagen(){
    cout<< "Escribe el valor de a: "; cin>>a;
cout<< "Escribe el valor de b: "; cin>>b;
cout<< "Escribe el valor de c: "; cin>>c;
resultado = (-b+(sqrt(pow(b,2)-4*a*c))) / (a*2);

cout<<"\nEl valor de x es: "<<resultado<<endl;
getch();
}

int main(){
cout<<"Bienvenido a tu resuelve todo :)"<<endl;
cout<<"Seleccione lo que desees resolver:"<<endl;
cout<<"1. Suma x + y."<<endl;
cout<<"2. Cubo de un numero."<<endl;
cout<<"3. Verifique si el numero es par o impar."<<endl; 
cout<<"4. Obtener la hipotenusa de un trianuglo rectangulo."<<endl;
cout<<"5. Aplicar la formula general a una ecuacion."<<endl;
cout<<"6. Salir."<<endl; cin>>opcion;


switch(opcion){
case 1: cout<<"Inserte el primer valor: ";
          cin>>valor1;
        cout<<"Inserte el segundo valor: ";
          cin>>valor2;
           suma();
             cout<<resultado<<endl;
             main();
             break;

case 2: cout<<"Escriba el tamaño de un lado: "; 
         cin>>valor1;
         numerocubo();
         cout<<resultado<<endl;
         main();
         break;
        
case 3: cout<<"Inserte el valor: ";
          cin>>numero;
        parimpar();
        main();
        break;
case 4:     
cout<<"introduce la medida del cateto 1: "; cin>>valor1;
cout<<"introduce la medida del cateto 2: "; cin>>valor2;
    hipotenusa();
    main();
    break;
case 5: 

formulagen();
main();
break;

case 6: cout<<"Gracias por utilizar."<<endl;
getch();
break;

}
return 0;
}

