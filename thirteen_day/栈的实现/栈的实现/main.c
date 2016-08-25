//
//  main.c
//  栈的实现
//
//  Created by 吴方兵 on 16/8/25.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>
#include "stdlib.h"


int pop(int top)
{
    --top;
    return top;
}

int push(int *s,int top,int x){
    s[++top]=x;
    return top;
}


int main(int argc, const char * argv[]) {
    int a[4]={1,2,3,4};
    int *s;
    s=(int *)malloc(5*sizeof(int));
    int top=-1;
    int i=0;
 
   
    for(i=0;i<5;i++){
        if(top==2){
            top=pop(top);
            printf("%3d已经出栈",s[top+1]);
        }
        
        top=push(s, top, a[i]);
        printf("%3d已经入栈",s[top]);
        
    }
    
    
    
    
}
