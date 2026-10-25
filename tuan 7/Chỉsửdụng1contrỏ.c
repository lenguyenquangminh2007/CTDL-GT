#include <stdio.h>

// Định nghĩa cấu trúc dữ liệu gỗ theo yêu cầu của bạn
typedef struct { 
    char loai[30];
    float thoiluong;
    float kichthuoc;
    int tuoi;
    char xuatxu[100];
} go;

// Định nghĩa Node
struct Node { 
    go A;
    struct Node* next; 
};

// Hàm gán chuỗi thủ công không dùng string.h
void ganChuoi(char* dest, const char* src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// ==========================================
// CÁCH 1: Sử dụng 1 con trỏ (firstNode)
// ==========================================
struct List1 {
    struct Node* firstNode;
};

void List_Init1(struct List1* list) {
    list->firstNode = 0; // NULL
}

// Duyệt danh sách Cách 1 (mô phỏng thuật toán TRAVERS)
void List_Display1(struct List1* list) {
    if (list->firstNode == 0) {
        printf("\nList rong\n");
        return;
    }
    struct Node* p = list->firstNode;
    int i = 1;
    printf("\n--- DUYET KHO GO (Cach 1 - 1 con tro) ---\n");
    while (p != 0) {
        printf("\nNode thu %d:", i++);
        printf("\n  Loai go: %s", p->A.loai);
        printf("\n  Thoi luong: %.2f", p->A.thoiluong);
        printf("\n  Kich thuoc: %.2f", p->A.kichthuoc);
        printf("\n  Tuoi: %d", p->A.tuoi);
        printf("\n  Xuat xu: %s", p->A.xuatxu);
        p = p->next; // LINK(p)
    }
}

// ==========================================
// CÁCH 2: Sử dụng 2 con trỏ (firstNode, lastNode)
// ==========================================
struct List2 {
    struct Node* firstNode;
    struct Node* lastNode;
};

void List_Init2(struct List2* list) {
    list->firstNode = 0;
    list->lastNode = 0;
}

// Duyệt danh sách Cách 2 (mô phỏng thuật toán TRAVERS)
void List_Display2(struct List2* list) {
    if (list->firstNode == 0) {
        printf("\nList rong\n");
        return;
    }
    struct Node* p = list->firstNode;
    int i = 1;
    printf("\n--- DUYET KHO GO (Cach 2 - 2 con tro) ---\n");
    while (p != 0) {
        printf("\nNode thu %d:", i++);
        printf("\n  Loai go: %s", p->A.loai);
        printf("\n  Thoi luong: %.2f", p->A.thoiluong);
        printf("\n  Kich thuoc: %.2f", p->A.kichthuoc);
        printf("\n  Tuoi: %d", p->A.tuoi);
        printf("\n  Xuat xu: %s", p->A.xuatxu);
        p = p->next; // LINK(p)
    }
}

int main() {
    // Kiểm tra mẫu Cách 1
    struct List1 l1;
    List_Init1(&l1);
    List_Display1(&l1);

    // Kiểm tra mẫu Cách 2
    struct List2 l2;
    List_Init2(&l2);
    List_Display2(&l2);

    return 0;
}