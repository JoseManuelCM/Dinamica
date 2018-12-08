#include <stdio.h>

typedef struct {
    int code;
    char description[80];
    //int cant;
    double precio;
} Producto;

Producto productos[10];
void llenar()
{
    productos[0].code = ;
    strcpy(productos[0].description,"\n");
    productos[0].precio = ;

    productos[0].code = ;
    strcpy(productos[0].description,"\n");
    productos[0].precio = ;

    productos[0].code = ;
    strcpy(productos[0].description,"\n");
    productos[0].precio = ;

    productos[0].code = ;
    strcpy(productos[0].description,"\n");
    productos[0].precio = ;

    productos[0].code = ;
    strcpy(productos[0].description,"\n");
    productos[0].precio = ;

    productos[0].code = ;
    strcpy(productos[0].description,"\n");
    productos[0].precio = ;

    productos[0].code = ;
    strcpy(productos[0].description,"\n");
    productos[0].precio = ;

    productos[0].code = ;
    strcpy(productos[0].description,"\n");
    productos[0].precio = ;

    productos[0].code = ;
    strcpy(productos[0].description,"\n");
    productos[0].precio = ;

    productos[0].code = ;
    strcpy(productos[0].description,"\n");
    productos[9].precio = ;
}
void main (void)
{
    for(int i = 0; i<10, ++i)
    {
        printf("Code: %d  Description: %s Precio %d", productos[i].code, productos[i].description, productos[i].precio);
    }
}