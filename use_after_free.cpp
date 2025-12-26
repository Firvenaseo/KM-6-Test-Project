#include <iostream>

// Демонстрация use-after-free
int main() {
    int* p = new int(42);
    delete p;

    // Небезопасно: обращение к освобожденной памяти
    std::cout << "Value: " << *p << "\n";

    return 0;
}
