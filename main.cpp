#include <stdio.h>
#include <windows.h>

int main()
{
struct grupo{
    int matricula;
    char nombre[20];
    char apellido[30];
    int calif;
    int calif_final;
    char laboratorio [30];
    int participaciones;
}alumno;

int opc;
   do{
        system("cls");
        printf("\tSelecciona una opcion del menu\n");
        printf("1-Llena el registro del alumno\n");
        printf("2-Muestra el registro guardado\n");
        printf("3-salir\n");
        scanf("%d",&opc);

        switch(opc){
        case 1:
            system("cls");
            printf("1-Ingresa los datos del alumno\n");
            printf("Matricula: \n");
            scanf("%d",&alumno.matricula);
            printf("nombre del alumno:\n");
            scanf("%s",&alumno.nombre);
            printf("apellidos:\n");
            fflush(stdin);
            gets(alumno.apellido);
            printf("calificacion: \n");
            scanf("%d",&alumno.calif);
            printf("calificacion final: \n");
            scanf("%d",&alumno.calif_final);
            printf("laboratorio: \n");
            scanf("%s",&alumno.laboratorio);
            printf("participaciones: \n");
            scanf("%d",&alumno.participaciones);
            system("PAUSE");
            break;
         case 2:
            system("cls");
            printf("Datos guardados\n\n");
            printf("Matricula: %d\n\n",alumno.matricula);
            printf("Nombre: %s\n\n",alumno.nombre);
            printf("Apellidos: %s\n\n",alumno.apellido);
            printf("Calificacion parcial: %d\n\n",alumno.calif);
            printf("Calificacion final: %d\n\n",alumno.calif_final);
            printf("Laboratorio: %s\n\n",alumno.laboratorio);
            printf("Participaciones: %d\n\n",alumno.participaciones);
            printf("\n");
            system("PAUSE");
            break;
         case 3:
            break;
        }

   }while(opc != 3);
    return 0;
}
