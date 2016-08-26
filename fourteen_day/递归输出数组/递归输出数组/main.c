//
//  main.c
//  递归输出数组
//
//  Created by 吴方兵 on 16/8/26.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

void info(int a[],int n){
    
    if(n==0) return;
    
    else{
        printf("%3d",a[0]);
        info(a+1,n-1);
        
    }
    
}

int main(int argc, const char * argv[]) {
    int a[5]={1,2,3,4,5};
    info(a,5);
}
