#include <stdio.h>

void sapxepnoibot(int A[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                int temp = A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
            }
        }
    
void timcap(int A[],int n , int S){
    if (n<2){
        printf("không có gì\n");
        return;
    }
int timthay=0;
int *trai=A[0];
int *phai=A[n-1];
while(trai<phai){
    if(*trai+*phai==S){
        printf("(%d,%d)\n",*trai,*phai);
        timthay=1;
        trai++;
        phai--;
    }
    else if(*trai+*phai<S){
        trai++;
    }
    else{
        phai--;
    }
}
if(timthay==0){
    printf("không có gì\n");
}
}
int main(){
    int A[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    int S=10;
    sapxepnoibot(A,n);
    timcap(A,n,S);
    return 0;
}