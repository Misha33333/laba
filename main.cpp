#include <iostream>
#include "std.h"


/*��������� �������� �������*/
int main() {
    int num1, num2;

    std::cout << "Chisla cherez probel: ";
    std::cin >> num1 >> num2;

    int razn = num1 - num2;
    int sum = num1 + num2;
    std::cout << "1 chislo: " << num1 << std::endl;
    std::cout << "2 chislo: " << num2 << std::endl;
    std::cout << "Razn: " << razn << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
