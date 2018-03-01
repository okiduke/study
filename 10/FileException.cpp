//
//  FileException.cpp
//  Test
//
//  Created by 佐々木泰貴 on 2017/05/21.
//  Copyright © 2017年 佐々木泰貴. All rights reserved.
//

#include "FileException.hpp"

FileException::FileException(const char* error) {
    m_error = error;
}

// エラーの状況を出力する関数
const char* FileException::What() const {
    return m_error.c_str();
}
