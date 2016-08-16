//
//  main.c
//  重复链表删除key
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
    elemsn *delp,*q=NULL;
    for(delp=h;delp;)
    {
        if(delp->data-key){
            q=delp;
            delp=delp->next;
        }
        
        
        else{
            if(delp==h){
                h=h->next;
                free(delp);
                delp=h;
            }
            else{
                q->next=delp->next;
                free(delp);
                delp=q->next;
            }
            
            
            
        }
        
        
        
        
        
    }
    return h;
    
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

