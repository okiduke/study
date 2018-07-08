#ifndef STREAM_H_
#define STREAM_H_

// 0 以上の値を順次取得していく処理を行うための基底クラス
class Stream {
protected:
    double m_n; // 現在の値
public:
    Stream();
    virtual ~Stream(); // 仮装デストラクタ
    double Get() const; // 設定された値を取得
    bool Set();

protected:
    virtual void SetBase() = 0;
};

#endif // #ifndef STREAM_H_