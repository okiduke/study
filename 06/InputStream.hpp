#ifndef INPUTSTREAM_H_
#define INPUTSTREAM_H_

#include "Stream.hpp"

// 入力クラス
class InputStream : public Stream {
public:
    InputStream();
    ~InputStream();
    bool Set();         // 入力関数
};

#endif // #ifndef INPUTSTREAM_H_