//
//  main.c
//  直接插入排序
//
//  Created by 吴方兵 on 16/8/14.
//  Copyright © 2016年 吴方兵. All rights reserved.
//

#include <stdio.h>
void InsertionSort(int a[],int n){
    int i,j,x;
//    
//    for(i=1;i<n;i++){
//        x=a[i];
//        for(j=i-1;j>=0;){
//           
//            if(x<a[j])
//            {
//                if(j==0){
//                    a[j+1]=a[j];
//                    a[j]=x;
//                    break;
//                }
//                
//                else
//                {
//                a[j+1]=a[j];
//                j--;
//                }
//                
//            }
//            
//            else
//            {
//                a[j+1]=x;
//                break;
//            }
//           
//        }
//        
//        
//        
//    }
    
    
    
    for(i=1;i<n;i++){
        x=a[i];
        for(j=i-1;j>=0;){
            
            if(x<a[j])
            {
                    a[j+1]=a[j];
                    j--;
               
                
            }
            
            else
            {
                
                break;
            }
            
        }
        
        a[j+1]=x;
        
    }

    
    
}



int main(int argc, const char * argv[]) {
    int a[7]={2,1,3,4,5,6,0};
    int i;
    InsertionSort(a,7);
    for(i=0;i<7;i++){
        printf("%3d",a[i]);
    }
    
    printf("\n");
    
    
}
