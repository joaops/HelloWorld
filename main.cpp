#include <iostream>

using namespace std;

int main() {
    string hello = "Hello World!";
    cout << hello << endl;
    // mostro o endereço de memória da string
    cout << "Pointer Address: " << &hello << endl;
    // o tamanho do ponteiro varia de acordo com a arquitetura do computador, x86 ou x64
    cout << "Pointer sizeof(): " << sizeof(&hello) << endl;
    // Como é um projeto Cross-Platform, eu uso o getchar() para pausar o programa.
    // Não posso usar system("pause"), pois o comando pause não funciona no Linux.
    getchar();
    return 0;
}
