


int32_t Sumar_Array (int16_t* x, int16_t xn);
int16_t Multiplicar_Sat (int16_t n1, int16_t n2);


/*Agregar una versión inline de la función del punto 3 a la librería “matematica”. Chequear con
el compilador que la función efectivamente sea inline*/


inline int16_t Multiplicar_inline (int16_t op1, int16_t op2) 
{
 int32_t result=op1*op2;

 return(result);
}