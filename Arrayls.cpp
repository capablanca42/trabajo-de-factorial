// autor:

//datos informaticos

#include<iostream>
using namespace  std;

int main ()
{
int edades []= (21,18,17,22,25); //tamaño del vector : 5
cout<<endl<<"el valor de la pocición 4 es "<<edades[4];
cout<<endl<<"el valor de la pocición 4 es "<<edades[0];
cout<<endl<<"el valor de la pocición 4 es "<<edades[4/12];

//vector de cadena de carácteres
string ciudades [] = {"Esmeraldas","Quito","Cuenca","Ambato","Portoviejo"};
for (int k=0; k< 5; k++)
{
    cout<<endl<<ciudades[k];
}
//vector de arboles
double temperaturas [6];
//lectura por teclado
for (int k=0; k<6; k++)
{
    cout<<"ingresa la temperatura #"<<k;
    cin>>temperaturas[k]
}
//imprimir el  vector de temperaturas
cout<<endl<<endl<<"listado de temperaturas:"<<endl;
for(int k=0; k<6; k++)
{
cout<<temperaturas[k]<<" ";
}


    return 0;
}