#ifndef ARREGLO_H
#define ARREGLO_H

class Arreglo {
private:
    int* datos;
    int n;

public:
    Arreglo(int tam);
    ~Arreglo();

    void set(int i, int v);
    int get(int i) const;
    int tam() const;

    Arreglo(const Arreglo& otro);
    Arreglo& operator=(const Arreglo& otro);
};

#endif
