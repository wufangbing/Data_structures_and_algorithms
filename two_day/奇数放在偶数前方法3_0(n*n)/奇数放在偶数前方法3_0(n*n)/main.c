//
//  main.c
//  奇数放在偶数前方法3_0(n*n)
//
//  Created by 吴方兵 on 16/8/7.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i,j,k,t;
    int a[6]={1,2,3,4,5,6};
    i=0;j=5;
    while(i<j){
        while(i<6&&a[i]%2==1) i++;
        
        while(i<6&&a[j]%2==0) j--;
        
        if(i<j){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    
    for(k=0;k<6;k++){
        printf("%3d",a[k]);
    }
    printf("\n");
    
}
