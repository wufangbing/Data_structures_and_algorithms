//
//  main.c
//  链表基数放在偶数之前
//
//  Created by 吴方兵 on 16/8/18.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}elemsn;
elemsn *createlink(int a[], int n)
{
    elemsn *p, *tail, *head;
    tail = head = p = NULL;
    for (int i = 0; i < n; i++)
    {
        p = (elemsn *)malloc(sizeof(elemsn));
        p->data = a[i];
        p->next = NULL;
        if (!head)
            head = tail = p;
        else
            tail = tail->next = p;
        
    }
    return head;
}
elemsn *concatArray(elemsn *h)
{
    elemsn *p = NULL, *q = NULL, *s=NULL,*h1=NULL,*tail=NULL;
    
    

    for(p=h;p;){
        if(((p->data)%2)==1){//奇数
            q=p;
            p=p->next;
        }
        
        else{//偶数
            
            if(p==h){//在头部
                s=p;
                p=h=h->next;
                s->next=NULL;
                
                
            }
            else{//中间和尾部
                s=p;
                p=q->next=p->next;
                s->next=NULL;
                
            }
       
        
            if(!h1)
            {
                
                h1=tail=s;
            }
            else
            {
               tail=tail->next=s;
            }
        }
        
        
    }
    

        tail->next=h;
        return h1;
    
}
int main(void)
{
    int a[7] = {1,2,3,4,5,6,7};
    
    elemsn  *h, *p;
    h = createlink(a,7);
    h= concatArray(h);
    for (p= h; p; p= p->next)
        printf("%3d", p->data);
        printf("\n");
        system("pause");
}