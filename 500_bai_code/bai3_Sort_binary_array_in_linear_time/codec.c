#include <stdio.h>
int main() {
    int n;
    if(scanf("%d",&n)!=1||n<0){
        printf("Không\n");
        return 0;
    }
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
        if(A[i]!=0&&A[i]!=1){
            printf("Không\n");
            return 0;
        }
    }
    int k=0;
    for(int i=0;i<n;i++){
        if(A[i]==0){
            k++;
        }
    }
    for(int i=0;i<k;i++){
        printf("0 ");
    }
    for (int i=k;i<n;i++){
        printf("1 ");
    }
    return 0;
}

   