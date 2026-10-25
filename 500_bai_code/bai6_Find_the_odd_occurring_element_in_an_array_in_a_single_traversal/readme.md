Tìm phần tử xuất hiện lẻ trong mảng chỉ bằng một lần duyệt.
Cho một mảng số nguyên, trong đó có các phần tử trùng lặp theo thứ tự số lần xuất hiện chẵn, ngoại trừ một phần tử xuất hiện lẻ. Hãy tìm phần tử xuất hiện lẻ đó trong thời gian tuyến tính và không sử dụng thêm bộ nhớ.
Ví dụ,

Đầu vào:  arr[] = [4, 3, 6, 2, 6, 4, 2, 3, 4, 3, 3] Đầu ra: Phần tử xuất hiện lẻ là 4
Với đầu vào chứa ncác phần tử, chúng ta có thể sử dụng hàm băm để giải quyết vấn đề này trong thời gian O(n) . Ban đầu, chúng ta duyệt qua mảng và lưu trữ tần suất của mỗi phần tử trong bảng băm. Sau đó, sau khi mỗi phần tử trong mảng được xử lý, trả về phần tử có tần suất lẻ. Vấn đề với phương pháp này là nó cũng yêu cầu không gian bổ sung O(n) . Ngoài ra, nó yêu cầu một lần duyệt qua mảng và một lần duyệt qua bảng băm.

 Chúng ta có thể giải quyết vấn đề này chỉ với một lần duyệt mảng và không gian bộ nhớ không đổi. Ý tưởng là sử dụng toán tử XOR. Chúng ta biết rằng nếu ta thực hiện phép XOR một số với chính nó một số lần lẻ, kết quả sẽ là chính số đó; ngược lại, nếu ta thực hiện phép XOR một số với chính nó một số lần chẵn, kết quả sẽ là 0. Ngoài ra, phép XOR của một số với 0 luôn cho kết quả là chính số đó.
 Phép XOR của 'x' với 0: x ^ 0 = x  Phép XOR của 'x' với chính nó một số lần chẵn: x ^ x = 0x ^ x ^ x ^ x = (x ^ x) ^ (x ^ x) = 0 ^ 0 = 0  Phép XOR của 'x' với chính nó một số lần lẻ: (x ^ x ^ x) = (x ^ (x ^ x)) = (x ^ 0) = x(x ^ x ^ x ^ x ^ x) = (x ^ (x ^ x) ^ (x ^ x)) = (x ^ 0 ^ 0) = x
Vì vậy, nếu ta thực hiện phép XOR của tất cả các phần tử trong mảng, các phần tử xuất hiện chẵn sẽ triệt tiêu lẫn nhau, và ta chỉ còn lại phần tử xuất hiện lẻ. 