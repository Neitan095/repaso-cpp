#include "arreglo.h"
#include <iostream>

Arreglo::Arreglo(int tam) : datos(new int[tam]), n(tam) {
    std::cout << "Constructor: " << datos << "\n";
}

Arreglo::~Arreglo() {
    std::cout << "Destructor: " << datos << "\n";
    delete[] datos;
}

void Arreglo::set(int i, int v) {
    datos[i] = v;
}

int Arreglo::get(int i) const {
    return datos[i];
}

int Arreglo::tam() const {
    return n;
}

Arreglo::Arreglo(const Arreglo& otro)
    : datos(new int[otro.n]), n(otro.n) {

    for (int i = 0; i < n; ++i) {
        datos[i] = otro.datos[i];
    }

    std::cout << "Copia: " << datos << "\n";
}

Arreglo& Arreglo::operator=(const Arreglo& otro) {
    if (this == &otro) {
        return *this;
    }

    delete[] datos;

    n = otro.n;
    datos = new int[n];

    for (int i = 0; i < n; ++i) {
        datos[i] = otro.datos[i];
    }

    return *this;
}
