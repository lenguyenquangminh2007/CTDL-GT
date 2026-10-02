#include <stdio.h>
//de quy
void thaphanoi(int n , char A, char B , char C){
if(n==1){
    printf ("A=B");
}else{
for (int i=0;i<n-1;i++){
C[i]=A[i];
}
B[1]=A[n];
for(int i=2;i<n-1;i++){
    B[i]=C[i];
}
}
}
int main(){
    int n=3;
    thaphanoi(n,'A','B','C');
    return 0;
}