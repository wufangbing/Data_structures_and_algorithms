#include <stdio.h>
int removeKey(int a[],int n){
    int i,j,k;
    for(i=0;i<n;i++){
        
        for(j=i+1;j<n;){
            if(a[i]==a[j]){
                for(k=j;k<n-1;k++){
                    a[k]=a[k+1];
                }
                n--;
            }
            
            else{
                j++;
            }
            
            
        }
        
        
    }
    
    
    
    
    return n;
}


int main(int argc, const char * argv[]) {
    
    int a[7]={1,2,3,1,2,3,4};
    int i,n;
    n=removeKey(a,7);
    for(i=0;i<n;i++){
        printf("%3d",a[i]);
    }
}