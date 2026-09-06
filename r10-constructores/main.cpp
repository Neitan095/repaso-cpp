#include <iostream>
#include <string>

class Sesion {
private:
    std::string nombre;

public:
    Sesion() : nombre("d") {
        std::cout << "Constructor " << nombre << "\n";
    }

    Sesion(const std::string& nombre) : nombre(nombre) {
        std::cout << "Constructor " << nombre << "\n";
    }

    Sesion(const std::string& nombre, int) : nombre(nombre) {
        std::cout << "Constructor " << nombre << "\n";
    }

    ~Sesion() {
        std::cout << "Destructor " << nombre << "\n";
    }
};

Sesion global("global");

int main() {
    Sesion a("a");

    {
        Sesion b("b");
        Sesion c("c", 2);
    }

    std::cout << "--- medio ---\n";

    Sesion d;
}
