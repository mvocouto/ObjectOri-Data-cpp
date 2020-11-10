#include <iostream>

int main() {

    int num = 7;
    // - Declaracao padrao utilizada acima, porem sem acesso a localizacao
    // da memoria referente a variavel.
    std::cout << "Valor da variavel: " << num << std::endl;
    std::cout << "Endereco da variavel: " << &num << std::endl;
    // - O endereco sera apresentado em hexadecimal.
    
    return 0;
}