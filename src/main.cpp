#include <iostream>

using namespace std;

int main(void)
{
    char buf[100];
    
    FILE *fd;
  
    cout << "=======================INICIO DEL PROGRAMA===================================" << endl;
    fd = fopen("textito.txt", "r+t");
    fread(buf, 100,1, fd);
    printf("%s",buf); 
    fclose(fd);
    cout << "=======================FIN DEL PROGRAMA===================================" << endl;
}
