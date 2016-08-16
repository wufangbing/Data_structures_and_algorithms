//
//  main.c
//  重复链表删除key（删除该删除的）
//
//  Created by 吴方兵 on 16/8/16.
//  Copyright © 2016年 吴方兵. All rights reserved.
//
#include <stdio.h>
#include<stdlib.h>

typedef  struct node{
    int data;
    struct node* next;
}elemsn;

elemsn * createLink(int a[],int n){
    elemsn *h=NULL;
    elemsn *p;
    elemsn *t=NULL;
    int i;
    
    for(i=0;i<n;i++){
        
        p=(elemsn*)malloc(sizeof(elemsn));
        p->data=a[i];
        p->next=NULL;
        
        if(!h){
            t=h=p;
        }
        else{
            
            t=t->next=p;
            
        }
    }
    
    return h;
}


elemsn* deleteNode(elemsn*h,int key){
    elemsn *h1=NULL,*t=NULL,*p=NULL;
    
    while(h){
        p=h;
        h=h->next;
        
        if(p->data-key){
            
            if(!h1)
            {
                p->next=NULL;
                h1=t=p;
                
            }
            
            else
            {
                 p->next=NULL;
                t=t->next=p;
            }
            
        
        }
        
        else{
            free(p);
        }
        
    }
    
    
    
    
    
    
    
    
        return h1;
    
}



int main(int argc, const char * argv[]) {
    int a[6]={2,3,4,1,6,6};
    elemsn*h,*p;
    h=createLink(a,6);
    
    int key=6;
    h=deleteNode(h,key);
    
    
    for(p=h;p;p=p->next){
        printf("%3d",p->data);
    }
    
    printf("\n");
}

