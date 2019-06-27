//
//  main.cpp
//  TrabajoPracticoUno
//
//  Created by Tomi on 27/06/2019.
//  Copyright © 2019 Tomi. All rights reserved.
//

#include <iostream>

int sumaDeTresNumeros (int i, int j, int k) {
    
    return i + j + k;
}

int multiplicacionDeDosNumeros (int i, int j) {
    return i * j;
}

int funcionFinal (int a, int b) {
    //(a * b + b * 5 + 2) * (a + b + 1)
    int primerParentesis = sumaDeTresNumeros(multiplicacionDeDosNumeros(a, b), multiplicacionDeDosNumeros(b, 5), 2);
    int segundoParentesis = sumaDeTresNumeros(a, b, 1);
    return multiplicacionDeDosNumeros(primerParentesis, segundoParentesis);
}

int main(int argc, const char * argv[]) {
    std::string a;
    std::string b;
    int resultado;
    std::cout << "Elige tu primer variable: ";
    getline (std::cin, a);
    std::cout << "Ahora tu segunda variable: ";
    getline (std::cin, b);
    resultado = funcionFinal(std::stoi(a), std::stoi(b));
    std::cout << "Perfecto! tu resultado fue ";
    std::cout << resultado << std::endl;
    return 0;
}



