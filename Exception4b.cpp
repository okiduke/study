#include <iostream>
using namespace std;

void Error() {
    int* p = NULL;
    
    try {
        p = new int[10];
        throw "エラー発生";
        delete[] p;
    } catch(...) {
        cerr << "メモリを解放します" << endl;
        delete[] p;
        throw;
    }
}

int main() {
    try {
        Error();
    } catch(const char* error) {
        cerr << error << endl;
    }
}
