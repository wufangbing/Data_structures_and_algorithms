//
//  main.c
//  孩子循环抽取问题
//
//  Created by 吴方兵 on 16/8/13.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

void sort(int a[],int n,int b[],int m){
    int i,j,k;
    i=0;
    j=0;
    while(n>0){
        
        i=(i+2)%n;
        
        if(a[i])
        {
            b[j++]=a[i];
            for(k=i;k<n-1;k++){
                a[k]=a[k+1];
            }
            
        }
        n--;
        
        
    }
    
    
}

int main(int argc, const char * argv[]) {
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    int b[10]={0};
    sort(a,10,b,10);
    for(i=0;i<10;i++){
        printf("%3d",b[i]);
    }
    printf("\n");


}
