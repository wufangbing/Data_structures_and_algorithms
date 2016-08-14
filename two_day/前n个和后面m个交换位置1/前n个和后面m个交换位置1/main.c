//
//  main.c
//  前n个和后面m个交换位置1
//
//  Created by 吴方兵 on 16/8/7.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

void changeArray(int a[],int n,int m){
    int i,j,t;
    for(i=0;i<n;i++){
        
        t=a[0];
        
        for(j=0;j<m+n-1;j++){
            a[j]=a[j+1];
        }
        a[j]=t;
        
        
    }
    
}

int main(int argc, const char * argv[]) {
   
    int a[6]={1,2,3,4,5,6};
    
    changeArray(a,2,4);
    for(int i=0;i<6;i++){
        printf("%3d",a[i]);
    }
    printf("\n");
    
    
}
