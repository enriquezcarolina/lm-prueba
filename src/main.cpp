#include <iostream>

using namespace std;

int main(void)
{

    cout << "hola" << endl;
    cout << "=======================INICIO DEL PROGRAMA===================================" << endl;
    fd = fopen(“textito.txt”, “r”);
    fread(puf, tam, fd);
    fclose(fd);

}
