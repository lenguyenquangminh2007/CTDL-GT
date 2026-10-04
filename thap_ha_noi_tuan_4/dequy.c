#include <stdio.h>
void thaphanoi(int n, char a, char b , char c){
if(n==1){
    printf("%c-%c\n", a, c);
    }
else{
    thaphanoi(n-1,a,c,b);
    thaphanoi(1,a,b,c);
    thaphanoi(n-1,b,a,c);
}
} 
int main(){
    int n;
    while(1){
    printf("nhập: ");
    scanf("%d",&n);
    thaphanoi(n,'A','B','C');
    }
    return 0;
}