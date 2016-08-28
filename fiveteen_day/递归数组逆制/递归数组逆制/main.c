//
//  main.c
//  递归数组逆制
//
//  Created by 吴方兵 on 16/8/28.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

void reverse(int a[],int n){
    int t;
    if(n==0||n==1){
        return;
    }
    else{
        t=a[0];
        a[0]=a[n-1];
        a[n-1]=t;
        reverse(a+1,n-2);
    }
}

int main(int argc, const char * argv[]) {
    int a[6]={1,2,3,4,5,6};
    reverse(a,6);
    for(int i=0;i<6;i++){
        printf("%3d",a[i]);
    }
}
