//
//  FileException.hpp
//  Test
//
//  Created by 佐々木泰貴 on 2017/05/21.
//  Copyright © 2017年 佐々木泰貴. All rights reserved.
//

#ifndef FileException_hpp
#define FileException_hpp

#include "Exception.hpp"
#include <string>

class FileException :
    public Exception
{
public:
    FileException(const char* error);
    virtual const char* What() const; // エラーの状況を出力する関数
    
protected:
    std::string m_error; // エラーメッセージ
};

class OpenFileException :
    public FileException
{
public:
    OpenFileException(const char* filename);
};

class ReadFileException:
    public FileException
{
public:
    ReadFileException();
};

#endif /* FileException_hpp */
