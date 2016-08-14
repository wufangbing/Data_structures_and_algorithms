//
//  main.c
//  数组逆制方法01
//
//  Created by 吴方兵 on 16/8/6.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int i,j,k,t;
    
    int a[4]={1,2,3,4};
    
    
    for(i=0;i<3;i++){
        t=a[0];
        for(j=0;j<3-i;j++){
            
            a[j]=a[j+1];
        }
        a[j]=t;
        
    }
    for(k=0;k<4;k++){
        printf("%3d",a[k]);
    }
    
   
    
    
}
