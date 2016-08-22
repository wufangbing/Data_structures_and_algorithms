//
//  main.c
//  逆制方法2
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
    
    for(int i=0;i<n;i++){
        p=(elemsn *)malloc(sizeof(elemsn));
        p->data=a[i];
        p->next=NULL;
        if(!h)
            t=h=p;
        else
            t=t->next=p;
        
    }
    
    
    
    
    return h;
}


elemsn* preLink(elemsn*h){
    
    elemsn *s,*p;
    p=h->next;
    h->next=NULL;
    
    while(p){
        s=p->next;
        p->next=h;
        h=p;
        p=s;
    }
    
    
    
    return h;
}

int main(void) {
    int a[7]={1,2,3,4,5,6,7};
    elemsn *p,*h;
    
    h=createLink(a,7);
    
   
    
    
    h=preLink(h);
    for(p=h;p;p=p->next){
        
        printf("%3d",p->data);
    }
    
}
