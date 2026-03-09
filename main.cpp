#include <iostream>
#include <string>

int main(int, char**){
    std::cout << "Hello, from GitTest!\n";

    std::string name;
    std::cout << "Please enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "!\n";
}
