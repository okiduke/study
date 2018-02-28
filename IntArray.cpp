#include "IntArray.h"
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

// �R���X�g���N�^
IntArray::IntArray(int size) {
    m_array = new int[size];
    m_size = size;

    cout << "�R���X�g���N�^���Ă΂�܂����B" << "�v�f���� " << m_size << " �ł��B" << endl;
}

// �R�s�[�R���X�g���N�^
IntArray::IntArray(const IntArray& other) {
    m_array = new int[other.m_size];
    m_size = other.m_size;

    // copy�̓������̓��e���R�s�[����֐��̂悤�Ȃ���
    // copy(other.m_array, other.m_array + m_size, m_array);

    cout << "�R�s�[�R���X�g���N�^���Ă΂�܂����B" << endl;
}

// ������Z�q�̃I�[�o�[���[�h
void IntArray::operator = (const IntArray& other) {
    int* array = new int[other.m_size];

    delete[] m_array;
    m_array = array;
    m_size = other.m_size;
    copy(other.m_array, other.m_array + m_size, m_array);
}

// �f�X�g���N�^
IntArray::~IntArray() {
    delete[] m_array;

    cout << "�f�X�g���N�^���Ă΂�܂����B" << "�v�f���� " << m_size << " �ł����B" << endl;
}

// �����o�ւ̃A�N�Z�X�֐�
int IntArray::Get(int i) {
    CheckIndex(i);
    return m_array[i];
}

void IntArray::Set(int i, int value) {
    CheckIndex(i);
    m_array[i] = value;
}

// �C���f�b�N�X�̃`�F�b�N
void IntArray::CheckIndex(int i) {
    if (0 <= i && i < m_size) {
        // �C���f�b�N�X�͐���ł�
    }
    else {
        cout << "�C���f�b�N�X���s���ł��I" << endl
            << "�l : " << i << endl;
        exit(EXIT_FAILURE);
    }
}

int IntArray::Size() {
    return m_size;
}
