#ifndef POLYNOMIAL_POLYNOMIAL_H
#define POLYNOMIAL_POLYNOMIAL_H

#include <array>
#include <iostream>
#include <string>

template<int... Coefs>
class Polynomial {

private:
    static constexpr std::array<int, sizeof...(Coefs)> _as = {Coefs...};

public:

    friend std::ostream &operator<<(std::ostream &os, const Polynomial &poly) {
        std::string s = "";
        int n = poly._as.size();
        std::string k = "";

        for (int i = 0; i < n; i++) {
            k = std::to_string(poly._as[i]) + '*';
            s = s + k + "X^" + std::to_string(n - 1 - i);
            if (i < n - 1) s = s + " + ";
        }
        return os << s;
    };

    static constexpr int polynomialValue(int x) {
        //  Horner's method from https://en.wikipedia.org/wiki/Horner%27s_method
        float result = 0;
        for (int i = 0; i < _as.size(); i++) {
            result = result * x + _as[i];
        }
        return result;
    };
};

#endif //POLYNOMIAL_POLYNOMIAL_H
