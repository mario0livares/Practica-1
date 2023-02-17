#include <stdio.h>
int main()
{
float largo,ancho,altura,prisma;
printf("ingresa el largo :");
scanf("%f",&largo);
printf("ingresa el ancho :");
scanf("%f",&ancho);
printf("ingresa la altura :");
scanf("%f",&altura);
prisma=largo*ancho*altura;
printf("El volumen de tu prisma rectangular es %.2f",prisma);
return 0;
}
