#include <iostream>
using namespace std;

class Integer {
public:
    int m_value;

    Integer();
    void Show();
};

// �R���X�g���N�^
Integer::Integer() {
   m_value = 0;
}

// �����o�ϐ��̕\��
void Integer::Show() {
    cout << m_value << endl;
}

int main() {
    Integer a, b, c;

    a.Show();
    b.Show();
    c.Show();
}