//
//  main.c
//  递归求常数各个位数之和
//
//  Created by 吴方兵 on 16/8/25.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

int fun(int n){
    if(n%10==0) return 0;
    else
        return fun(n/10)+n%10;
}
int main(int argc, const char * argv[]) {
    
    int sum;
    sum=fun(1234);
    printf("1234=%3d",sum);
    printf("\n");
    
}