#ifndef FILEEXCEPTION_H_
#define FILEEXCEPTION_H_

#include "Exception.h"
#include <string>

class FileException :
    public Exception
{
public:
    FileException(const char* error);

public:
    // エラーの状況を出力する関数
    virtual const char* What() const;

protected:
    std::string m_error; // エラーメッセージ
};

#endif // #ifndef FILEEXCEPTION_H_