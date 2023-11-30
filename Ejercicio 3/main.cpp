//Ejercicio 3: Algoritmos Crea un programa que tenga un vector de enteros. Luego, utiliza la función sort de la biblioteca de algoritmos para ordenar los elementos del vector. Además, utiliza la función max_element para encontrar el elemento más grande del vector.
#include <iostream>
#include <vector>
#include <algorithm>
int main(){
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};
    std::sort(numeros.begin(), numeros.end());

    for(int num : numeros) {
        std::cout << num << std::endl;
    }

    int maxNum = *std::max_element(numeros.begin(), numeros.end());
    std::cout << "Número máximo: " << maxNum << std::endl;

    return 0;

    return 0;
}