//
//  main.c
//  数组逆制方法2
//
//  Created by 吴方兵 on 16/8/6.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,j,t;
    int a[6]={1,2,3,4,5,6};
    for(i=0,j=5;i<j;i++,j--){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    
    for(int k=0;k<6;k++){
        printf("%3d",a[k]);
    }
    printf("\n");
    
}
