#include <stdio.h>
int main(){
    int n;
    while(1){
    printf("nhập số đĩa(3<=n<=5): ");
    scanf("%d",&n);
if(n<3 || n>5){
        printf("nhập lại\n");
    }
    if (n==3){
printf("A-C\n"
"A-B\n"
"C-B\n"
"A-C\n"
"B-A\n"
"B-C\n"
"A-C\n");
    }
    if (n==4){
        printf("A-B\n"
"C-A\n"
"C-B\n"
"A-B\n"
"A-C\n"
"B-C\n"
"B-A\n"
"C-A\n"
"B-C\n"
"A-B\n"
"A-C\n"
"B-C\n");
    }
    if(n==5){
        printf("A-C\n"
"B-A\n"
"C-B\n"
"C-A\n"
"B-A\n"
"B-C\n"
"A-C\n"
"A-B\n"
"C-B\n"
"A-C\n"
"B-A\n"
"B-C\n"
"A-C\n");
    }}
    return 0;
}
