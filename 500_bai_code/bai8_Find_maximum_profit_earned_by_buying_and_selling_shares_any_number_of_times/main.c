#include <stdio.h>

void tim(int gia[], int n) {
    if (n <= 1) return;
    int i = 0;
    int loinhuan = 0;
    
    while (i < n - 1) {
        while (i < n - 1 && gia[i] >= gia[i + 1]) {
            ++i;
        }
        int ngaymua = i;
        
        while (i < n - 1 && gia[i] <= gia[i + 1]) {
            ++i;
        }
        int ngayban = i;
        
        if (ngayban > ngaymua) {
            loinhuan += gia[ngayban] - gia[ngaymua];
            printf("ngay mua : %d ngay ban : %d\n", ngaymua,ngayban);
        }
    }
    printf("loi nhuan : %d\n", loinhuan);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    
    int gia[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &gia[i]);
    }
    
    tim(gia, n);
    return 0;
}