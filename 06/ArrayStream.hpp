#ifndef ARRAYSTREAM_H_
#define ARRAYSTREAM_H_

#include "Stream.hpp"

// 配列から順に値を取得していくクラス
class ArrayStream : public Stream {
private:
    double* m_array; //配列
    int m_i;    //現在のインデックス
public:
    ArrayStream(const double* array, int size);
    ArrayStream(const ArrayStream& other);
    ~ArrayStream();
    void operator=(const ArrayStream& other);

protected:
    virtual void SetBase(); // 値を設定する基本関数
};

#endif // #ifndef ARRAYSTREAM_H_