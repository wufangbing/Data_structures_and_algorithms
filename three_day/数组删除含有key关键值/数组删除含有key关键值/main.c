//
//  main.c
//  数组删除含有key关键值
//
//  Created by 吴方兵 on 16/8/9.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>
int removeKey(int a[],int n,int key){
    
    int i,j;
    for(i=0;i<n;){
        if(key-a[i]) i++;
        else
        {
            for(j=i;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
            
            n--;
        }
        
        
    }
    return n;
    
    
    
}


int main(int argc, const char * argv[]) {
    
    int a[7]={1,2,4,4,4,4,4};
    int i,n;
    n=removeKey(a,7,4);
    for(i=0;i<n;i++){
        printf("%3d",a[i]);
    }
    
    
}
