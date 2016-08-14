//
//  main.c
//  删除数组关键字方法2
//
//  Created by 吴方兵 on 16/8/9.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>
int removeKey(int a[],int n,int key)
{
    
    int i,j;
    j=0;
    for(i=0;i<n;){
        if(a[i]==key)
        {
            i++;
        }
        else{
            a[j++]=a[i++];
            
        }
    }
    return j;
    
}


int main(void) {
    
    int i,j,key;
    int a[5]={1,2,3,4,4};
    printf("please input key\n");
   scanf("%d",&key);
    
    j=removeKey(a,5,key);
    
    for(i=0;i<j;i++){
        printf("%3d",a[i]);
    }
    
    
    
    
    return 0;
}
