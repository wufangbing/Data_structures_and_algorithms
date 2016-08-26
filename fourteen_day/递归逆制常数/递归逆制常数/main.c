//
//  main.c
//  递归逆制常数
//
//  Created by 吴方兵 on 16/8/26.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

void reverse(int n){
    if(n==0) return;
    else{
        printf("%d",n%10);
        reverse(n/10);
    }
}
int main(int argc, const char * argv[]) {
    int n=12345;
    reverse(n);
}
