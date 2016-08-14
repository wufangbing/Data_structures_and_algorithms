//
//  main.c
//  单向链表的正向创建
//
//  Created by 吴方兵 on 16/8/13.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}elemsn;

elemsn *createLink(int a[],int n){
    elemsn* head;
    elemsn* tail;
    elemsn* p;
    tail=head=(elemsn*)malloc(sizeof(elemsn));
    head->data=a[0];
    head->next=NULL;
    for(int i=1;i<n;i++){
        p=(elemsn*)malloc(sizeof(elemsn));
        p->data=a[i];
        p->next=NULL;
        tail->next=p;
        tail=p;
        
    }
    
    return head;
    
}


int main(int argc, const char * argv[]) {
    int a[4]={1,2,3,4};
    elemsn* head;
    elemsn* p;
    head=createLink(a,4);
    
    for(p=head;p!=NULL;p=p->next){
        printf("%3d",p->data);
        
    }
   
    printf("\n");
    
    
    
    return 0;
}
