#include "InputStream.hpp"
#include <iostream>
using namespace std;

// コンストラクタ
InputStream::InputStream() : Stream() {
    cout << "InputStream" << endl;
}

InputStream::~InputStream() {
    std::cout << "InputStreamのデストラクタが呼ばれました" << std::endl;
}

// 値を設定する基本関数
void InputStream::SetBase() {
    cin >> m_n;
}