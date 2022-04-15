#include <stdio.h>
#include <stdlib.h>

typedef struct propietario
{
   char nombre[20];
   char rut[12];
   long int telefono;
}pete; 

typedef struct especs_tecnicas
{
    float cilindrada;
    char combustible[20];
}specs;

typedef struct automovil
{
    char marca[20];
    char modelo[20];
    char patente[20];
    char color[20];
    int anio;
    pete duenho;
    specs motor; 
}nave;

void ingresar_propietario(pete *p)
{
    system("clear");
    printf("Datos del propietario:\nNombre:\n");
    scanf("%s",p->nombre);
    printf("Rut:\n");
    scanf("%s",p->rut);
    printf("Telefono:\n");
    scanf("%ld",&p->telefono);
}

void ingresar_specs_tecnicas(specs *s)
{
    system("clear");
    printf("\nCilindrada del motor:\n");
    scanf("%f",&s->cilindrada);
    printf("Tipo de combustible:\n");
    scanf("%s",s->combustible);
    system("clear");
}



void ingresar_datos(nave *a)
{
    system("clear");
    printf("\nMarca del vehiculo:\n");
    scanf("%s",a->marca);
    printf("Modelo del vehiculo:\n");
    scanf("%s",a->modelo);
    printf("Patente:\n");
    scanf("%s",a->patente);
    printf("Color:\n");
    scanf("%s",a->color);
    printf("Año:\n");
    scanf("%d",&a->anio);
    ingresar_propietario(&a->duenho);
    ingresar_specs_tecnicas(&a->motor);
}


int main()
{
    int n,i;
    printf("Cuantos vehiculos va a ingresar?\n");
    scanf ("%d",&n);
    nave autos[n];

    for (int i = 0; i < n; i++)
    {
        printf("Datos vehiculo N° %d",i+1);
        ingresar_datos(&autos[i]);
        i=i;
    }
    for (int i = 0; i < n; i++)
    {
        getchar();
        system("clear");
        printf("\n\tVehiculo N°%d\nMarca:%s\nModelo:%s\nColor:%s\nPatente:%s\nAño:%d\nCilindrada:%.1f\nCombustible:%s\n\n\tPropietario\nNombre:%s\nRut:%s\nTelefono:%ld\n",i+1,autos[i].marca,autos[i].modelo,autos[i].color,autos[i].patente,autos[i].anio,autos[i].motor.cilindrada,autos[i].motor.combustible,autos[i].duenho.nombre,autos[i].duenho.rut,autos[i].duenho.telefono);
    }
    
    
    return 0;
}