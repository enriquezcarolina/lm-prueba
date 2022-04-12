#include <iostream>

using namespace std;
int32_t Sumar_Array (int16_t* x, int16_t xn);
int main(void)
{
    char buf[100];
    
    FILE *fd;
  
    cout << "=======================INICIO DEL PROGRAMA===================================" << endl;
    fd = fopen("textito.txt", "r+t");
    fread(buf, 100,1, fd);
    printf("%s",buf); 
    fclose(fd);
    cout << "\n=======================PRUEBA EJERCICIO 1===================================" << endl;
    int16_t *x= new int16_t[3];
    x[0]=1;
    x[1]=2;
    x[2]=3;
    int16_t xn=3; 
    int32_t resul = Sumar_Array (x,xn);
    cout << "Resultado es= " << resul << endl;

    /*Guardar la función anterior en un archivo llamado “matematica.c”. Generar su
    correspondiente header. Realizar una rutina de prueba con diferentes valores en un programa*/
    

    cout << "=======================FIN DEL PROGRAMA===================================" << endl;

   

}

/* Realizar una función que me permita realizar la sumatoria de un array de enteros con signo
de 16 bits y devuelva un entero de 32 bits. Debe recibir la dirección del array a sumar y su
largo.*/

int32_t Sumar_Array (int16_t* x, int16_t xn)
{
    int32_t Resul=0;
     int i;
for (i=0;i<xn;i++)
{
  Resul=Resul+ x[i];
}
    return(Resul);
}