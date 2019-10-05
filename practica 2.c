/*
Practica2
suma y resta
Rincon Resendiz Angel Alexis
*/
/*al momento de correr el programa desde mi computadora tarda
en poner la pantalla negra pero si hace el trabajo por si le pasa lo mismo profe*/
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main (void) {
char repeticion;
float a;
float b;
float c;
int opt;
do {
printf ("eligue una operacion \n 1.-suma \n 2.-resta \n 3.-miltuplicacion \n 4.-division \n");
scanf ("%d", &opt);
printf ("ingresa el primer valor \n");
scanf ("%f", &a);
printf ("ingresa el segundo valor \n");
scanf("%f",&b);
switch (opt) {
case 1:
c=a+b;
break;
case 2:
c=a-b;
break;
case 3:
c=a*b;
break;
case 4:
while (b==0){
printf ("eligue un valor diferente de 0 para b \n");
scanf ("%f", &b);
}
c=a/b;
break;
default:
    printf ("opcion invalida");
}
printf ("tu resultado es %f \n" , c);
printf ("quieres hacer otra operacion S N: \n");
repeticion =getch();

}
while (repeticion=='S' || repeticion=='s');
}

