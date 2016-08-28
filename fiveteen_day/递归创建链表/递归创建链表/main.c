//
//  main.c
//  递归创建链表
//
//  Created by 吴方兵 on 16/8/28.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int date;
    struct node *next;
}elemsn;


elemsn *printlink(int a[] , int n)
{
    
    elemsn *p=NULL;
    if (n ==0) return NULL;
    else
    {
        p= (elemsn *)malloc(sizeof(elemsn));
        p->date = a[0];
        p->next = printlink(a + 1, n - 1);
        return p;
    }
    
}
int main(void)
{
    elemsn *h, *p;
    int a[5] = { 1,5,3,2,4 };;
    h= printlink(a, 5);
    for (p = h; p; p = p->next)
        printf("%3d", p->date);
    printf("\n");
    
}