#include <stdio.h>
#include <math.h>

int main()
{
double lado1,lado2,angulo1,lado3, r;
printf("Escribe la medida del primer lado:");
scanf("%lf",&lado1);
printf("Escribe la medida del segundo lado:");
scanf("%lf",&lado2);
printf("Escribe la medida del ángulo entre los lados:");
scanf("%lf",&angulo1);
//fórmula//
angulo1= (angulo1*3.1416)/180;
r=lado1*lado1+lado2*lado2;
lado3 = sqrt(r-(2*lado1*lado2*cos(angulo1)));

printf("la medida del tercer lado del triángulo es %.2lf",lado3);

return 0;
}



