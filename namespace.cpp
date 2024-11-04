#include <iostream>

namespace LibA {
    void print() {
        std::cout << "Print z LibA" << std::endl;
    }
}

namespace LibB {
    void print() {
        std::cout << "Print z LibB" << std::endl;
    }
}

int main() {
    LibA::print();  // execution print() z LibA
    LibB::print();  // execution print() z LibB
    return 0;
}