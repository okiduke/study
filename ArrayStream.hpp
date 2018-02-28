#ifndef _ARRAYSTREAM_HPP_
#define _ARRAYSTREAM_HPP_

#include "Stream.hpp"

// 配列から順に値を取得していくクラス
class ArrayStream : public Stream {
public:
    ArrayStream(const double* array);
    bool Set();
    
private:
    const double* m_array; // 配列
    int m_i; // 現在のインデックス
};

#endif // #ifndef _ARRAYSTREAM_HPP_
