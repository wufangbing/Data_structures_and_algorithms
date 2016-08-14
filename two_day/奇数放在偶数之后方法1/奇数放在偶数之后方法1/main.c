//
//  main.c
//  奇数放在偶数之后方法1
//
//  Created by 吴方兵 on 16/8/7.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[6]={1,2,3,4,5,6};
    int i,j,k,t;
    
    
    for(i=1;i<6;){
        if(a[i]%2==0) i++;
        else{
            for(j=i;j>=0;j--)
            {
                
                if(a[j]%2==0)
                {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
    }
    for(k=0;k<6;k++){
        printf("%3d",a[k]);
    }
    

}
