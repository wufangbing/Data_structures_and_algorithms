//
//  main.c
//  链表插入key算法，保证依然有序
//
//  Created by 吴方兵 on 16/8/18.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*next;
}elemsn;

elemsn *createLink(int a[],int n){
    elemsn *p,*t=NULL,*h=NULL;
    for(int i=0;i<n;i++){
        p=(elemsn*)malloc(sizeof(elemsn));
        p->next=NULL;
        p->data=a[i];
        if(!h)
            t=h=p;
        else
            t=t->next=p;
    }
    
    
    return h;
}

elemsn* insertKey(elemsn *h,elemsn *key){
    elemsn *q,*p=NULL;
    for(q=h;q&&q->data<key->data;p=q,q=q->next);
    if(q==h){
        key->next=h;
        h=key;
    }
    else{
        key->next=p->next;
        p->next=key;
    }
    
    
    return h;
}


int main(int argc, const char * argv[]) {
    int a[6]={1,2,4,6,7,9};
    elemsn *h,*p,*key;
    h=createLink(a,6);
    
    
    key=(elemsn*)malloc(sizeof(elemsn));
    key->next=NULL;
    key->data=3;
    
    h=insertKey(h,key);
    
   
    
    
    for(p=h;p;p=p->next){
        printf("%3d",p->data);
    }
    
    printf("\n");
    
    
    
}
