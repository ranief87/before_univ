#day09_02.py

#14_2)조건문(if ~ else문)
'''
#문법
if 조건식:              #조건식이 "참"이면,
    수행문1             #수행문1,2를 실행 후, if문 종료
    수행문2
else:                  #조건식이 "거짓"이면,
    수행문3             #수행문3 실행 후, if문 종료
if문끝난후 실행문들     #if문 끝난 후, 진행
'''
'''
#예시
money = 3000
card = False

if card or money >= 4000:
    print("택시")
else:
    print("걷기")
'''
'''
#Quiz_1) 짝,홀수 판별을 if else문으로 고쳐보기
n = int(input("정수 입력: "))

if n % 2 == 0:
    print("{}는 짝수다.".format(n))
else:
    print("{}는 홀수다.".format(n))
'''
'''
#예제1)
hong_number = 23
lucky_list = [1,9,23,46,78]
if hong_number in lucky_list:
    print("당첨!")

#예제2)
hong_num = 23
lucky_tuplt = (1,9,[23,46,78])
if hong_num in lucky_tuplt[2]:
    print("당첨")
'''
'''
#예제3)
P = "나이 : 28, 키 : 170.25"
#print(P)
temp = P.split(",")
#print(temp)

age = temp[0].split(":")[1]
height = P.split(",")[-1].split(":")[-1]
age = int(age)
height = float(height)

if age < 28 and height >= 170:
    print("yes")
else:
    print("no")
'''


