#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Biblioteca.h>

    void CargarLista ()
    {
        int
        for(i=0; i<3; i++)
        {
            printf("Codigo: ");
            scanf("%d", &listamedicamentos[i].codigo);

            printf("Nombre: ");
            fflush(stdin);
            gets(listamedicamentos[i].nombre);

            printf("Precio: ");
            scanf("%f", &listamedicamentos[i].precio);

            printf("Laboratorio: ");
            fflush(stdin);
            gets(listamedicamentos[i].laboratorio);
        }

    }



    void MostrarLista()
    {
        int i;
        for(i=0; i<3; i++)
        {
            printf("\nCodigo: %d \nNombre: %s \nPrecio: %.2f \nLaboratorio: %s", listamedicamentos[i].codigo, listamedicamentos[i].nombre, listamedicamentos[i].precio, listamedicamentos[i].laboratorio);
        }
    }
