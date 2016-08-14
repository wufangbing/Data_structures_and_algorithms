//
//  main.c
//  一次性求最大和次大值
//
//  Created by 吴方兵 on 16/8/13.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int a[7]={1,3,4,5,7,2,0};
    int i;
    int min,max;
    min=a[1];
    max=a[0];
    
    for(i=1;i<7;i++){
        if(a[i]>max){
           
            min=max;
             max=a[i];
            
        }
        
        else
        {
            if(a[i]>min)
            {
                min=a[i];
            }
            
        }
        
    }
    
    
    printf("min=%dmin=%d\n",min,max);
    
}
