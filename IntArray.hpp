#ifndef INTARRAY_HPP_20180705
#define INTARRAY_HPP_20180705

class IntArray {
private:
    int* m_array;
    int  m_size;

public:
    IntArray(int size);
    IntArray(const IntArray& other); //コピーコンストラクタ
    ~IntArray();
    void operator=(const IntArray& other);
    int Get(int i) const;
    void Set(int i, int value);
    int Size() const;

private:
    void CheckIndex(int i) const;
};

#endif // #ifndef INTARRAY_HPP_20180705