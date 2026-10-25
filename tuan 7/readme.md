Các bài toán 
Tìm kiếm một phần tử theo một tiêu chí xác định
Cập nhật một phần tử
Sắp xếp các phần tử theo một thứ tự ấn định
Ghép hai hoặc nhiều danh sách thành một danh sách lớn
Tách một danh sách thành nhiều danh sách con

Mỗi phần tử của danh sách lưu trữ trong 1 ô nhớ gọi là “node”

Mỗi node gồm 2 trường thông tin 
Trường INFO: chứa thông tin về phần tử trong danh sách
Trường LINK: chứa địa chỉ của phần tử tiếp theo // tại sao lại là phần tử tiếp theo mà không phải là phần tử hiện tại 

Node cuối cùng không có địa chỉ tiếp theo ở trường LINK -> địa chỉ null hay “mối nối không”

Để truy cập vào mọi node trong danh sách thì phải biết được địa chỉ của node đầu tiên

Giá trị của con trỏ H trỏ tới nút đầu tiên 

Mỗi nút có thể nằm bất kỳ trong bộ nhớ

Địa chỉ ở trường link là địa chỉ của nút kế tiếp 

Các thao tác cơ bản con trỏ :
Khởi tạo (khai báo): int * P;
Lấy địa chỉ 1 đối tượng: int A; P = &A;
Truy nhập vào đối tượng được trỏ: *P = 20;
Cấp phát bộ nhớ động cho đối tượng DL động: P = new int;
Giải phóng đối tượng DL động:  delete P;

Khai báo cấu trúc:
struct  Node {
    Type info;
    Node* next; 
}; 
typedef Node*  LinkedList;

Cách 1: sử dụng 1 con trỏ duyệt 
struct Node {
int data;
Node* next;
};

struct List {
Node* firstNode;
};
void List_Init(List* list) {
list->firstNode = 0;  //NULL
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

bài toán Tìm kiếm một phần tử theo một tiêu chí xác định
ý tưởng duyệt tuần tự qua từng nút:

Khởi tạo vị trí xuất phát: con trỏ duyệt bắt đầu từ nút đầu tiên của danh sách

Kiểm tra điều kiện: Tại mỗi nút hiện tại, so sánh xem nó có đúng tiêu chí của mình không

Nếu đúng, ok

Nếu sai, con trỏ next

input 
A[]=3,7,5,12
scanf( tiêu chí %d, &n)
output
printf("vị trí là 3)

Duyệt danh sách 
Bổ sung một nút 
Loại bỏ một nút
Ghép đôi hai danh sách 

Duyệt danh sách:
Thăm từng nút 
Mỗi nút thăm một lần và thực hiện một phép xử lý 
Con trỏ Lis luôn trỏ đến nút đầu tiên. Dùng biến p để ghi nhận địa chỉ của từng nút

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
