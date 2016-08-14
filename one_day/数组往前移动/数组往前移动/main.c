//
//  main.c
//  数组往前移动
//
//  Created by 吴方兵 on 16/8/6.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>
    
    int main(void) {
        int a[6]={1,2,3,4,5,6};
        int x;
        x=a[0];
        int i;
        for(i=0;i<5;i++)
        {
            a[i]=a[i+1];
            
        }
        
        a[i]=x;
        
        for(int j=0;j<6;j++){
            printf("%3d",a[j]);
        }
        
        printf("\n");
    }



