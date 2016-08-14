//
//  main.c
//  单向链表逆向建立
//
//  Created by 吴方兵 on 16/8/13.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>
typedef struct node{
    int data;
    struct node* next;
}elemsn;

elemsn* createLink(int a[],int n){
    elemsn* p;
    elemsn* head=NULL;
    
    for(int i=n-1;i>=0;i--){
        p=(elemsn*)malloc(sizeof(elemsn));
        p->data=a[i];
        p->next=head;
        head=p;
    }
    
    
    return head;
    
}



int main(int argc, const char * argv[]) {
    int a[4]={1,2,3,4};
    elemsn *head;
    elemsn *p;
    head=createLink(a,4);
    for(p=head;p;p=p->next){
        printf("%3d",p->data);
    
    }
    printf("\n");
}
