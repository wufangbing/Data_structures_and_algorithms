//
//  main.c
//  一个链表插入另一个链表
//
//  Created by 吴方兵 on 16/8/18.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int date;
    struct node *next;
}elemsn;
elemsn *createlink(int a[], int n)
{
    elemsn *p, *tail, *head;
    tail = head = p = NULL;
    for (int i = 0; i < n; i++)
    {
        p = (elemsn *)malloc(sizeof(elemsn));
        p->date = a[i];
        p->next = NULL;
        if (!head)
            head = tail = p;
        else
            tail = tail->next = p;
        
    }
    return head;
}
elemsn *concatArray(elemsn *h1, elemsn *h2)
{
    elemsn *p = NULL, *q = NULL, *t = NULL;
    
    while(h1){
        p=h1;
        h1=h1->next;
        
        for(q=h2;q&&q->date<p->date;t=q,q=q->next);
        if(q==h2){
            p->next=h2;
            h2=p;
        }
        else{
            p->next=t->next;
            t->next=p;
        }
        
    
        
    }
    
    
    
    
    
    
    
    
    return h2;
    
}
int main(void)
{
    int a[5] = { 1,2,3,4,5 };
    int b[5] = { 2,3,5,6,7 };
    elemsn *p, *h1, *h2, *k, *l;
    h1 = createlink(a, 5);
    h2 = createlink(b, 5);
    for (p = h1; p; p = p->next)
        printf("%3d", p->date);
    printf("\n");
    for (p = h2; p; p = p->next)
        printf("%3d", p->date);
    printf("\n");
    
    
    
    k = concatArray(h1, h2);
    for (l = k; l; l = l->next)
        printf("%3d", l->date);
    printf("\n");
    system("pause");
}