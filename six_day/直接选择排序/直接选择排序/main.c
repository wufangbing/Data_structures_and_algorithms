//
//  main.c
//  直接选择排序
//
//  Created by 吴方兵 on 16/8/14.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

void chooseSort(int a[],int n){
    int i,j,t,min;
    for(i=0;i<n-1;i++){
        
        min=i;
        for(j=i+1;j<n;j++)
            if(a[min]>a[j]) min=j;
        
        if(i!=min){
            t=a[i];
            a[i]=a[min];
            a[min]=t;
        }
    
    }
    
  

}

int main(int argc, const char * argv[]) {
    int a[7]={2,1,3,4,5,6,0};
    int i;
    chooseSort(a,7);
    for(i=0;i<7;i++){
        printf("%3d",a[i]);
    }
    
    printf("\n");
    
    
}