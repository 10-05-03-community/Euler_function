#include <iostream>

// наибольший общий делитель
int GCD(int a, int b) {
    if (a * b == 0) {
        return a + b;
    } else {
        return GCD(b, a % b);
    }
}


// вовзращает количество взаимнопростых с натуральным n чисел от 1 до n - 1
unsigned Euler_function(unsigned n) {
    if (n < 1) {
        return 0;
    }

    unsigned res = 1; // учли единицу
    for (unsigned i = 2; i < n; ++i) {
        if (GCD(n, i) == 1) {
            ++res;
        }
    }
    return res;
}

int main() {
    std::cout << Euler_function(10) << std::endl;
    return 0;
}
