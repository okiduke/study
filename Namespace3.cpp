#include <iostream>
using namespace std;

namespace MyProgram {
    void Show() {
        cout << "やあ、こんにちは。" << endl;
    }
    
    void Run() {
        Show();
    }
}

int main() {
    MyProgram::Run();
}
