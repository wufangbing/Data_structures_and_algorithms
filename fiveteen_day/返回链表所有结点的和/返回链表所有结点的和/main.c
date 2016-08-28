//
//  main.c
//  返回链表所有结点的和
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

int print(elemsn *h){
    if(!h) return 0;
    
    else{
        
        return print(h->next)+(h->data)%2;
        
    }
    
}

int main(int argc, const char * argv[]) {
    int a[5]={1,2,3,4,5,};
    elemsn *h;
    h=createLink(a,5);
    
    printf("%3d",print(h));
    
}
　