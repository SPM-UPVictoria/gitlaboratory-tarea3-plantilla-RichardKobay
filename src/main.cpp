#include <iostream>

int suma(int a, int b);

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << "La suma es: " << suma(a, b) << std::endl;
    return 0;
}

int suma(int a, int b) {
    return a + b;
}
