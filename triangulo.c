printf("Escribe la medida del ángulo entre los lados:");
scanf("%lf",&angulo1);
//fórmula//
angulo1= (angulo1*3.1416)/180;
r=lado1*lado1+lado2*lado2;
lado3 = sqrt(r-(2*lado1*lado2*cos(angulo1)));

printf("la medida del tercer lado del triángulo es %.2lf",lado3);

return 0;
}



