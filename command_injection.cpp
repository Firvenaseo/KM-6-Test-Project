#include <cstdlib>
#include <iostream>
#include <string>

// Демонстрация командной инъекции через system()
int main() {
    std::string userArg;
    std::cout << "Enter file name to list: ";
    std::getline(std::cin, userArg);

    // Небезопасно: пользователь может подставить "; rm -rf ..." и т.п.
    std::string cmd = "ls " + userArg;

    int rc = std::system(cmd.c_str());
    std::cout << "system() returned: " << rc << "\n";
    return 0;
}
