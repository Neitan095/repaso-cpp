#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>

int main() {
    std::vector<std::string> palabras = {
        "hola", "mundo", "hola", "casa", "mundo", "hola"
    };

    // 1. Con vector
    std::vector<std::pair<std::string, int>> frecuenciaVector;

    for (const auto& palabra : palabras) {
        bool encontrada = false;

        for (auto& f : frecuenciaVector) {
            if (f.first == palabra) {
                f.second++;
                encontrada = true;
                break;
            }
        }

        if (!encontrada) {
            frecuenciaVector.push_back({palabra, 1});
        }
    }

    std::cout << "Con vector:\n";
    for (const auto& f : frecuenciaVector) {
        std::cout << f.first << ": " << f.second << "\n";
    }

    // 2. Con map
    std::map<std::string, int> frecuenciaMap;

    for (const auto& palabra : palabras) {
        frecuenciaMap[palabra]++;
    }

    std::cout << "\nCon map:\n";
    for (const auto& f : frecuenciaMap) {
        std::cout << f.first << ": " << f.second << "\n";
    }

    // 3. Con set
    std::set<std::string> palabrasUnicas;

    for (const auto& palabra : palabras) {
        palabrasUnicas.insert(palabra);
    }

    std::cout << "\nCon set (palabras unicas):\n";
    for (const auto& palabra : palabrasUnicas) {
        std::cout << palabra << "\n";
    }

    return 0;
}
