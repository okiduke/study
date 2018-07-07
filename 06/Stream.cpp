#include "Stream.hpp"
#include <iostream>
using namespace std;

Stream::Stream(double n) : m_n(n) {
    cout << "Stream" << endl;
}

// 設定された値を取得
double Stream::Get() const {
    return m_n;
}

bool Stream::Set() {
    SetBase();
    return m_n >= 0;
}