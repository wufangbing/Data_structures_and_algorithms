//
//  main.c
//  递归求数组之和
//
//  Created by 吴方兵 on 16/8/26.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

int info(int a[],int n){
    
    if(n==0) return 0;
    
    else{
        
        //return info(a,n-1)+a[n-1];
        return info(a+1,n-1)+a[0];
        
        
    }
    
}

int main(int argc, const char * argv[]) {
    int a[5]={1,2,3,4,5};
    int sum;
    sum=info(a,5);
    printf("%3d\n",sum);
}