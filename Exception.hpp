//
//  Exception.hpp
//  Test
//
//  Created by 佐々木泰貴 on 2017/05/21.
//  Copyright © 2017年 佐々木泰貴. All rights reserved.
//

#ifndef Exception_hpp
#define Exception_hpp

class Exception {
public:
    virtual ~Exception();
    
public:
    // エラーの状況を出力する関数
    virtual const char* What() const = 0;
};

#endif /* Exception_hpp */
