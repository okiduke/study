#include <iostream>
#include <cstdlib>
using namespace std;

bool SkipOnError(istream& istr){
    if(istr.fail()) {
        if(istr.eof()) {
            exit(EXIT_FAILURE);
        }
        
        // 1 文字読み飛ばします
        char ch;
        istr.clear();
        istr >> ch;
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    
    do {
        cin >> n;
    } while(SkipOnError(cin));
    
    cout << "入力された値は " << n << " です。" << endl;
}
