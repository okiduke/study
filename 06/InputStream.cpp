#include "InputStream.hpp"
#include <iostream>
using namespace std;

// コンストラクタ
InputStream::InputStream() {
    // 何もしない
}

InputStream::~InputStream() {
    // 何もしない
}

// 入力関数
bool InputStream::Set() {
    cin >> m_n;
    return m_n >= 0;
}