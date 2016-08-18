//
//  main.c
//  两个链表插入保证依然有序
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


elemsn *concatArray(elemsn *h1,elemsn *h2){
    
    elemsn *tail=NULL,*s=NULL,*t1=NULL;
    
    while(h1 && h2){
        if(h1->data<h2->data)
        {

            s=h1;
            s->next=NULL;
            h1=h1->next;
        }
        
        else
        {
            
            s=h2;
            s->next=NULL;
            h2=h2->next;
            
        }
        
        
        if(!t1)
            tail=t1=s;
        
        
        else
            tail=tail->next=s;
        
        
        
    }
    
    
    if(!h1)
        
        tail->next=h2;
    
    
    else
        tail->next=h1;
    
    
    return t1;
    
    
}






int main(int argc, const char * argv[]) {
    int a[6]={1,2,4,6,7,9};
    int b[4]={0,1,5,10};
    elemsn *h1,*p,*h2,*h;
    h1=createLink(a,6);
    h2=createLink(b,4);
    
    
        for(p=h1;p;p=p->next){
            printf("%3d",p->data);
        }
         printf("\n");
        for(p=h2;p;p=p->next){
            printf("%3d",p->data);
        }
    
        printf("\n");
    
    
    h=concatArray(h1,h2);
    
    for(p=h;p;p=p->next){
        printf("%3d",p->data);
    }
    
    
    printf("\n");
    
    
    
}

