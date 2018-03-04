#include "Integer.hpp"
#include <iostream>
using namespace std;

int Integer::m_value;

Integer::Integer(int num) {
    m_value = num;
}

void Integer::Show() {
    cout << m_value << endl;
}