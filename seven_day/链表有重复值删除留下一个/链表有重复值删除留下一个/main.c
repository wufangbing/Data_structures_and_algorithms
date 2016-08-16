//
//  main.c
//  链表有重复值删除留下一个
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


elemsn* deleteNode(elemsn*h){
    elemsn *q,*p=NULL;
    
    
    for(q=h,p=q->next;p;)
    {
        
        if((q->data)!=(p->data)){
            q=p;
            p=p->next;
        }
        
        else{
           
            q->next=p->next;
            free(p);
            p=q->next;
           
        }
    
        
    }
    
    return h;
    
    
    
}



int main(int argc, const char * argv[]) {
    int a[6]={1,1,2,2,3,3};
    elemsn*h,*p;
    h=createLink(a,6);
    
    h=deleteNode(h);
    
    
    for(p=h;p;p=p->next){
        printf("%3d",p->data);
    }
    
    printf("\n");
}
