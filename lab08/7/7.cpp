#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    int num;
    while (std::cin >> num) {
        numbers.push_back(num);
    }
    bool found_negative = false;
    for (int n : numbers) {
        if (n < 0) {
            std::cout << "Найдено отрицательное число: " << n << "\n";
            found_negative = true;
            break;
        }
    }
    if (!found_negative) {
        std::cout << "Все числа неотрицательные\n";
    }
    return 0;
}
