#ifndef INTARRAY_H_20170412
#define INTARRAY_H_20170412

class IntArray {
public:
    // �R���X�g���N�^�A�R�s�[�R���X�g���N�g�A�f�X�g���N�^
    IntArray(int size);
    IntArray(const IntArray& other);
    ~IntArray();

public:
    // ������Z�q�̃I�[�o�[���[�h
    void operator = (const IntArray& other);

public:
    // �����o�ւ̃A�N�Z�X�֐�
    int Get(int i);
    void Set(int i, int value);

private:
    // �C���f�b�N�X�̃`�F�b�N
    void CheckIndex(int i);

public:
    // �z��̃T�C�Y��Ԃ�
    int Size();

private:
    int* m_array;
    int m_size;
};

#endif // #ifndef INTARRAY_H_20170412