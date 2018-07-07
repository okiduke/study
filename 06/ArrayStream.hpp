#ifndef ARRAYSTREAM_H_
#define ARRAYSTREAM_H_

#include "Stream.hpp"

// 配列から順に値を取得していくクラス
class ArrayStream : public Stream {
private:
    const double* m_array; //配列
    int m_i;    //現在のインデックス
public:
    ArrayStream(const double* array);
    ~ArrayStream();
    bool Set();          // 新しい値を設定
};

#endif // #ifndef ARRAYSTREAM_H_