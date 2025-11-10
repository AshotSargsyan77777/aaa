#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
private:
    int data[3][3];

public:
    Matrix();           
    void input();       
    void print() const; 
};

#endif
