//
//  main.c
//  创建二叉树
//
//  Created by 吴方兵 on 16/8/29.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node*left,*right;
}btNode;

btNode *createNode(int a[],int n){
    btNode* boot,*p,*c,*pa=NULL;
    boot=(btNode*)malloc(sizeof(btNode));
    boot->data=a[0];
    boot->left=boot->right=NULL;
    
    for(int i=1;i<n;i++){
        p=(btNode*)malloc(sizeof(btNode));
        p->data=a[i];
        p->left=p->right=NULL;
        
        c=boot;
        while(c){
            pa=c;
            if(c->data>p->data){
                c=c->left;
            }
            else{
                c=c->right;
            }
        }
        
        if(p->data<pa->data){
            pa->left=p;
        }
        else{
            pa->right=p;
        }
        
        
    }
    
    return boot;
}


void print(btNode*boot){
    if(!boot) return;
    else{
        printf("%3d",boot->data);
        print(boot->left);
        print(boot->right);
    }
    
}
int main(int argc, const char * argv[]) {
    int a[8]={5,3,7,2,4,6,8,10};
    btNode* root;
    root=createNode(a,8);
    
    
    print(root);
    
    
    
    
}
