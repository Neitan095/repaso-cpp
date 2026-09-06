#ifndef ARREGLO_H
#define ARREGLO_H

class Arreglo {
public:
    Arreglo(int n);
    ~Arreglo();

    Arreglo(const Arreglo& otro);
    Arreglo& operator=(const Arreglo& otro);
};

#endif
