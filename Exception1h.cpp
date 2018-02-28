//
//  Exception1h.cpp
//  Test
//
//  Created by 佐々木泰貴 on 2017/05/21.
//  Copyright © 2017年 佐々木泰貴. All rights reserved.
//

#include "FileException.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

// ファイルを開く
// 開かなければ FileException 例外を投げる
void Open(ifstream& file, const char* filename) {
    file.open(filename);
    if(! file.is_open()) {
        throw FileException("ファイルを開けませんでした！");
    }
}

// ファイルから一行取得する
// 取得できなければ FileException 例外を投げる
void GetLine(ifstream& file, string& line) {
    getline(file, line);
    if(file.fail()) {
        FileException e("ファイルから読み込めませんでした！");
        throw e;
    }
}

int main() {
    try {
        ifstream file;
        Open(file, "test.txt");
        
        string line;
        GetLine(file, line);
        cout << line << endl;
    } catch (const FileException& e) {
        cerr << e.What() << endl;
        return EXIT_FAILURE;
    }
}
