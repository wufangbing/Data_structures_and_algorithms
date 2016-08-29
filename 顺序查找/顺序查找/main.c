//
//  main.c
//  顺序查找
//
//  Created by 吴方兵 on 16/8/29.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;){
        if(a[i]==2){
            printf("%3d",a[i]);
            break;
        }
        else{
            i++;
        }
    }
}
