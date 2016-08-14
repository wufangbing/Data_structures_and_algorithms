//
//  main.c
//  快速判断数组是否有重复值o(n)
//
//  Created by 吴方兵 on 16/8/9.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    int b[100]={0};
    int a[5]={1,2,3,4,5};
    
    for(i=0;i<5;){
        if(b[a[i]]==1){
            printf("数组含有重复值");
            break;
        }
        else{
            b[a[i]]=1;
            i++;
        }
    }
    
    if(i==5){
        printf("数组含没有重复值");
    }
    
    printf("\n");
    
}
