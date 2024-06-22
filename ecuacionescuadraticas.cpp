#include<iostream>
#include<math.h>
#include<string>
using namespace std;
string Ecuacionescuadraticas(double a, double b, double c,double x1, double x2)
{
    if(a==0)
    return  "Error División por cero";
    // calculo del discriminante
    double d =(b*b) - (4*a*c);
    if(d < 0)
return "Error.  no se puede calcular la raiz de un numero negativo";
x1 = (-b + sqrt (d) / (2*a));
x2 = (-b - sqrt (d) / (2*a));

return "Error DiviSión por cero ";

  }

  
  