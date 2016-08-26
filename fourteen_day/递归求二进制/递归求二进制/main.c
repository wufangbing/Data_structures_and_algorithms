//
//  main.c
//  递归求二进制
//
//  Created by 吴方兵 on 16/8/26.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

void fun(int n){
    if(!n) return;
    else{
        fun(n/2);
        printf("%3d",n%2);
    }
}
int main(int argc, const char * argv[]) {
   
    int n=17;
    fun(n);
}
