//
//  main.c
//  递归链表逆制输出
//
//  Created by 吴方兵 on 16/8/28.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>
#include "stdlib.h"

typedef struct node{
    int data;
    struct node*next;
}elemsn;

elemsn *createLink(int a[],int n){
    elemsn *h=NULL,*t=NULL,*p;
    for(int i=0;i<n;i++){
        p=(elemsn*)malloc(sizeof(elemsn));
        p->data=a[i];
        p->next=NULL;
        
        if(!h) t=h=p;
        else t=t->next=p;
    }
    
    
    
    return h;
}

void print(elemsn *h){
    if(!h) return;
    
    else{
        
        print(h->next);
        printf("%3d",h->data);
    }
    
}

int main(int argc, const char * argv[]) {
    int a[5]={1,2,3,4,5,};
    elemsn *h;
    h=createLink(a,5);
    
    print(h);
    
}

