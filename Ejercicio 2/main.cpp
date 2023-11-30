//Ejercicio 2: Contenedores Estándar y Secuencias Realiza un programa que utilice el contenedor estándar list para almacenar una secuencia de números decimales. Luego, crea un adaptador de secuencia stack para este contenedor. Muestra cómo funcionan las operaciones push, pop y top en esta pila.
#include <iostream>
#include <list>
#include <stack>

int main() {
    std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};

    // Utiliza auto para inferir el tipo de la pila
    std::stack<float, std::list<float>> pila(lista);

    // Muestra los elementos de la pila sin modificarla
    std::cout << "Contenido de la pila antes de operaciones:\n";
    std::stack<float, std::list<float>> copiaPila = pila;
    while (!copiaPila.empty()) {
        std::cout << copiaPila.top() << std::endl;
        copiaPila.pop();
    }

    // Realiza operaciones en la pila
    pila.push(6.6);
    pila.push(7.7);

    // Muestra el contenido de la pila después de las operaciones
    std::cout << "\nContenido de la pila despues de operaciones:\n";
    while (!pila.empty()) {
        std::cout << pila.top() << std::endl;
        pila.pop();
    }

    return 0;
}
