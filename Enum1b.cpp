#include <iostream>
using namespace std;

enum CompareResult {
    CR_LESS_THAN    = 0, // より小さい
    CR_EQUAL_TO     = 1, //等しい
    CR_GREATER_THAN = 2  //より大きい
};

CompareResult Compare(int a, int b) {
    return
    a < b ? CR_LESS_THAN :
    a > b ? CR_GREATER_THAN :
            CR_EQUAL_TO;
}

bool Compare() {
    const char* message[] = {
        "前者は後者より小さいです。",
        "両者は等しいです。",
        "前者は後者より大きいです。"
    };
    
    int a, b;
    
    cout << "数字を 2 つ入力してください > " << flush;
    cin >> a >> b;
    
    if(a == -1) {
        return false;
    }
    
    cout << message[Compare(a, b)] << endl;
    
    return true;
}

int main() {
    while(Compare()) {
        // 何もしない
    }
}
