#include <stdio.h>
#include <stdlib.h>




/**1) Desarrollar el siguiente enunciado en su CodeBlocks:
Una importante empresa dedicada a la distribución y fiscalización de energía eléctrica en la ciudad le encomendó un sistema que se utilizara
en todos los dispositivos que posee su personal para realizar las mediciones de consumo eléctrico en los hogares.
Cada usuario del sistema al verificar el medidor de electricidad de una vivienda deberá poder ingresar los siguientes datos:
Dirección de la vivienda (calle y número)
Numero de medidor asociado a esa dirección (numero de 10 dígitos)
Kwh consumidos en el periodo (numero de 5 digito como máximo)
Al finalizar el recorrido diario el sistema debe ser capaz de informar los siguientes datos:
El total de kwh que fue registrado por el fiscalizador en la recorrida,
El total de viviendas verificadas
El dinero que se recaudara teniendo en cuenta que la empresa cobra a razón de 3 dólares por cada kwh consumido*/


void Ingreso();
void Menu();
float Multiplicar (float num1, float num2);

int main()
{
    int opcionIngresada, calle, numeracion, numMedidor, flag = 0;
    float IngresoKwhConsumidos = 0, TotalKwh = 0, Num1 = 0, Num2 = 0;
    char NombreDeUsuario[20], calleVivienda[40];
    int viviendasTotales = 0, respuesta=0, respuesta2=0;


    Ingreso();
    scanf ("%s",&NombreDeUsuario);

    do
    {
        system ("cls");
        printf("\nBIENVENIDO %s, INDICA LA OPCION A REALIZAR:\n\n",NombreDeUsuario);
        Menu(opcionIngresada);
        scanf("%i",&opcionIngresada);
        switch (opcionIngresada)
        {
        case 1 :
            system ("cls") ;
            printf("\n*[USUARIO %s] - INGRESAR DATOS DE UN MEDIDOR VERIFICADO*\n",NombreDeUsuario);

            do
            {
                if (respuesta == 1)
                {
                    system ("cls") ;
                    printf("\n*[USUARIO %s] - TOTAL DE kwh REGISTRADOS\n",NombreDeUsuario);
                    printf("INGRESANDO OTRO MEDIDOR:\n");
                }
               /** if (flag==1)
                {
                    printf("ERROR! SE EQUIVOCO DE OPCION..\n");
                }*/
                printf("-INDIQUE LA CALLE DE LA VIVIENDA\n");
                scanf("%s",&calleVivienda);
                printf("\n-INDIQUE SU NUMERACION\n");
                scanf("%i",&numeracion);
                printf("\n-INDIQUE EL NUMERO DE MEDIDOR\n");
                scanf("%i",&numMedidor);
                printf("\n-INDIQUE EL TOTAL DE kwh CONSUMIDOS EN EL PERIODO ACTUAL\n");
                scanf("%f",&IngresoKwhConsumidos);
                TotalKwh +=IngresoKwhConsumidos;
                viviendasTotales++;
                printf("\n-DESEA INGRESAR OTRO MEDIDOR?  [1]-SI   [2]-NO \n");
                scanf("%i",&respuesta);
               /* if(respuesta > 2)
                {
                    flag = 1;
                };*/
            }
            while(respuesta != 2 && respuesta > 2);

            break;
        case 2:
            system ("cls") ;
            printf("\n*[USUARIO %s] - TOTAL DE kwh REGISTRADOS\n",NombreDeUsuario);
            printf("\n-TOTAL DE kwh : %.2f\n",TotalKwh);
            break;
        case 3:
            system ("cls") ;
            printf("\n*[USUARIO %s] - TOTAL DE VIVIENDAS VERIFICADAS\n",NombreDeUsuario);
            printf("\nViviendas: %i\n",viviendasTotales);
            break;
        case 4:
            system ("cls") ;
            printf("\n*[USUARIO %s] - TOTAL DE DINERO RECAUDADO\n",NombreDeUsuario);
            Num1 = TotalKwh;
            Num2 = 3;
            printf("\n-MONTO HASTA LA FECHA: $%.2f\n", Multiplicar(Num1,Num2));
            break;
        default:
            printf ("ERROR! SE EQUIVOCO DE OPCION DE MENU..\n");
        }

        printf("\n\n-DESEA VOLVER AL MENU? [1]-SI   [2]-NO\n");
        scanf("%i",&respuesta2);
    }
    while(respuesta2 != 2);



    printf("\n\n***FIN DEL PROGRAMA***\n");

    return 0;
}

void Ingreso()
{
    printf("***** BIENVENIDO *****\t\n");
    printf("\nINDIQUE SU USUARIO:\t\n");
}

void Menu()
{

    printf("\t[1]- INGRESAR DATOS DE UN MEDIDOR VERIFICADO\n");
    printf("\t[2]- TOTAL DE kwh REGISTRADOS\n");
    printf("\t[3]- TOTAL DE VIVIENDAS VERIFICADAS\n");
    printf("\t[4]- TOTAL DE DINERO RECAUDADO\n");

}

float Multiplicar (float num1, float num2)
{
    return num1*num2;
}
