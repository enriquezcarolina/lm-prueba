#include <iostream>
#include "matematica.c"
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
    cout << "\nResultado es= " << resul << endl;

    /*Guardar la función anterior en un archivo llamado “matematica.c”. Generar su
    correspondiente header. Realizar una rutina de prueba con diferentes valores en un programa*/
    cout << "\n=======================PRUEBA EJERCICIO 3===================================" << endl;
    
    cout << "\nResultado es= " << Multiplicar_Sat (33000, 2) << endl;
    cout << "\nResultado es= " << Multiplicar_Sat (2, 2) << endl;
    cout << "\nResultado es= " << Multiplicar_Sat (33000, 1) << endl;

    cout << "\n=======================PRUEBA EJERCICIO 4===================================" << endl;
    
    cout << "\nResultado es= " << Multiplicar_Sat (33000, 2) << endl;
    cout << "\nResultado es= " << Multiplicar_Sat (2, 2) << endl;
    cout << "\nResultado es= " << Multiplicar_Sat (33000, 1) << endl;


    cout << "\n=======================PRUEBA EJERCICIO 5===================================" << endl;

     cout << "\nResultado es= " << Multiplicar_inline (33000, 2) << endl;
    cout << "\nResultado es= " << Multiplicar_inline (2, 2) << endl;
    cout << "\nResultado es= " << Multiplicar_inline (33000, 1) << endl;


    cout << "=======================FIN DEL PROGRAMA===================================" << endl;

   

}



