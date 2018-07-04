#include <iostream>
#include <cstdlib> // exit関数に必要
using namespace std;

const int INTARRAY_SIZE = 100;

class IntArray {
private:
    int* m_array; // 動的配列
    int  m_size;  // 配列の要素数

public:
    IntArray(int size);                 // コンストラクタ
    ~IntArray();
    int Get(int i);             // メンバへのアクセス関数(取得)
    void Set(int i, int value); // メンバへのアクセス関数(変更)

private:
    void CheckIndex(int i);     // インデックスのチェック
};

// コンストラクタ
IntArray::IntArray(int size) {
    m_array = new int[size];
    m_size = size;

    fill_n(m_array, m_size, 0);
}

// デストラクタ
IntArray::~IntArray() {
    delete[] m_array;
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

void IntArray::CheckIndex(int i) {
    if(0 <= i && i < m_size) {
        // インデックスは正常です
    } else {
        cout << "インデックスが不正です！" << endl
             << "値 : " << i << endl;
        exit(EXIT_FAILURE);
    }
}

int main() {
    IntArray a(100);

    cout << a.Get(0) << endl;
    a.Set(0, 1);
    cout << a.Get(0) << endl;
    a.Set(100,1);
}