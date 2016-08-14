//
//  main.c
//  把key往后面插，使之依然有序
//
//  Created by 吴方兵 on 16/8/11.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>


int insertArray(int a[],int n,int key){
    int i;
    for(i=n-1;i>=0;){
        if(key<a[i])
        {
            if(i==0)
            {
                a[i+1]=a[i];
                a[0]=key;
                i--;
            }
            
            else
            {
            a[i+1]=a[i];
            i--;
            }
        }
        else
        {
            a[i+1]=key;
            break;
        }
        
        
        
    }
    
    
    
    return n;
    
}
int main(int argc, const char * argv[]) {
    int a[4]={1,3,4,5};
    int i,n,key;
    printf("please input nimber key\n");
    scanf("%d",&key);
    
    
    n=insertArray(a,4,key);
    for(i=0;i<=n;i++){
        printf("%3d",a[i]);
    }
    
    printf("\n");
   }
