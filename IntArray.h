#ifndef INTARRAY_H_20170412
#define INTARRAY_H_20170412

class IntArray {
public:
    // コンストラクタ、コピーコンストラクト、デストラクタ
    IntArray(int size);
    IntArray(const IntArray& other);
    ~IntArray();

public:
    // 代入演算子のオーバーロード
    void operator = (const IntArray& other);

public:
    // メンバへのアクセス関数
    int Get(int i);
    void Set(int i, int value);

private:
    // インデックスのチェック
    void CheckIndex(int i);

public:
    // 配列のサイズを返す
    int Size();

private:
    int* m_array;
    int m_size;
};

#endif // #ifndef INTARRAY_H_20170412