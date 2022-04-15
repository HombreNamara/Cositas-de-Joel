#include<stdio.h>
typedef struct fecha
{
    int dia;
    int mes;
    int anio;
}fnacimiento;

typedef struct curso
{
    char nombre[20];
    int nota1;
    int nota2;
    int nota3;
}ramo;

typedef struct persona
{
    char nombre[20];
    char apellido[20];
    long int telefono;
    fnacimiento nacimiento;
    ramo ramos;

}petin;

void ingresarfecha(fnacimiento *f)
{
    printf("Ingrese el dia:\n");
    scanf("%d",&f->dia);
    printf("Mes:\n");
    scanf("%d",&f->mes);
    printf("Anio:\n");
    scanf("%d",&f->anio);
}

void ingresarnotas(ramo *r)
{
    printf("\nAsigatura:\n");
    scanf("%s",r->nombre);
    printf("Nota 1:\n");
    scanf("%d",&r->nota1);
    printf("Nota 2;\n");
    scanf("%d",&r->nota2);
    printf("Nota 3:\n");
    scanf("%d",&r->nota3);
}

void ingresardatos(petin *p)
{
    printf("\nNombre:\n");
    scanf("%s",p->nombre);
    printf("Apellido:\n");
    scanf("%s",p->apellido);
    printf("Telefono:\n");
    scanf("%ld",&p->telefono);
    printf("\nFecha de nacimiento:\n");
    ingresarfecha(&p->nacimiento);
    printf("\nIngresar informacion de Asignaturas:\n");
    ingresarnotas(&p->ramos);
}
int promedio(ramo *pr)
{
    int promedio;
    promedio=(pr->nota1 + pr->nota2 + pr->nota3) / 3;
    return promedio;
}
int main()
{
    petin alumnos[2];

    for (int i = 0; i < 2; i++)
    {
        printf("\nAlumno %d",i+1);
        ingresardatos(&alumnos[i]);
    }   

    for (int i = 0; i < 2; i++)
    {
        printf("\n[%s %s],[%ld],[%d-%d-%d]\nPromedio %s: %d\n",alumnos[i].nombre,alumnos[i].apellido,alumnos[i].telefono,alumnos[i].nacimiento.dia,alumnos[i].nacimiento.mes,alumnos[i].nacimiento.anio,alumnos[i].ramos.nombre,promedio(&alumnos[i].ramos));
    }
     


    return 0;
}
