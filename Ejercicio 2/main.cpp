//Ejercicio 2: Contenedores Estándar y Secuencias Realiza un programa que utilice el contenedor estándar list para almacenar una secuencia de números decimales. Luego, crea un adaptador de secuencia stack para este contenedor. Muestra cómo funcionan las operaciones push, pop y top en esta pila.
#include<iostream>
#include<list>
#include<stack>
using namespace std;
int main(){
    list<float> lista = {1.1,2.2,3.3,4.4,5.5};
    stack<float,list<float>> pila(lista);
    pila.push(6.6);
    pila.push(7.7);
    while(!pila.empty()){
        cout<<pila.top()<<endl;
        pila.pop();
    }


    return 0;
};