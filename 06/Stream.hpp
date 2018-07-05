#ifndef STREAM_H_
#define STREAM_H_

// 0 以上の値を順次取得していく処理を行うための基底クラス
class Stream {
public:
    double m_n; // 現在の値
public:
    double Get() const; // 設定された値を取得
};

#endif // #ifndef STREAM_H_