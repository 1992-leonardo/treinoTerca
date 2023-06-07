#include <iostream>

int main(){
    int idade = 18;
    std::cout << "Informe sua idade " << std::endl;

    if (idade == 18 ) 
    {
        std::cout << "Voce eh maior de idade" << std::endl;
    }
    else if (idade < 18 )
    {
        std::cout << "Voce eh menor de idade" << std::endl;
    }

}