#include <iostream>
#include "matrix.h"

Matrix::Matrix() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            data[i][j] = 0;
        }
    }
}

void Matrix::input() {
    std::cout << "grir matrici elementnery";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> data[i][j];
        }
    }
}

void Matrix::print() const {
    std::cout << "\nMatric:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
