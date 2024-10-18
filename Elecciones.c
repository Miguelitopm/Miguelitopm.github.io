// Miguel Penaranda
/* En una eleccion realizada en un municipio, se presentaron tres candidatos: Pedro, Maria y Juan. 
Por votante se elaboro un registro asi: Cedula de identidad y el valor del voto.
 - Para votar:
    Pedro 1;
    Maria 2;
    Juan 3;
a) Cuantos votos obtuvo cada candidato
b) Cuantos votos son nulos (voto nulo cualquier otro digito)
c) Quien gano las elecciones
    Ciclo While*/

#include <stdio.h>
#include <string.h>
#include <windows.h>

int votos_totales, votantes = 0;
char ganador[20], Cedula[9];
int Votos_Pedro = 0, Votos_Maria = 0, Votos_Juan = 0, Voto_nulo = 0;

int main(){
    int bucle_elecciones = 0;
    int opcion_menu = 0;
    //Bucle para agregar votantes
    do {
    system ("cls");
    printf("... Sistema de Elecciones ...\n");
    printf("Indique su cedula (sin caracteres espaciales): \n");
    scanf("%8s", Cedula);

        if (strlen(Cedula) == 8){ //Validacion de la Cedula
            printf ("Cedule correcta\n");
    
    printf(" --- Candidatos Electorales --- \n");
        printf("Pedro - 1\n");
        printf("Maria - 2\n");
        printf("Juan - 3\n"); 
        printf("Escoja su opcion (1,2,3): ");
        scanf ("%d", &opcion_menu);

        switch (opcion_menu)
        {
        case 1: 
            printf("Voto por el candidato Pedro\n\n");
            Votos_Pedro++;
            break;
        case 2:
            printf("Maria - 2\n\n");
            Votos_Maria++;
            break;
        case 3:
            printf("Juan - 3\n\n");
            Votos_Juan++;
            break;
        default:
            printf ("Candidato nulo\n\n");
            Voto_nulo++;
    }
        } else {
            printf ("Cedula incorrecta: Longitud maxima de 8 caracteres\n");
            Voto_nulo++;
        }

    printf("Presione 1 para agregar otro votante \n");
    printf("Presione cualquier tecla para salir \n");
    scanf("%d", &bucle_elecciones);
    votantes++;
    } while (bucle_elecciones == 1);

    votos_totales = Votos_Pedro + Votos_Maria + Votos_Juan;

    //Presentacion de resultados
    if (votos_totales > 0){
    system("cls");
    printf("... Resultados Totales ...\n");
    printf("Votos totales para el candidato Pedro: %d\n", Votos_Pedro);
    printf("Votos totales para la candidato Maria: %d\n", Votos_Maria);
    printf("Votos totales para el candidato Juan: %d\n", Votos_Juan);
    printf("Votos nulos totales: %d\n\n", Voto_nulo);

    //Logica para la eleccion del ganador
    if (Votos_Pedro > Votos_Maria && Votos_Pedro > Votos_Juan){
        printf("El ganador es el candidato Pedro\n");
        strcpy(ganador, "Candidato Pedro");

    } else if (Votos_Maria > Votos_Juan)
    {
        printf("El ganador es a candidato Maria\n");
        strcpy(ganador, "Candidata Maria");
    } else {
        printf("El ganador es el candidato Juan\n");
        strcpy(ganador, "Candidato Juan");
    }

    printf("Felicidades al %s\n", ganador);
    } else {
        printf("Elecciones Fallidas: \n");
        printf("... No hay votantes ...\n");
    }

    return 0;
    
}
