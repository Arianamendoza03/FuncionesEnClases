#include <iostream>
//funciones realizan un proceso y devuelve un valor

using namespace std;

//funcion que calcula la potencia de un numero
//2 ^ 5 = 2 x 2 x 2 x 2 x 2 = 32

double potencia (double base, int exponente)
{
    double resultado = base;
    for(int i=1; i<= exponente; i++)
    {
        resultado = resultado *  base;
    }

    return resultado;
}

//Funcion factorial(5) = 1x2x3x4x5
int factorial (int num)
{
    int fac=1;
    for(int i=1; i<=num; i++)
        fac=fac* 1;

    return fac;
}

// Funcion que calcula la serie
double sumaserie(double x)
{
    double suma=0;
             suma= x - (potencia(x, 3) / factorial(3))
                     + (potencia(x, 5) / factorial(5))
                     - (potencia(x, 7) / factorial(7));
     return suma;
}

//funcion que recibe como parametros el nombre de una persona y su edad,
// y devuelva un saludo, indicando ademas si es o no mayor de edad
string saludos(string nombre, int edad)
{
    string mensaje ="Bienvenido " + nombre;
    if(edad>=18)
        mensaje= mensaje +  " , usted es mayor de edad ";
    else
        mensaje= mensaje + ", usted es menor de edad ";

    return mensaje;
}

// Una funcion recibe como paremetros el nombre de una persona,
//el dia y mes de nacimiento. la funcion debe devolver el nombre
//de la persona, indicando el signo del zodiaco al que pertenece
// Ejemplo. Hola Juan, tu signo del zodiaco es acuario
//Aries (21 de marzo-20 de abril)
//Tauro ( 21 de abril- 21 de mayo)
//Geminis ( 22 de mayo- 21 de junio)
//Cancer ( 22 de junio- 22 de julio)
//Leo (23 de julio- 23 de agosto)
//Virgo( 24 de agosto- 23 de septiembre)
//Libra ( 24 de septiembre- 23 de octubre)


string signo_zodiacal(string nombre, int dia_nac, int mes_nac)
{ //Aries (21 de marzo-20 de abril)
    string mensaje= "Hola " + nombre + ", ";
    if((mes_nac==3 && dia_nac>=21) || (mes_nac==4 && dia_nac<=20))
           mensaje+="tu signo  del zodiaco es Aries";
    else if ((mes_nac==3 && dia_nac>=21) || (mes_nac==4 && dia_nac<=21))
        mensaje+="tu signo  del zodiaco es Tauro";
    else if ((mes_nac==3 && dia_nac>=22) || (mes_nac==4 && dia_nac<=21))
        mensaje+="tu signo  del zodiaco es Gemenis";
    else if ((mes_nac==3 && dia_nac>=22) || (mes_nac==4 && dia_nac<=22))
        mensaje+="tu signo  del zodiaco es Cancer";
    else if ((mes_nac==3 && dia_nac>=23) || (mes_nac==4 && dia_nac<=23))
        mensaje+="tu signo  del zodiaco es Leo";
    else if ((mes_nac==3 && dia_nac>=24) || (mes_nac==4 && dia_nac<=23))
        mensaje+="tu signo  del zodiaco es Virgo";
    else if ((mes_nac==3 && dia_nac>=24) || (mes_nac==4 && dia_nac<=23))
        mensaje+="tu signo  del zodiaco es Libra";

    return mensaje;
}
int main(){
   cout<<endl<<potencia(2, 5);
   cout<<endl<<potencia(5, 3);
   cout<<endl<<potencia(10, 3);
   double x, y;
   cout<<endl<<"Ingrese la base: "; cin>>x;
   cout<<endl<<"Ingrese la base: "; cin>>y;
   cout<<endl<<x<<" elevado a la potencia " << y << " es " <<potencia(x,y);

   cout<<endl<<"El factorial de 5 es : "<<factorial(5);
   cout<<endl<<"El factorial de 5 es : "<<factorial(6);
   cout<<endl<<"El factorial de 5 es : "<<factorial(10);

   cout<<endl<<"El sumatoria de la serie es " <<sumaserie(5);

   cout<<endl<<saludos("Juan Gracia", 20);
   cout<<endl<<saludos("Ana isabel", 15);

   cout<<endl<<signo_zodiacal("Juan",22,3);
    return 0;
}





