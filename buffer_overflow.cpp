#include <cstring>
#include <iostream>

// Демонстрация переполнения буфера через strcpy
int main() {
    char buf[8];
    const char* userInput = "This string is too long for buf";

    // Небезопасно: не проверяет длину
    std::strcpy(buf, userInput);

    std::cout << "buf = " << buf << "\n";
    return 0;
}
