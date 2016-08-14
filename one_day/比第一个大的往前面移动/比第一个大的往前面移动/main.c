//
//  main.c
//  比第一个大的往前面移动
//
//  Created by 吴方兵 on 16/8/6.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>
int main (void){
    int a[4]={3,1,2,4};
    int i,j,k;
    int x=a[0];
    int t;
    for(i=1;i<4;i++)
    {
        if(a[i]<x){
            t=a[i];
            for(j=i;j>0;j--){
                a[j]=a[j-1];
            }
            a[j]=t;
        }
        
    }
    
    for(k=0;k<4;k++)
        printf("%3d",a[k]);
        printf("\n");
}

