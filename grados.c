#include <stdio.h>
int main()
{
//convertidor de grados fahrenheit a grados centigrados//
float fahrenheit,centigrados;
printf("agrega tus grados fahrenheit que quieras convertir:\n");
scanf("%f",&fahrenheit);
centigrados=(fahrenheit-32)*.55;
printf("tus grados centigrados son %.2f \n",centigrados);
return 0;
}
