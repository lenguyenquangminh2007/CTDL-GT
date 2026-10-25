Viết mô tả giải thuật chi tiết
Mô tả dữ liệu kiểm thử : bộ dữ liệu test và đầu vào đầu ra cho từng test case 

bài 1 tìm cặp có tổng S
cho mảng nguyên A có n phần tử và một nguyên S , vậy tìm hai phần tử sao cho chúng có tổng bằng S


ý tưởng
-nếu n<2 thì lỗi
-sắp xếp mảng tăng dần 
-đặt timthay=0
-duyệt bằng hai con trỏ ở hai đầu mảng , đặt tên cho chúng là trỏ trái và phải
-nếu tổng của hai phần tử mà hai con trỏ đang trỏ bằng S thì in cặp đó ra , khi đó timthay=1 và bỏ qua các phân từ giống hai phần tử vừa in
-tiếp tục cho đến khi trai >= phai
-nếu không tìm thấy tổng tức timthay=0 , in không có gì

testcase
1.
input
6 8 7 2 5 3 1 
10
output
(2,8) 
(3,7)

2.
input
10
1 5 1 5 2 4 2 4 3 3
6
output 
(1,5)
(2,4)
(3,3)

3.
input
7
-3 -1 0 1 2 3 4
1
output
(-3,4)
(-1,2)
(0,1)

4.
input
4
1 2 4 8
20
output 
không có gì 

5.
input 
0

6
output 
không có gì 