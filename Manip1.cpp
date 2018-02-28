#include <iostream>
#include <iomanip>
using namespace std;

ostream& hexZ(ostream& ostr) {
    return ostr << setfill('0') << hex << uppercase;
}

int main() {
    char buf[2];
    
    cin >> buf;
    
    ios::fmtflags flags = cout.flags();
    char fill = cout.fill();
    
    cout << hexZ;
    for(int w = 0, size = file.gcount(); w < size; ++w) {
        cout << setw(2) << (int)buf[w] << ' ';
    }
    cout << endl;
    
    cout << setiosflags(flags) << setfill(fill);
}
