#include "IntArray.h"
#include <iostream>
using namespace std;

void Viss(int num) {
    cout << "Viss : No." << num << endl;
}

IntArray a(10);

int main() {
    Viss(1);

    IntArray b(20);
    Viss(2);

    IntArray c(30);
    Viss(3);
    {
        IntArray d(40);
        Viss(4);
    }
    Viss(5);
}