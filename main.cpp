#include <iostream>
#include "functions.h"

int main(){
	int num;
    print_hello();
	std::cout << "insert factorial num\n";
	std::cin >> num;
    std::cout << "The factorial of " << num << " is " << factorial(num);
    return 0;
}
