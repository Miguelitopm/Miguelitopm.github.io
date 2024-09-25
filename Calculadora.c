// Calculadora en C
// Miguel Penaranda 

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void Sumar(){
    int numero1 = 0;
    int numero2 = 0;
    printf ("Indique los numero a Sumar: \n");
    printf ("Primer Numero: ");
    scanf ("%d",&numero1);
    printf ("Segundo Numero: ");
    scanf ("%d",&numero2);

    int suma = (numero1 + numero2);
    printf ("La suma es %d\n",suma);
    Sleep(3000);
    system ("cls");
}

void Restar(){
    int numero1 = 0;
    int numero2 = 0;
    printf ("Indique los numero a Restar: \n");
    printf ("Primer Numero: ");
    scanf ("%d",&numero1);
    printf ("Segundo Numero: ");
    scanf ("%d",&numero2);

    int resta = (numero1 - numero2);
    printf ("La resta es %d\n",resta);
    Sleep (3000);
    system ("cls");
}

void Multiplicar(){
    int numero1 = 0;
    int numero2 = 0;
    printf ("Indique los numero a Multiplicar: \n");
    printf ("Primer Numero: ");
    scanf ("%d",&numero1);
    printf ("Segundo Numero: ");
    scanf ("%d",&numero2);

    int multiplicacion = (numero1 * numero2);
    printf ("La multiplicacion es %d\n",multiplicacion);
    Sleep(3000);
    system ("cls");

}

void Dividir(){
    int numero1 = 0;
    int numero2 = 0;
    int division = 0;
    printf ("Indique los numero a Dividir: \n");
    printf ("Primer Numero: ");
    scanf ("%d",&numero1);
    printf ("Segundo Numero: ");
    scanf ("%d",&numero2);

    if (numero2> 0){
        division = (numero1 / numero2);
        printf ("La division es %d\n",division);
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