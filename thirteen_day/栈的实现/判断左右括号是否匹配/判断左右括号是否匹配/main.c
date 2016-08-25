//
//  main.c
//  判断左右括号是否匹配
//
//  Created by 吴方兵 on 16/8/25.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char arr[6]={'(','(','(',')',')',')'};
    int i,j=-1;
    for(i=0;i<6;)
    {
        if(arr[i]=='(')
        {
            j++;
            i++;
        }
        else
        {
            if(j>=0)
            {
                j--;
                i++;
            }
            else
                break;
            
        }
    }
    
    if(j==-1)
        printf("ok");
    
    else
        printf("err");
    
    
}
