//
//  main.c
//  二分查找法
//
//  Created by 吴方兵 on 16/8/29.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>
void search(int a[],int n,int key){
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    
    while(low<=high){
        if(key==a[mid]){
            printf("had find\n");
            break;
        }
        
        
        if(key<a[mid]){
            low=low;
            high=mid-1;
        }
        else{
            low=mid+1;
            high=high;
        }
    }
    
}

int main(int argc, const char * argv[]) {
    int a[6]={1,2,3,4,5,6};
    int key=3;
    
    search(a,6,key);
    
    
    
}
