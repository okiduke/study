//
//  OpenFileException.hpp
//  Test
//
//  Created by 佐々木泰貴 on 2017/05/21.
//  Copyright © 2017年 佐々木泰貴. All rights reserved.
//

#ifndef OpenFileException_hpp
#define OpenFileException_hpp

#include "FileException.hpp"
#include <string>

class OpenFileException :
    public FileException
{
public:
    OpenFileException();
    
protected:
    std::string m_error;
};

#endif /* OpenFileException_hpp */
