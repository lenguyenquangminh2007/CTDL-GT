#include <stdio.h>
//de quy
void thaphanoi(int n , char A, char C , char B){
if(n==1){
    printf("%c-%c\n", A, B);
}else{
thaphanoi(n-1,A,B,C);
printf("%c-%c\n", A, B);
thaphanoi(n - 1, C,A,B);
}}
int main(){
    int n=3;
    thaphanoi(n,'A','C','B');
    return 0;
}