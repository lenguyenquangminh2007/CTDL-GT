đệ quy
nếu chỉ có 1 đĩa , chuyển đĩa đó từ A sang C 
nếu có n đĩa , chuyển n-1 đĩa từ A sang B
chuyển đĩa thứ n sang cọc C rồi chuyển n-1 đĩa ở B sang C
cần chuyển n đĩa từ a sang c , b làm trung gian 
chuyển n-1 đĩa từ a sang b , c làm trung gian 
chuyển 1 đĩa còn lại ở a sang c , b làm trung gian 
chuyển n-1 đĩa từ b sang c , a làm trung gian  
test case 1
input 
số đĩa n=1
cọc A B C 
output
A-C
test case 2
n=3 
A-C   
A-B   
C-B   
A-C   
B-A   
B-C   
A-C
có 7 bước , đúng với 2^3-1
khử đệ quy
trò chơi có giới hạn đĩa từ 3 đến 5 đĩa
do đó dùng if cho từng trường n đĩa để đưa ra các đáp án 
test case
n=3
A-C   
A-B   
C-B   
A-C   
B-A   
B-C   
A-C