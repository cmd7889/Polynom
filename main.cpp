#include <iostream>
#include <vector>

#include "polynomial.h"

enum { val = Polynomial<2, 0, 3>().polynomialValue(5) };

int main() {
    Polynomial<1, 2, 3, 4, 5> poly1;
    Polynomial<5, 1, 2> poly2;
    Polynomial<2, 0, 3> poly3;

    std::array<int, Polynomial<2, 0, 3>().polynomialValue(1)> arr;
    std::cout << arr.size() << std::endl;

    std::cout << poly1 << std::endl;
    std::cout << "polynomialValue:" << poly1.polynomialValue(3) << std::endl;


    std::cout << poly2 << std::endl;
    std::cout << "polynomialValue:" << poly2.polynomialValue(1) << std::endl;

    std::cout << poly3 << std::endl;
    std::cout << "polynomialValue:" << poly3.polynomialValue(1) << std::endl;

    return 0;
}
