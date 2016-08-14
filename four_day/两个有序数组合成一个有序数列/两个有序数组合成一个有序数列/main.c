//
//  main.c
//  两个有序数组合成一个有序数列
//
//  Created by 吴方兵 on 16/8/11.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>
void sequencingbymerging(int a[],int m,int b[],int n,int c[]){
    
    int i=0,j=0,k=0;
    while(i<m&&j<n){
        
        if(a[i]<b[j]){
            c[k++]=a[i];
            i++;
            
        }
        else{
            c[k++]=b[j];
            j++;
        }

        
    }
    
    if(i==m){
        while(j<n){
            c[k++]=b[j++];
        }
        
        
        if(j==n){
            while(i<n){
                c[k++]=a[i++];
            }
        }
        
    }
    
    
    
    
    
    
    
}



int main(int argc, const char * argv[]) {
    int i;
    int a[4]={1,3,5,7};
    int b[4]={2,4,6,8};
    int c[8]={};
    
    sequencingbymerging(a,4,b,4,c);
    for(i=0;i<8;i++){
        printf("%3d",c[i]);
    }
    printf("\n");
    
    
    return 0;
}
