#include <stdio.h>
void selection(int A[], int n){
    for(int j=0;j<n-1;j++){
        int min=j;
    for(int i=j+1;i<n;i++){
        if(A[i]<A[min]){
            min=i;
        }
    }
    int temp=A[j];// thay thế min và số ở đầu
            A[j]=A[min];
            A[min]=temp;
            for(int i=0;i<n;i++){
                printf("%d ",A[i]);
            }
            printf("\n");

    }
}
int main(){
    int A[]={101,23,57,13,25,121,87,36,13,204,111,89,59};
    int n=sizeof(A)/sizeof(A[0]);
    printf("");
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    selection(A,n);
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}
