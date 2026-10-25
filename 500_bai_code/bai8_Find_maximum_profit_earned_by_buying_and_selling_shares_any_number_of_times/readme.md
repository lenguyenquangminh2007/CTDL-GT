Tìm lợi nhuận tối đa có thể kiếm được bằng cách mua và bán cổ phiếu bất kỳ số lần nào.
Cho một danh sách chứa các dự đoán về giá cổ phiếu trong tương lai, hãy tìm lợi nhuận tối đa có thể kiếm được bằng cách mua và bán cổ phiếu nhiều lần với điều kiện ràng buộc là giao dịch mới chỉ có thể bắt đầu sau khi giao dịch trước đó hoàn tất, tức là mỗi người chỉ có thể nắm giữ tối đa một cổ phiếu tại một thời điểm.
Ví dụ,

Giá cổ phiếu: {1, 5, 2, 3, 7, 6, 4, 5} Tổng lợi nhuận thu được là 10 Mua vào ngày 1 và bán vào ngày 2Mua vào ngày 3 và bán vào ngày 5Mua vào ngày 7 và bán vào ngày 8  Giá cổ phiếu: {10, 8, 6, 5, 4, 2} Tổng lợi nhuận thu được là 0

Bài toán hiện tại cho phép chúng ta thực hiện số lượng giao dịch cổ phiếu không giới hạn. Ý tưởng là duyệt qua danh sách giá đã cho và tìm điểm cực tiểu cục bộ của mỗi dãy tăng dần. Ví dụ, các dãy tăng dần có độ dài từ 2 trở lên trong mảng {1, 5, 2, 3, 7, 6, 4, 5}là {1, 5}, {2, 3, 7}, và {4, 5}. Điểm cực tiểu cục bộ của mỗi dãy lần lượt là 1, 2 và 4. Chúng ta có thể thu được lợi nhuận tối đa nếu mua cổ phiếu ở đầu mỗi dãy tăng dần (điểm cực tiểu cục bộ) và bán chúng ở cuối dãy tăng dần (điểm cực đại cục bộ).