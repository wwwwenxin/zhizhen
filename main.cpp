//
//  main.cpp
//  zhizhen
//
//  Created by wx on 15/12/16.
//  Copyright © 2015年 wx. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,*p;
    a=9;
    p=&a;
    printf("a=%x &a=%x p=%x &p=%x *p=%x \n",a,&a,p,&p,*p);
    return 0;
}
