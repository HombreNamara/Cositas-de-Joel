#include<stdio.h>
typedef struct fecha
{
    int dia;
    int mes;
    int anio;
}fnacimiento;

typedef struct persona
{
    char nombre[20];
    char apellido[20];n
    fnacimiento nacimiento;
    long int telefono; 
}petin;

void ingresarfecha(fnacimiento *f)
{
    printf("Ingrese el dia\n");
    scanf("%d",& f->dia);
    printf("Ingrese el mes\n");
    scanf("%d",&f->mes);
    printf("Ingrese el anio\n");
    scanf("%d",&f->anio);
}

void ingresardatos(petin *nuevo)
{
    printf("Ingrese el nombre:\n");
    scanf("%s",nuevo->nombre);
    printf("Ingrese su apellido:\n");
    scanf("%s", nuevo->apellido);
    printf("Ingrese su numero de telefono:\n");
    scanf("%ld",&nuevo->telefono);
    printf("Ingrese su fecha de nacimiento:\n");
    ingresarfecha(&nuevo->nacimiento);
}

int main()
{
    petin alumnos[2];
    for (int i = 0; i < 2; i++)
    {
        ingresardatos(&alumnos[i]);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("[%s %s],[%ld],[%d-%d-%d]\n",alumnos[i].nombre,alumnos[i].apellido,alumnos[i].telefono,alumnos[i].nacimiento.dia,alumnos[i].nacimiento.mes,alumnos[i].nacimiento.anio);    
    }
    
    //printf("[%s],[%s],[%ld],[%d-%d-%d]",alumnos[i].nombre,alumnos[i].apellido,alumnos[i].telefono,alumnos[i].nacimiento.dia,alumnos[i].nacimiento.mes,alumnos[i].nacimiento.anio);
    return 0;
}
