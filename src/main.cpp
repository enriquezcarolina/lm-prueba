#include <iostream>

using namespace std;

int main(void)
{

  
    cout << "=======================INICIO DEL PROGRAMA===================================" << endl;
    fd = fopen(“textito.txt”, “r”);
    fread(puf, tam, fd);
    fclose(fd);
    cout << "=======================FIN DEL PROGRAMA===================================" << endl;
}
