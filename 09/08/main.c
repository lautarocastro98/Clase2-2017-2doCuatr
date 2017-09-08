#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Biblioteca.h>

typedef struct
{
    int codigo;
    char nombre[50];
    float precio;
    char laboratorio[30];

}eMedicamento;


int main()
{
   // eMedicamento medicamento1;
    /*
    medicamento1.codigo = 701;
    medicamento1.precio = 105.40;
    strcpy(medicamento1.nombre, "Amoxicilina");
    strcpy(medicamento1.laboratorio, "Bago");
    printf("%d--%.2f--%s--%s", medicamento1.codigo, medicamento1.precio, medicamento1.nombre, medicamento1.laboratorio);
    */

    //eMedicamento medicamento2;
    /*
    medicamento2.codigo = 705;
    medicamento2.precio = 15.00;
    strcpy(medicamento2.nombre, "Aspirineta");
    strcpy(medicamento2.laboratorio, "Bayer");
    printf("\n\n%d--%.2f--%s--%s", medicamento2.codigo, medicamento2.precio, medicamento2.nombre, medicamento2.laboratorio);

    */
    /*
    eMedicamento medicamento2;

    medicamento2.codigo = 705;
    medicamento2.precio = 15.00;
    strcpy(medicamento2.nombre, "Aspirineta");
    strcpy(medicamento2.laboratorio, "Bayer");

    medicamento2.codigo = medicamento1.codigo;
    medicamento2.precio = medicamento1.precio;
    strcpy(medicamento1.nombre, medicamento2.nombre);
    strcpy(medicamento1.laboratorio, medicamento2.laboratorio);
    */

    //medicamento1 = medicamento2;

    eMedicamento listamedicamentos[3];


    return 0;
}
