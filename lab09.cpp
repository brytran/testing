#include <iostream>
#include<iomanip>



struct MathVector {
    int x;
    int y;
    int z;

    MathVector();
    MathVector(int a, int b, int c);
}

MathVector::MathVector() {
    int x = 0;
    int y = 0;
}

MathVector::MathVector(int a, int b) {
    x = a;
    y = b;
}



int main() {

}