#include <iostream>

namespace First {
    int number = 10;
}

namespace Second {
    int number = 20;
}

int main() {
    std::cout << First::number << std::endl;
    std::cout << Second::number << std::endl;
    return 0;
}
