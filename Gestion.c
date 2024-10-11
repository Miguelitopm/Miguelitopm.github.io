// Miguel Penaranda
/*Sistema de inventario: Gestionar un inventario de productos,
    con funciones para agregar, vender y actualizar existencias.*/

// Las funciones agregar y vender funcion de la misma forma, cambiando el sumar con el restas
// A mejorar:
// La validacion de datos puede ser mas exhaustiva
/* Con mejores conocimientos, se puede alcanzar una estructura donde el cliente agregue sus propios productos
 al inicio del programa, por lo que el programa seria personalizado*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <windows.h>

//Productos
int N_relojes = 15, N_bolsos = 8, N_teclados = 6, N_telefonos = 20;
int P_relojes = 5, P_bolsos = 4, P_teclados = 10, P_telefonos = 20;

void agregar_producto(){
    int agregar, opcion; 
    bool positivo; //Validacion
    do {    //Bucle del menu
    system("cls");
    printf("... Agregar un Producto ...\n");
    printf("1 . Relojes\n");
    printf("2 . Bolsos\n");
    printf("3 . Teclados\n");
    printf("4 . Telefonos\n");
    printf("5 ... Salir ...\n");
    printf("Indique el numero del producto a agregar(1,2,3,4)\n");
    scanf("%d", &opcion);

    switch (opcion){
        // Agregar Relojes
        case 1:
            system("cls");
            printf("Opcion: %d", opcion);
            printf("... Pagina de Relojes ...\n");
            printf("Indique el numero de relojes que quiere agregar: \n");
            scanf("%d", &agregar);
            
            positivo = (agregar >= 0);
            if (positivo){
                N_relojes = N_relojes + agregar;}
            else
                printf ("Datos invalidos, no se puede agregar: %d", agregar);

            printf("Numero de Relojes en el stock: %d", N_relojes);
            break;

        // Agregar Bolsos
        case 2:
            system("cls");
            printf("Opcion: %d", opcion);
            printf("... Pagina de Bolsos ...\n");
            printf("Indique el numero de bolsos que quiere agregar: \n");
            scanf("%d", &agregar);
            
            positivo = (agregar >= 0);
            if (positivo){
                N_bolsos = N_bolsos + agregar;}
            else
                printf ("Datos invalidos, no se puede agregar: %d", agregar);

            printf("Numero de bolsos en el stock: %d", N_bolsos);
            break;
        
        // Agregar Teclados
        case 3:
            system("cls");
            printf("Opcion: %d", opcion);
            printf("... Pagina de Teclados ...\n");
            printf("Indique el numero de teclados que quiere agregar: \n");
            scanf("%d", &agregar);
            
            positivo = (agregar >= 0);
            if (positivo){
                N_teclados = N_teclados + agregar;}
            else
                printf ("Datos invalidos, no se puede agregar: %d", agregar);

            printf("Numero de Teclados en el stock: %d \n", N_teclados);
            break;

        // Agregar Telefonos
        case 4:
            system("cls");
            printf("Opcion: %d", opcion);
            printf("... Pagina de Telefonos ...\n");
            printf("Indique el numero de telefonos que quiere agregar: \n");
            scanf("%d", &agregar);
            
            positivo = (agregar >= 0);
            if (positivo){
                N_telefonos = N_telefonos + agregar;}
            else
                printf ("Datos invalidos, no se puede agregar: %d", agregar);

            printf("Numero de Relojes en el stock: %d", N_telefonos);
            break;

        // Validar opciones incorrectas
        default:
            system("cls");
            printf("Opcion: %d", opcion);
            printf("... Opcion Invalida ...\n");
            printf("Indique una opcion valida(1,2,3,4)");
            break;
        
    }
    } while (opcion != 5);
}

void vender(){
    int vender, opcion;
    bool positivo;
    do {
    system("cls");
    printf("... Vender un Producto ...\n");
    printf("1 . Relojes\n");
    printf("2 . Bolsos\n");
    printf("3 . Teclados\n");
    printf("4 . Telefonos\n");
    printf("5 ... Salir ...\n");
    printf("Indique el numero del producto a vender(1,2,3,4)\n");
    scanf("%d", &opcion);

    switch (opcion){
        case 1:
            system("cls");
            printf("Opcion: %d", opcion);
            printf("... Pagina de Relojes ...\n");
            printf("Indique el numero de relojes que quiere vender: \n");
            scanf("%d", &vender);
            
            positivo = (vender >= 0);
            if (positivo){
                N_relojes = N_relojes - vender;}
            else
                printf ("Datos invalidos, no se puede vender: %d", vender);

            printf("Numero de Relojes en el stock: %d", N_relojes);
            break;

        case 2:
            system("cls");
            printf("Opcion: %d", opcion);
            printf("... Pagina de Bolsos ...\n");
            printf("Indique el numero de bolsos que quiere vender: \n");
            scanf("%d", &vender);
            
            positivo = (vender >= 0);
            if (positivo){
                N_bolsos = N_bolsos - vender;}
            else
                printf ("Datos invalidos, no se puede vender: %d", vender);

            printf("Numero de bolsos en el stock: %d", N_bolsos);
            break;
        
        case 3:
            system("cls");
            printf("Opcion: %d", opcion);
            printf("... Pagina de Teclados ...\n");
            printf("Indique el numero de teclados que quiere vender: \n");
            scanf("%d", &vender);
            
            positivo = (vender >= 0);
            if (positivo){
                N_teclados = N_teclados + vender;}
            else
                printf ("Datos invalidos, no se puede vender: %d", vender);

            printf("Numero de Teclados en el stock: %d \n", N_teclados);
            break;

        case 4:
            system("cls");
            printf("Opcion: %d", opcion);
            printf("... Pagina de Telefonos ...\n");
            printf("Indique el numero de telefonos que quiere vender: \n");
            scanf("%d", &vender);
            
            positivo = (vender >= 0);
            if (positivo){
                N_telefonos = N_telefonos + vender;}
            else
                printf ("Datos invalidos, no se puede vender: %d", vender);

            printf("Numero de Relojes en el stock: %d", N_telefonos);
            break;

        default:
            system("cls");
            printf("Opcion: %d", opcion);
            printf("... Opcion Invalida ...\n");
            printf("Indique una opcion valida(1,2,3,4)");
            break;
        
    }
    } while (opcion != 5);
}

void visualizar(){
    int opcion;
    do {
    system("cls");
    printf("... Stock de Productos ...\n");
    printf("1 . Relojes: %d \n", N_relojes);
    printf("2 . Bolsos: %d \n", N_bolsos);
    printf("3 . Teclados: %d \n", N_teclados);
    printf("4 . Telefonos: %d \n", N_telefonos);
    printf("5 ... Salir ...\n");
    scanf("%d", &opcion);
    } while (opcion != 5);
}

int main(){
    int opcion = 0;
    do{
    system("cls");
    printf("... Bienvenido al Sistema de Gestion ...\n");
    printf("1 . Agregar Producto\n");
    printf("2. Vender Producto\n");
    printf("3. Ver Productos\n");
    printf("4. Salir\n");
    scanf("%d", &opcion);
    
    switch (opcion){
        case 1:
            agregar_producto();
            break;
        case 2:
            vender();
            break;
        case 3:
            visualizar();
            break;
        case 4:
            printf("... Hasta Luego ...\n");
        default:
            printf("Indique una opcion valida (1,2,3,4)");
            break;
    }
    } while (opcion != 4);
    return 0;
}