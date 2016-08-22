//
//  main.c
//  带表头的链表插入
//
//  Created by 吴方兵 on 16/8/22.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}elemsn;


elemsn * createLink(int a[],int n){
    elemsn *h=NULL,*t=NULL,*p=NULL;
    t=h=(elemsn *)malloc(sizeof(elemsn));
    h->next=NULL;
    
    
    for(int i=0;i<n;i++){
        p=(elemsn *)malloc(sizeof(elemsn));
        p->data=a[i];
        p->next=NULL;
        
        t=t->next=p;
        
    }
    
    
    
    
    return h;
}

elemsn *delpNode(elemsn* h,int key){
    
    elemsn* p,*delp;

    for(p=h;p->next;){
        
    if(p->next->data-key)
        p=p->next;
    
        
        else{
            delp=p->next;
            p->next=delp->next;
            free(delp);
        }
        
        
    }
    return h;
}

int main(void) {
    int a[7]={1,2,3,4,4,6,7};
    elemsn *p,*h;
    
    int key=4;
    
    h=createLink(a,7);
    
    h=delpNode(h,key);
    
    for(p=h;p->next;p=p->next){
        
        printf("%3d",p->next->data);
    }
    
}
