// Calculadora en C
// Miguel Penaranda 

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void Sumar(){
    float numero1 = 0;
    float numero2 = 0;
    printf ("Indique los numero a Sumar: \n");
    printf ("Primer Numero: ");
    scanf ("%f",&numero1);
    printf ("Segundo Numero: ");
    scanf ("%f",&numero2);

    float suma = (numero1 + numero2);
    printf ("La suma es %.2f\n",suma);
    Sleep(3000);
    system ("cls");
}

void Restar(){
    float numero1 = 0;
    float numero2 = 0;
    printf ("Indique los numero a Restar: \n");
    printf ("Primer Numero: ");
    scanf ("%f",&numero1);
    printf ("Segundo Numero: ");
    scanf ("%f",&numero2);

    float resta = (numero1 - numero2);
    printf ("La resta es %.2f\n",resta);
    Sleep (3000);
    system ("cls");
}

void Multiplicar(){
    float numero1 = 0;
    float numero2 = 0;
    printf ("Indique los numero a Multiplicar: \n");
    printf ("Primer Numero: ");
    scanf ("%f",&numero1);
    printf ("Segundo Numero: ");
    scanf ("%f",&numero2);

    float multiplicacion = (numero1 * numero2);
    printf ("La multiplicacion es %.2f\n",multiplicacion);
    Sleep(3000);
    system ("cls");

}

void Dividir(){
    float numero1 = 0;
    float numero2 = 0;
    float division = 0;
    printf ("Indique los numero a Dividir: \n");
    printf ("Primer Numero: ");
    scanf ("%f",&numero1);
    printf ("Segundo Numero: ");
    scanf ("%f",&numero2);

    if (numero2> 0){
        division = (numero1 / numero2);
        printf ("La division es %.2f\n",division);
        Sleep (3000);
        system ("cls");
    } else {
        printf ("No puede dividir entre 0\n");} 
        Sleep (3000);
        system ("cls");
}
int main(){
    int opcion = 0;
    while (opcion != 5){ 
    printf("Bienvenido a la Calculadora\n");
    printf("Indique el Calculo\n");
    printf("1 - Sumar\n");
    printf("2 - Restar\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("5 - Salir\n");
    scanf("%d",&opcion);

    switch (opcion) {
    case 1:
        system("cls");
        Sumar();
        break;
    case 2:
        system("cls");
        Restar();
        break;
    case 3:
        system("cls");
        Multiplicar();
        break;
    case 4:
        system("cls");
        Dividir();
        break;
    case 5:
        printf ("Hasta Luego");
        break;
    default:
        system("cls");
        printf("Indique una opcion Valida (1,2,3,4,5) \n");
        Sleep (2000);
        system ("cls");
        break;
    }
    }
    return 0;
    
}
