Cách 1: sử dụng 1 con trỏ duyệt 

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

Cách 2: sử dụng 2 con trỏ duyệt 

//tao nut
struct Node
{
int n;
Node* pNext;
};
struct SLL
{
Node* pHead, * pTail;
};
//tao danh sach
void initSLL(SLL* list)
{
list->pHead = list->pTail = NULL;
}

duyệt danh sách 

Procedure TRAVERS(L)
If Lis = null then return;
p = Lis;
While p!= null do 
Write(INFO(p));
p = LINK(p);
end; 
4. Return

void List_Display(List* list) {
Node* node = list->firstNode;
int i = List_Length(list);
    cout << "\nDo dai cua list:\t" << i;
    if (list->firstNode == 0)
        cout << "\nList rong\r\n";
    else
    {
        while (node != 0) {
        cout << "\ndia chi cua node " << i << "\t" << &node->data;
        cout << "\nnode->data:\t\t" << node->data;
        cout << "\nnode->next:\t\t" << node->next << "\n";
        node = node->next;
        i--;
        }
    cout << endl;
    }
}

int List_Length(List* list) {
Node* node = list->firstNode;
int i = 0;
while (node != 0) {
i++;
node = node->next;
}
return i;
}

Node* List_Search(List* list, int data) {
Node* node = list->firstNode;

while (node != 0) {
if (node->data == data)
return node;
else
node = node->next;
}
return 0;
}

code của tôi 

typedef struct { char loai[30];
                float thoiluong;
                float kichthuoc;
                int tuoi;
                char xuatxu[100];
              } go;

struct Node { go A;
              Node* next; };

C1: struct List { Node* firstNode; };
    void init_list(List* l)
    { l -> firstNode = 0; }
                     (NULL)

C2: struct List { Node* firstNode;
                  Node* lastNode; };

    void init_list(List* l)
    { l -> firstNode = 0;
      l -> lastNode = 0; }
