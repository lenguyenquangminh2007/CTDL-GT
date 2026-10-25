

cho mảng nguyên A gồm n phân tử, hãy kiểm tra xem có tồn tại một mảng con liên tiếp có tổng bằng 0 hay không. Nếu tồn tại, in ra mảng con, ngược lại in ra "Không".
mảng con belike [i, j] nếu A[i] + A[i+1] + ... + A[j] = 0
test case
input
điều kiện n>0
output 
in mảng con
nếu không tìm thấy dù n>0 thì in ra "Không".
nếu n=0 thì in ra "Không".
1. có nhiều mảng con liên tiếp có tổng bằng 0 thì in ra tất cả các mảng con đó.
 Input:
 10
3 4 -7 3 1 3 1 -4 -2 -2
Output
Mang con la:
{3,4,-7}
{3,4,-7,3,1,3,1,-4,-2,-2}
{3,1,3,1,-4,-2,-2}
{4,-7,3}
{3,1,-4}
{-7,3,1,3}

2. không có mảng con liên tiếp có tổng bằng 
input:
4
1 2 3 4
output:
"Không"

3. n=1 , phần tử là 0
input:
1
0
output:
Mang con la:
{0}

4. n=1, phần tử là !
input
1
5
output:
"Không"
5. all phân tử =0
input 
3
0 0 0
output
Mang con la:
{0}
{0,0}
{0,0,0}
{0}
{0,0}
{0}

6. Các mảng con có tổng bằng 0 chồng lấn nhau
i
3
1 -1 0
o
Mang con la:
{1,-1}
{1,-1,0}
{0}

7. mảng rỗng
i
0
o
"Không"

