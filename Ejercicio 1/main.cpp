//Crea un programa que añada elementos a un vector de enteros mediante el uso del método push_back. Luego, utiliza un iterador para recorrer y mostrar cada elemento del vector.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numeros = {10, 20, 30, 40, 50};

    for(vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}