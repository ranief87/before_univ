# 숫자형(진법)
#2진법 0  1    0b
#10진법 0 1 2 3 4 5 6 7 8 9           
#8진법 0 1 2 3 4 5 6 7                0o
# 16진법 0 1 2 3 4 5 6 7 8 9 A B C D E F   0x
# 8bit=1byte

#3_1 진법 표현
print(0b100)
#bin() 2진수
#oct() 8진수
#hex() 16진수
print(0o100)
print(0x100)

#3_2 진법 변환 함수
print(bin(100), oct(100), hex(100))

#3_3 진법 변환으로 연산식 표현
print(hex(1024))
print(hex(1035 + 1013))
print (bin(0x5C90+0o652))
print(0x5c90)
print(0o652)
# print(bin(hex(5c90)+ oct(652))) 오류 
# 진법 변환 함수는 결과를 문자열 형태로 표현!
