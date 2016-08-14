//
//  main.c
//  奇数放在偶数之后0(n)
//
//  Created by 吴方兵 on 16/8/7.
//  Copyright © 2016年 吴方兵. All rights reserved.
//
#include <stdio.h>

int main(void) {
    
    int a[6]={1,2,3,4,5,6};
    int i,j,z,t;
    i=0,j=5;
    
    while(i<j){
        
        
        if(a[i]%2==1)
        {
            i++;
        }
        
        else{
            if(a[j]%2==0)
            {
                j--;
            }
            
            
            else
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
                i++;
                j--;
            }
        }
    }
    
    
    
    for(z=0;z<6;z++)
    {
        printf("%3d\n",a[z]);
    }
    
}

