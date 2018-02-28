#ifndef INPUTSTREAM_HPP_
#define INPUTSTREAM_HPP_

#include "Stream.hpp"

// 入力クラス
class InputStream : public Stream {
public:
    InputStream(double n); // コンストラクタ
    
protected:
    virtual void SetBase(); // 値を設定する基本関数
    
};

#endif // #ifndef INPUTSTREAM_HPP_
