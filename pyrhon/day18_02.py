#day18_02.py

#24. lambda라는 기능으로 함수 정의를 간편하게 사용(함수정의(def)와 동일)
#기본 문법

#변수명 = lambda 매개변수1,매개변수2, ... : 리턴 값
#값안에다 결과 기능 사용
#함수의 결과값이 간단하게 나올 때만 주로 사용
#변수명 == def의 함수명

#24_1)def형식
# a,b = 3, 4
# def add_sum(a,b):
#     return a + b
# print(add_sum(a,b))

#24_2)lambda형식
# c,d = 3,4
# add_sum = lambda c,d : c+d
# print(add_sum(c,d))

#24_3)lambda를 이용한 이중 함수 정의 1)
# a, b = 3,4
# add = lambda a,b:a+b
# mul = lambda a,b:a*b
# print(add(a,b), mul(a,b))


#24_4)lambda를 이용한 이중 함수 정의 2)
# mylist = [lambda a,b: a + b , lambda a,b: a*b]
# print(mylist[0](3,4))
# print(mylist[1](3,4))


#24_5)lambda에 조건문 이용(단, if ~ else만 )
# a = int(input("정수입력:"))
# def odd_is(a):
#     if a % 2 == 0:
#         return "{}는 짝수".format(a)
#     else:
#         return "{}는 홀수".format(a)

# print(odd_is(a))

# a = int(input("정수입력:"))
# odd = lambda a: "짝수" if a % 2 == 0 else "홀수"
# print(odd(a))

