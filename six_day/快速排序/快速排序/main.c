//
//  main.c
//  快速排序
//
//  Created by 吴方兵 on 16/8/14.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

//#include<stdio.h>
//#include<stdlib.h>
//void quitesort(int a[], int left, int right)
//{
//    if (left >= right) return;
//    int i = left;
//    int j = right;
//    int key = a[left];
//    while (i < j)
//    {
//        while (i < j&&key <= a[j])
//            j--;
//        a[i] = a[j];
//        while (i < j&&key >= a[i])
//            i++;
//        a[j] = a[i];
//        
//    }
//    a[j] = key;
//    
//    quitesort(a, left, j);
//    quitesort(a, j+ 1,right);
//}
//int main(void)
//{
//    int a[8] = { 49,38,65,97,76,13,27,49 };
//    quitesort(a,0,7);
//    for (int i = 0; i < 8; i++)
//        printf("%3d", a[i]);
//    printf("\n");
//    system("pause");
//}

#include <stdio.h>
void quicksort(int a[],int left,int right){
    if(left>=right) return ;
    
    int i,j;
    int key;
    i=left;
    j=right;
    key=a[left];
    
    while(i<j){
        while(i<j&&key<a[j])j--;
            a[i]=a[j];
        
        while(i<j&&key>a[i]) i++;
            a[j]=a[i];
        
        
    }
    a[i]=key;
    
    quicksort(a,left,i);
    quicksort(a,i+1,right);
    
}


int main(int argc, const char * argv[]) {
    int a[8]={4,1,2,5,8,6,3,7};
    int i;
    quicksort(a,0,8);
    
    for(i=0;i<8;i++){
        printf("%3d",a[i]);
    }
    
    printf("\n");
    
    
}
