Tìm phần tử trùng lặp trong mảng có phạm vi giới hạn.
Cho một mảng có phạm vi giới hạn kích thước nchứa các phần tử từ 1 đến n, n-1trong đó có một phần tử lặp lại, hãy tìm số trùng lặp trong mảng mà không sử dụng thêm bất kỳ không gian nào.

Ví dụ,

Đầu vào:  { 1, 2, 3, 4, 4 }Đầu ra: Phần tử trùng lặp là 4  Đầu vào:  { 1, 2, 3, 4, 2 }Đầu ra: Phần tử trùng lặp là 2
Sử dụng hàm băm

Sử dụng phép XOR
Chúng ta cũng có thể giải quyết vấn đề này bằng cách thực hiện phép XOR của tất cả các phần tử mảng có số từ 1 đến n-1. Vì các phần tử giống nhau sẽ triệt tiêu lẫn nhau khi a^a = 0, 0^0 = 0và a^0 = a, nên ta sẽ còn lại phần tử trùng lặp.

