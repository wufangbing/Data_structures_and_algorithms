//
//  main.c
//  数组逆制方法3
//
//  Created by 吴方兵 on 16/8/6.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int i,j,t;
    int a[6]={1,2,3,4,5,6};
    for(i=0;i<6/2;i++){
        t=a[i];
        a[i]=a[6-1-i];
        a[6-1-i]=t;
    }
    
    for(j=0;j<6;j++){
        printf("%3d",a[j]);
    }
   
    
    printf("\n");
    return 0;
}
