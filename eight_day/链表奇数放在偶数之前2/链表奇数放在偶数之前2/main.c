//
//  main.c
//  链表奇数放在偶数之前2
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
    elemsn *p = NULL,*s=NULL,*t=NULL,*h1=NULL;
    
   while(h){
       
       p=h;
       h=h->next;
       
    
        if(((p->data)%2)==1){//奇数
            
            s=p;
            s->next=NULL;
            
            if(!h1)
                h1=t=s;
            else
                t=t->next=s;
        
            
        }
       
        else{//偶数
            
            s=p;
            s->next=NULL;
            
            if(!h1)
            {
                h1=t=s;
            }
            
            else
            {
                
                s->next=h1;
                h1=s;
            
            }
            
            
            
            
        }
       
      
       
       
       
       
       
        
   }//while over
        

   
    return h1;
    
}
int main(void)
{
    int a[7] = {2,2,3,4,5,6,7};
    
    elemsn  *h, *p;
    h = createlink(a,7);
    
    h= concatArray(h);
    for (p= h; p; p= p->next)
        printf("%3d", p->data);
    printf("\n");
    system("pause");
}
