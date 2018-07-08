#include "ArrayStream.hpp"
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

ArrayStream::ArrayStream(const double* array, int size) {
    std::cout << "ArrayStream" << std::endl;
    m_array = new double[size];
    copy(array, array + size, m_array);
    m_i = 0;
}

ArrayStream::ArrayStream(const ArrayStream& other) {
    cout << "コピーコンストラクタ:ArrayStream" << endl;
    m_array = new double[sizeof other.m_array];
    m_i = other.m_i;
    copy(other.m_array, other.m_array + sizeof other.m_array, m_array);
}

ArrayStream::~ArrayStream() {
    cout << "~ArrayStream" << endl;
    delete[] m_array;
}

void ArrayStream::operator=(const ArrayStream& other) {
    double* array = new double[sizeof other.m_array];

    delete[] m_array;
    m_array = array;
    copy(other.m_array, other.m_array + sizeof other.m_array, m_array);
}

void ArrayStream::SetBase() {
    m_n = m_array[m_i];
    if(m_n >= 0) {
        ++m_i;
    }
}