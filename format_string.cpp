#include <cstdio>

// Демонстрация уязвимости format string
int main() {
    const char* userControlled = "%x %x %x %x"; // как будто пришло от пользователя

    // Небезопасно: userControlled используется как форматная строка
    std::printf(userControlled);
    std::printf("\n");

    return 0;
}
