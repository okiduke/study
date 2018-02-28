#include "IntArray.h"
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

// コンストラクタ
IntArray::IntArray(int size) {
    m_array = new int[size];
    m_size = size;

    cout << "コンストラクタが呼ばれました。" << "要素数は " << m_size << " です。" << endl;
}

// コピーコンストラクタ
IntArray::IntArray(const IntArray& other) {
    m_array = new int[other.m_size];
    m_size = other.m_size;

    // copyはメモリの内容をコピーする関数のようなもの
    // copy(other.m_array, other.m_array + m_size, m_array);

    cout << "コピーコンストラクタが呼ばれました。" << endl;
}

// 代入演算子のオーバーロード
void IntArray::operator = (const IntArray& other) {
    int* array = new int[other.m_size];

    delete[] m_array;
    m_array = array;
    m_size = other.m_size;
    copy(other.m_array, other.m_array + m_size, m_array);
}

// デストラクタ
IntArray::~IntArray() {
    delete[] m_array;

    cout << "デストラクタが呼ばれました。" << "要素数は " << m_size << " でした。" << endl;
}

// メンバへのアクセス関数
int IntArray::Get(int i) {
    CheckIndex(i);
    return m_array[i];
}

void IntArray::Set(int i, int value) {
    CheckIndex(i);
    m_array[i] = value;
}

// インデックスのチェック
void IntArray::CheckIndex(int i) {
    if (0 <= i && i < m_size) {
        // インデックスは正常です
    }
    else {
        cout << "インデックスが不正です！" << endl
            << "値 : " << i << endl;
        exit(EXIT_FAILURE);
    }
}

int IntArray::Size() {
    return m_size;
}
