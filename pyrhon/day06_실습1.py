#day06_실습1.py

#Quiz) 다음과 같은 자료형 요소값들이 있습니다.
a = [1,2, ['a','b',['Life','Live']]]
b = (3,4, ('c','d',('Hello','Hi')))      

#1) 인덱스로 b자료형 안에 4와 'c'와 'Hi' 추출
print(b[1], b[2][0], b[2][2][1], sep = " , ")
#2) 인덱스로 a자료형 안에 1,'a','Life'를 10, 'A', 'LIFE'로 변경
a[-3] = 10
a[-1][-3] = 'A'
a[-1][-1][-2] = "LIFE"
print(a)
#3) 슬라이싱으로 a자료형에 있는 값 'b','LIFE','Live'를 출력
print(a[2][1:])