#day05_실습1.py

#1)사칙연산(+,-,*,/)을 할 때, 두 개 변수값은 입력 받아서 결과 출력
#예시)결과는 "x + y = "  x+y 로 결과를 나타냅니다.
#x, y =  int(input("숫자1 입력: ")), float(input("숫자2 입력: "))
#print("{} + {} = {}".format(x,y, x + y))
#print("{} - {} = {}".format(x,y, x - y))

#2)다음을 출력합니다
#최강님의 비만도는 x%입니다.
#비만도 계산:  본인체중/((본인의 키 - 100) * 0.9) * 100 으로 계산
#(단, 진짜 본인걸 하지는 마세요... 사생활 침해 -ㅅ-)
#name = input("이름: ")
#weight = float(input("체중(숫자): "))
#height = float(input("신장(숫자): "))
#비만도 = weight/((height - 100) * 0.9) * 100
#print("{}님의 비만도는 {:.2f}%입니다.".format(name,비만도))


#3)두 변수에 값을 입력받은 후 저장된 값을 서로 바꿔서 결과 출력
#힌트: 값을 서로 바꿀 땐, 새로운 임시변수
'''
a = int(input("정수a 입력: "))
b = int(input("정수b 입력: "))
print("바꾸기 전: {}   {}".format(a,b))  # 10 20
temp = a
a = b
b = temp
print("바꾼 후: {}   {}".format(a,b)) 
'''

#4)수강생 과목 정보입니다
#수강생 이름, Python, Linux, Windows, Network의 점수를 입력받고,
#점수들값과 합계, 평균을 구해서 출력 
#결과출력은 밑에 결과와 동일하게 나오게 합니다.


Student = input("수강생 : ")
Py = int(input("파이썬점수 :"))
L = int(input("리눅스점수 :"))
W = int(input("윈도우점수 :"))
N = int(input("네트워크점수 :"))

Hap = Py + L + W + N
Avg = Hap/4

print(60 * "=")
print("{}\t{}\t{}\t{}\t{}\t{}\t{}".format("수강생",
"파이썬","리눅스","윈도우","네트워크","합계","평균"))
print("{}\t{}\t{}\t{}\t{}\t\t{}\t{}".format(Student,Py,L,W,N,Hap,Avg))
print(60 * "=")






















