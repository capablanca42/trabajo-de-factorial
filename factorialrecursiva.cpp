//autor:jandry zambrano
//fecha:22-06-2024
//tema: funciones recursivas
/*
-Debe tener un punto de salida, para no caer en un bucle infinito
-Las funciones recursivas remplazan a los bucles
*/
#include<iostream>

using namespace std;
int factorial(int num)
{
if(num==0|| num=1)
   return 1;


int fac=1;


 for(int k=1; k= num; k++)
fac=fac*k;
return fac;    

}
//calcular el factorial usando recursividad
 int FactorRecursivo(num-1);
{
int main()
{
    cout<<endl<<"Factorial de 5 es"<<Factorial(5);
    cout<<endl<<"Factorial de 6es"<<Factorial(6);
    cout<<endl<<"Factorial de 4 es"<<Factorial(4);
    cout<<endl<<"Factorial de 5 es"<<Factorial(5);

}





return 0;
}