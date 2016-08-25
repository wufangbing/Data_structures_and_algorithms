//
//  main.c
//  递归求阶层
//
//  Created by 吴方兵 on 16/8/25.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

int fun(int n){
    if(n==1) return 1;
    else
        return fun(n-1)*n;
}
int main(int argc, const char * argv[]) {
    
    int sum;
    sum=fun(5);
    printf("n!=%3d",sum);
    printf("\n");

}
