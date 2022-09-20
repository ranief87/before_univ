#day10_01.py

#15.제어문: 반복문(while)
#반복문이란? 유사한 명령을 반복해서 실행하는 제어문
#while문은 if문에서 사용하는 조건식을 이용
# 조건식이 거짓일 때까지 무한 반복
# while은 종속문장을 다 실행하면 다시 자신의 조건식을 비교
# if문과 마찬가지로 들여쓰기 적용

#15_1)기본 사용 문법
'''
#초기값        #ex) a = 0  -> 반복문의 조건에 들어갈 초기값
              #한번 선운 후, 역할이 끝
while 조건식(값):
    반복할 기능들
    증감식     #(증감식은 필수는 아닙니다.)
while이 끝난 후 다음것들
'''

#15_2)무한 반복 예시
#15_2_1)초기값,증감식있는 상태의 무한반복
'''
a = int(input("정수값 입력: "))

while a:
    a += 1
    print(a)
    #a += 1
print(a)
'''

#15_3)조건식 범위 잡기
#15_3_0) True/False

#while True:
#    print(True)
#while False:
#    print(False)

#15_3_1)1 ~ 5까지 반복
'''
a = 1
while a < 6:
    print(a, end=",")
    a += 1
print()
print("a : {}".format(a))
'''
'''
#15_3_2)1 ~ 5까지 반복(초기값이 다른 경우)
a = 0
while a < 5:
    a += 1
    print(a, end=",")
print()
print("a : {}".format(a))
'''

#15_3_3) 5 ~ 0 까지 반복
'''
a = 5
while a >= 0:
    print(a,end=" ")
    a -= 1
'''
#15_3_4) 10 ~ 0이 될 때까지 반복(즉, 0이면 멈추게 하기)
a = 10
while a != 0 :             #a > 0
    print(a,end=" ")
    a -= 1
print("\n",a)