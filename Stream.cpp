#include "Stream.hpp"
#include <iostream>
using namespace std;

// コンストラクタ
Stream::Stream(double n) {
    m_n = n;
}

// 設定された値を取得
double Stream::Get() const {
    return m_n;
}

// 値を設定
bool Stream::Set() {
    SetBase();
    return m_n >= 0;
}
