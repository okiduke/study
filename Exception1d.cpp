#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    const char* error = NULL;
    ifstream file;
    string line;
    
    file.open("test.txt");
    if(! file.is_open()) {
        error = "ファイルを開けませんでした！";
        goto ON_ERROR;
    }
    
    getline(file, line);
    if(file.fail()) {
        error = "ファイルから読み込めませんでした！";
        goto ON_ERROR;
    }
    
    cout << line << endl;
    
    return EXIT_SUCCESS;
    
ON_ERROR:
    cerr << error << endl;
    return EXIT_FAILURE;
}
