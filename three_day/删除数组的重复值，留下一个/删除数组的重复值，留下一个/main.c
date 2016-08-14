//
//  main.c
//  删除数组的重复值，留下一个
//
//  Created by 吴方兵 on 16/8/9.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>
int removeKey(int a[],int n){
    int i,j,k;
    for(i=0,j=i+1;j<n;){
        
        if(a[i]==a[j]){
            for(k=j;k<n-1;k++){
                a[k]=a[k+1];
            }
            n--;
        }
        
        else{
            
            i=j;
            j++;
        }
    }
    
   
    return n;
    
    
}


int main(int argc, const char * argv[]) {
    
    int a[7]={1,2,3,4,4,5,5};
    int i,n;
    n=removeKey(a,7);
    for(i=0;i<n;i++){
        printf("%3d",a[i]);
    }
    
    
}

