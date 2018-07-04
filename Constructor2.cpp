#include <iostream>
using namespace std;

class Integer {
public:
    int m_value;

    Integer(int num = 0);
    void Show();
};

// コンストラクタ
Integer::Integer(int num) {
    m_value = num;
}

// メンバ変数の表示
void Integer::Show() {
    cout << m_value << endl;
}

int main() {
    Integer array[4] = {
        Integer(),
        Integer(3),
        Integer(9),
    };

    int size = sizeof array / sizeof *array;
    for(int i = 0; i < size; ++i) {
        array[i].Show();
    }
}