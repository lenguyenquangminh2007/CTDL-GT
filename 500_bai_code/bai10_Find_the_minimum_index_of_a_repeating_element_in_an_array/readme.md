Tìm chỉ số nhỏ nhất của phần tử lặp lại trong mảng.
Cho một mảng số nguyên, hãy tìm chỉ số nhỏ nhất của một phần tử lặp lại trong thời gian tuyến tính và chỉ thực hiện một lần duyệt mảng.
Ví dụ,

Đầu vào:  { 5, 6, 3, 4, 3, 6, 4 }Đầu ra: Chỉ số nhỏ nhất của phần tử lặp lại là 1  Đầu vào:  { 1, 2, 3, 4, 5, 6 }Đầu ra: Đầu vào không hợp lệ

Dùng mảng đếm count theo hàm findMinIndex trong code của bạn.

Nếu n <= 1, trả về -1 vì không có phần tử lặp.
Duyệt mảng để tìm giá trị lớn nhất max_val.
Tạo mảng count gồm max_val + 1 phần tử, ban đầu đều bằng 0. Khởi tạo min_index = -1.
Duyệt i từ n - 1 về 0. Nếu count[arr[i]] > 0, cập nhật min_index = i vì giá trị này đã xuất hiện ở bên phải. Sau đó tăng count[arr[i]] lên 1.
Trả về min_index. Trong main, nếu kết quả là -1 thì in Invalid Input; ngược lại, in chỉ số tìm được.
Vì duyệt từ phải sang trái, mỗi lần cập nhật đều nhận được chỉ số nhỏ hơn trước. Sau khi duyệt xong, min_index chính là chỉ số nhỏ nhất của phần tử lặp. Không dừng ngay khi gặp phần tử lặp đầu tiên trong quá trình duyệt.

Gọi M là giá trị lớn nhất trong mảng:

Thời gian: O(n + M), gồm tìm giá trị lớn nhất, khởi tạo mảng đếm và duyệt từ phải sang trái.
Bộ nhớ phụ: O(M + 1) để lưu mảng count.