//
//  main.c
//  一个数组不用for输出3次
//
//  Created by 吴方兵 on 16/8/11.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,k=1;
    int a[3]={1,2,3};
    
    for(i=0;i<9;i++){
        printf("%3d",a[i%3]);
        if(k%3==0){
            printf("\n");
        }
        k++;
        
    }
    
    
    printf("\n");
    return 0;
}
