#include <stdio.h>
#include <time.h>

typedef struct fecha
{
    int dia;
    int mes;
    int anio;
}fechanacimiento;

typedef struct pete
{
    char nombre[20];
    fechanacimiento nacimiento;
}petin;

void ingresarfecha(fechanacimiento *f)
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
    printf("Ingrese el nombre: \n");
    scanf("%s",nuevo->nombre);
    printf("Ingresar fecha de nacimiento:\n");
    ingresarfecha(&nuevo->nacimiento);
}

int calcularedad(fechanacimiento *f)
{
    int edad;
    time_t a;
    struct tm* fechaactual;
    a=time(NULL);
    fechaactual=localtime(&a);
    int anioactual = fechaactual ->tm_year + 1900;
    int mesactual = fechaactual ->tm_mon + 1;
    if (mesactual > f->mes)
    {
        edad = anioactual - f->anio;
    }
    else
    {
        edad = anioactual - f->anio - 1;
    }
    
    //int edad = anioactual - f->anio;
    return edad;
}


int main()
{
    
    int n;
    printf("Cuantos alumnos va a ingresar\n");
    scanf("%d",&n);
    petin alumnos[n];
    int i;
    for ( i = 0; i < n; i++)
    {
        ingresardatos(&alumnos[i]);
        printf(" Su edad es: %d\n",calcularedad(&alumnos[i].nacimiento));
    }
    
    return 0;
}            