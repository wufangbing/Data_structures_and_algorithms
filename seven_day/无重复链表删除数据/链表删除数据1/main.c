//
//  main.c
//  链表删除数据1
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
    for(delp=h;delp&&delp->data-key;q=delp,delp=delp->next);
    if(delp==NULL)
    {
        printf("no find\n");
        return h;
    }
    if(delp==h){
        h=h->next;
        free(delp);
        return h;
    }
    
    else{
        q->next=delp->next;
        free(delp);
        return h;
    }
    
    
    
}



int main(int argc, const char * argv[]) {
    int a[6]={2,3,4,1,6,0};
    elemsn*h,*p;
    h=createLink(a,6);
    
    int key=90;
    h=deleteNode(h,key);
    
    
    for(p=h;p;p=p->next){
        printf("%3d",p->data);
    }
    
    printf("\n");
}
