#include <iostream>

int main() {
    int limit = 5;
    std::cout << "Стандартный for:\n";
    for (int i = 0; i < limit; ++i) {
        std::cout << i << " ";
        limit = 2; 
    }
    std::cout << "\n";

    limit = 5;
    std::cout << "С forc:\n";
    {
        int __i = 0;
        int __n = limit;
        for (const int &i = __i; i < __n; ++i) {
            std::cout << i << " ";
            limit = 2;
        }
    }
    std::cout << "\n";

    return 0;
}
