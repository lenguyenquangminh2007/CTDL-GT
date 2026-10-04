#include <stdio.h>
void thaphanoi(int n, char a, char b , char c){
if(n==1){
    printf("\"%c-%c\\n\"\n", a, c);
    }
else{
    thaphanoi(n-1,a,c,b);
    thaphanoi(1,a,b,c);
    thaphanoi(n-1,b,a,c);
}
} 
int main(){
    int n=5;
    thaphanoi(n,'A','B','C');
    return 0;
}