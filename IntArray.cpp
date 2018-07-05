#include "IntArray.hpp"
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

IntArray::IntArray(int size){
    m_array = new int[size];
    m_size = size;

    fill_n(m_array, size, 0);

    cout << "コンストラクタが呼ばれました。要素数は " << size << " です。" << endl;
}

IntArray::IntArray(const IntArray& other) {
    m_array = new int[other.m_size];
    m_size  = other.m_size;

    copy(other.m_array, other.m_array + m_size, m_array);

    cout << "コピーコンストラクタが呼ばれました。" << endl;
}

IntArray::~IntArray() {
    delete[] m_array;
    cout << "デストラクタが呼ばれました。要素数は " << m_size << " でした。" << endl;
}

void IntArray::operator=(const IntArray& other) {
    int* array = new int[other.m_size];

    delete[] m_array;
    m_array = array;
    m_size = other.m_size;
    copy(other.m_array, other.m_array + m_size, m_array);
}

int IntArray::Get(int i) const {
    CheckIndex(i);
    return m_array[i];
}

void IntArray::Set(int i, int value) {
    CheckIndex(i);
    m_array[i] = value;
}

void IntArray::CheckIndex(int i) const {
    if(0 <= i && i < m_size) {
        // 正常なインデックス
    } else {
        cout << "不正なインデックスです。" << endl
             << "値 : " << i << endl;
        exit(EXIT_FAILURE);
    }
}

int IntArray::Size() const {
    return m_size;
}