//
//  main.c
//  插入一个有序的数组，保证依然有序
//
//  Created by 吴方兵 on 16/8/11.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

int insertArray(int a[],int n,int key){
    int i,j;
    for(i=0;i<n;){
        if(a[i]<key) i++;
    
    else{
        n++;
        break;
    }
        
    }
    
    if(i==n){
        n++;
        a[i]=key;
    }
    
    else{
        
    for(j=n-1;j>i;j--){
        a[j]=a[j-1];
    }
        a[i]=key;
        
    }
    
    return n;
    
}

int main(int argc, const char * argv[]) {
    
    int i,n;
    int key;
    printf("please input number key\n");
    scanf("%d",&key);
    int a[4]={1,2,4,5};
    
    n=insertArray(a,4,key);
    
    for(i=0;i<n;i++){
        printf("%3d",a[i]);
    }
    
    
    return 0;
}
