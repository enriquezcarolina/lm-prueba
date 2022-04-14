#include <iostream>

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

/*Agregar al archivo anterior una función que me permita realizar la multiplicación de dos
enteros de 16 bits con signo saturando el resultado a 16 bits. La función recibe los dos números
a multiplicar y devuelve el resultado de la multiplicación saturado. 
Guardar los valores máximos y mínimos a saturar en dos constantes llamadas SAT16_MAX y
SAT16_MIN.*/



int16_t Multiplicar_Sat (int16_t n1, int16_t n2)
{
    int16_t Resultado=n1*n2;
    unsigned long int SAT16_MAX=n1*n2;
    signed long int SAT16_MIN=n1*n2;
    return(Resultado);
}

/*Agregar una versión inline de la función del punto 3 a la librería “matematica”. Chequear con
el compilador que la función efectivamente sea inline*/


inline int16_t Multiplicar_inline (int16_t op1, int16_t op2) 
{
 int32_t result=op1*op2;

 return(result);
}


/*Ejercicio 5: Agregar una función que devuelva un entero sin signo de 16 bits que me permita contar la
cantidad de veces que fue llamada la misma. 

Comprobar el lugar de memoria que ocupan cada una de las variables creadas en el mapa general. 

Realizar una rutina en el programa principal que me permita comprobar su funcionamiento
guardando los valores en una variable global. Comprobar la dirección donde se guarda dicha
variable.*/


static uint16_t Contar_llamados=0;
uint16_t Cuenta_Accesos (void)
{
     
    
    Contar_llamados++;
    return Contar_llamados;
   
}
