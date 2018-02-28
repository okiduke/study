#ifndef STREAM_H_
#define STREAM_H_

// 0 以上の値を順次取得していく処理を行うための基底クラス
class Stream {
public:
    Stream(double n);
    double Get() const; // 設定された値を取得
    bool Set(); // 値を設定
    
protected:
    virtual void SetBase() = 0; // 値を設定する基本関数
    
protected:
    double m_n; // 現在の値
};

#endif // #ifndef STREAM_H_
