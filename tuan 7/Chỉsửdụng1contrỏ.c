#include <stdio.h>
struct Node {
int data;
Node* next;
};

struct List {
Node* firstNode;
};
void List_Init(List* list) {
list->firstNode = 0;  //NULL
}
int main(){
    int n;
    int A[]={3,7,5,12};
    scanf("%d",&n);
    return 0;
}