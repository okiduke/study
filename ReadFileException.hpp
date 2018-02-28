//
//  ReadFileException.hpp
//  Test
//
//  Created by 佐々木泰貴 on 2017/05/21.
//  Copyright © 2017年 佐々木泰貴. All rights reserved.
//

#ifndef ReadFileException_hpp
#define ReadFileException_hpp

#include "FileException.hpp"
#include <string>

class ReadFileException :
    public FileException
{
public:
    ReadFileException();
    
protected:
    std::string m_error;
};

#endif /* ReadFileException_hpp */
