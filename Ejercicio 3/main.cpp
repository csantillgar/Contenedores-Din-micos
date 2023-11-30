//Ejercicio 3: Algoritmos Crea un programa que tenga un vector de enteros. Luego, utiliza la función sort de la biblioteca de algoritmos para ordenar los elementos del vector. Además, utiliza la función max_element para encontrar el elemento más grande del vector.
#include <iostream>
#include <vector>
#include <algorithm>
int main(){
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};
    std::sort(numeros.begin(), numeros.end());

    std::cout << "Elementos del vector ordenados:\n";
    for(int num : numeros) {
        std::cout << num << std::endl;
    }
    auto maxElement = std::max_element(numeros.begin(), numeros.end());
    if (maxElement != numeros.end()) {
        std::cout << "Numero maximo: " << *maxElement << std::endl;
    } else {
        std::cout << "El vector esta vacío." << std::endl;
    }

    return 0;
}