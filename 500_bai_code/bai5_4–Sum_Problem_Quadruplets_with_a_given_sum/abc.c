#include <stdio.h>
void sum(int A[], int n , int target ){
int found = 0;
for (int i = 0; i<n-3 ;i++){
    for (int j=i+1 ; j<n-2; j++){
        for (int k=j+1;k<n-1;k++){
            for (int m=k+1;m<n;m++){
            if(A[i] + A[j] + A[k] + A[m]==target){
                printf(" %d %d %d %d", A[i],A[j],A[k],A[m] );
                found = 1;
            }
            }
        }
    }
}
if (!found){
    printf("not found\n");
}}
int main(){
    int target;
    scanf("%d", &target);
    int n;
    scanf ("%d",&n);
    int A[n];
    for (int i =0; i<n;i++){
        scanf("%d", &A[i]);
    }
    sum(A,n,target);
    return 0;
}