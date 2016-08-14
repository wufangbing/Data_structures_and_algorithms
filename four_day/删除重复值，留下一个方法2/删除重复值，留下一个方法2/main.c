//
//  main.c
//  删除重复值，留下一个方法2
//
//  Created by 吴方兵 on 16/8/11.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

int changeArray(int a[],int n){
    
    int i,j,k=0;
    
    for(i=0,j=i+1;i<n;){
        if(a[i]!=a[j]) {
            a[k++]=a[i];
            i=j;
            j++;
        }
        
        else{
            
            j++;
            
            
        }
    }
    
    
    return k;
}

int main(int argc, const char * argv[]) {
    
    int i,n;
    int a[12]={1,1,2,2,6,7,3,3,4,4,1,1};
    
    n=changeArray(a,12);
    for(i=0;i<n;i++){
        printf("%3d",a[i]);
    }
    
    
    return 0;
}
