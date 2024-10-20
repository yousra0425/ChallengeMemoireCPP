#include <iostream>

template<typename... Args>
void test_params(Args... args) {
    (void(sizeof...(args)));
}

int main() {
    int max_params = 1; // Utilisation de long long pour des valeurs plus grandes
    try {
        while (true) {
            // Incr�mentation par 100,000 jusqu'� 1,000,000,000, puis 50,000
            if (max_params < 1200000000) {
                max_params += 100000000;
            } else {
                max_params += 10000000;
            }
            std::cout << max_params << "\n";
            test_params(std::string(max_params, 'a')); // Augmenter le nombre de param�tres
        }
    } catch (...) {
        std::cout << "Erreur apr�s " << max_params << " param�tres." << std::endl;
    }
    return 0;
}
