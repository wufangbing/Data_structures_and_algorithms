//
//  main.c
//  前n个和后m个交换位置
//
//  Created by 吴方兵 on 16/8/9.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

void changeArray(int a[],int n){
    int t,i,j;
    for(i=0,j=n-1;i<j;i++,j--){
        
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        
    }
    
    
    
    
}

int main(int argc, const char * argv[]) {
  
    int a[6]={1,2,3,4,5,6};
    
    
    changeArray(a,6);
   changeArray(a,4);
    changeArray(a+4,2);
    
    for(int i=0;i<6;i++){
        printf("%3d",a[i]);
    }
    
    
}
