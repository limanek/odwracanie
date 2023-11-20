#include <iostream> 
#include <string>
#include <algorithm>

int main() {
    std::string text;
    std::getline(std::cin, text);
    std::reverse(text.begin(),text.end());
    std::cout << "odwrucony test: " << text << std::endl;
}