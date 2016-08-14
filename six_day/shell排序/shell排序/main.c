#include <stdio.h>
void shellSort(int a[],int n){
    int i,j,t;
    
    int h=n/3+1;
    
    
    while(h>=1)
    {
        for(i=h;i<n;i++)
        {
            
            for(j=i;j>=h;)
            {
                if(a[j]>a[j-h])
                {
                    break;
                }
                else
                {
                    t=a[j];
                    a[j]=a[j-h];
                    a[j-h]=t;
                    j=j-h;
                }
                
                
            }
            
           
        }
        
            h=h/3;
    }
}

int main(void){
    int a[8]={3,2,4,6,1,5,7,8};
    shellSort(a,8);
    
    for(int i=0;i<8;i++){
        printf("%3d",a[i]);
    }
    
    
}





