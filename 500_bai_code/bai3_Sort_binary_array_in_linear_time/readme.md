Sắp xếp mảng nhị phân trong thời gian tuyến tính
Cho một mảng nhị phân, hãy sắp xếp nó trong thời gian tuyến tính và không gian bộ nhớ không đổi. Kết quả đầu ra phải in ra toàn số 0, tiếp theo là toàn số 1.
Đầu vào:  { 1, 0, 1, 0, 1, 0, 0, 1 } Đầu ra: { 0, 0, 0, 0, 1, 1, 1, 1 }
ý tưởng , cho con trỏ quét từng phần tử từ đầu tới cuối , mảng có n phần từ , tức là k phần từ 0 và n-k phần tử 1 , vậy chỉ cần quét hết mảng và đếm số lần xuất hiện số 0 là xong 