#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class IntArray {
public:
    // コンストラクタ デストラクタ
    IntArray(int size);
    ~IntArray();

public:
    // メンバへのアクセス関数
    int Get(int i);
    void Set(int i, int value);

private:
    // インデックスのチェック
    void CheckIndex(int i);

private:
    int* m_array;
    int m_size;
};

// コンストラクタ
IntArray::IntArray(int size) {
    m_array = new int[size];
    m_size = size;
    fill_n(m_array, m_size, 0);

    cout << "コンストラクタが呼ばれました。"
         << "要素数は " << m_size << " です。" << endl;
}

// デストラクタ
IntArray::~IntArray() {
    delete[] m_array;

    cout << "デストラクタが呼ばれました。"
         << "要素数は " << m_size << " でした。" << endl;
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
    if(0 <= i && i <= m_size) {
        // インデックスは正常
    } else {
        cout << "インデックスが不正です！" << endl
             << "値 : " << i << endl;
        exit(EXIT_FAILURE);
    }
}

void Viss(int num) {
    cout << "Viss : No." << num << endl;
}

IntArray a(10);

int main() {
    Viss(1);

    IntArray b(20);
    Viss(2);

    IntArray c(30);
    Viss(3);

    {
        IntArray d(40);
        Viss(4);
    }
    Viss(5);
}