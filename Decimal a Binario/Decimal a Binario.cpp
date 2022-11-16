// Decimal a Binario.cpp 
//Juan Fernando Aispuro

#include <iostream>
#include <stdlib.h>

int main()
{
    int num_decimal;
    int num_binario[8] = {};
    std::cout << "--------------CONVERTIDOR DECIMAL A BINARIO--------------\n";
    std::cout << "\nDigite el Numero Decimal a convertir: ";
    std::cin >> num_decimal; std::cout << std::endl;

    for (int i = 0; i < 8; i++)
    {
        num_binario[i] = num_decimal % 2;
        num_decimal /= 2;
    }
    std::cout << "El Numero Binario es: ";
    for (int i = 7; i >= 0; i--)
    {
        std::cout << num_binario[i];
    }
    std::cout << "\n\n";

    system("pause");
    return 0;
}


