#day09_01.py
'''
#15_  if문 계속
x = 15
#크기 비교 연산자 조건
if x > 15:print('15보다 크다')

if x == 15: 
    print('15와 같다')
    print()
    a = 1

if x > 10 and x != 15:
    print("거짓이다.")

if type(x) is int :
    print("정수다")

if x not in (10,11,15):
    print("없다")

if True:
    print("참이다")
if False:
    print("거짓이다")

#예외 조건식
#1)90이상 100미만 판별식
var = 100
if 90 <= var and var < 100:   #논리곱(모든 프로그래밍 언어)
    print("{}는 90이상 100미만이다.".format(var))

#2)파이썬만 가능
var1 = 89
if 90 <= var1 < 100:
    print("{}는 90이상 100미만이다.".format(var1))
'''

#예제) 조건식으로 홀수,짝수 판별
n = input("정수 입력: ")
nmg = int(float(n)) % 2  
if nmg == 0:
    print("{}이 나머지가 {}로 짝수다.".format(int(float(n)),nmg))
if nmg != 0:   #nmg == 1
    print("{}이 나머지가 {}로 홀수다.".format(int(float(n)),nmg))