#include <stdio.h>
int main()
{
float perimetro,lado;
printf("Escribe la medida del lado de un pentagono :");
scanf("%f",& lado);
//fórmula//
perimetro = lado*5;
printf("El perimetro es %.2f",perimetro);
return 0;
}
