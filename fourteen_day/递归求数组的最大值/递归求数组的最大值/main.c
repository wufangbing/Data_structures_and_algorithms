//
//  main.c
//  递归求数组的最大值
//
//  Created by 吴方兵 on 16/8/26.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

int info(int a[],int n){
    
    int max;
    if(n==1) return a[0];
    
    else{
        
        max=info(a+1,n-1);
       if(a[0]>max)
           return a[0];
        else return max;
        
        
    }
    
}

int main(int argc, const char * argv[]) {
    int a[5]={1,2,3,4,5};
    int max;
    max=info(a,5);
    printf("%3d\n",max);
}