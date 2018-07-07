#include "ArrayStream.hpp"
#include <iostream>

ArrayStream::ArrayStream(const double* array) {
    std::cout << "ArrayStreamのコンストラクタが呼ばれました" << std::endl;
    m_array = array;
    m_i = 0;
}

ArrayStream::~ArrayStream() {
    std::cout << "ArrayStreamのデストラクタが呼ばれました" << std::endl;
}

// 新しい値を設定
bool ArrayStream::Set() {
    m_n = m_array[m_i];
    if(m_n >= 0) {
        ++m_i;
        return true;
    } else {
        return false;
    }
}