#day16_01.py

#23. 함수
#Function(함수)  : 사용자가 직접 만들거나 미리 정의된 함수를 불러와서
#               : "내가 사용하고 싶을 떼" 호출해서 사용
#함수는 어떤 한 가지의 기능을 가진 것: 함수명()

#문법

#23_1)함수 만들어서 이용하기
#1)함수를 정의
# def 임의의함수명(매개변수1, 매개변수2,...):
#     기능들
#     return 기능들이 다 된 결과값(식)   #return은 결과값을 반환해서 되돌림

#2)함수 호출
# 함수명(인수1,인수2,...)    


#23_2)예시1)
# def sam(a,b):
#     c = a + b
#     return c
# a, b = 5, 10
# num = sam(a,b)
# print(num)

#23_3)예시2)
# def sam(x,y):
#     return x+y

# a = 3
# b = 4
# print(sam(a,b))

#23_4)예시3)
# def sam(a,b):           #sam(a,b)의 a와 b가 매개변수
#     return (a+b)        #매개변수는 함수 호출 시 전달되는 값을 받는 변수
# res = sam(3,4)          #전달인수(인수)는 함수 호출 할 때, 매개변수에 전달되는 값
# print(res)

#23_5)예시4)에러 종류
#1)인수와 매개변수 갯수 불일치
# def sam(a):
#     return a
# a,b = 1,2
# c = sam(a,b)        #Error: 인수는 2개인데, 받을 매개변수는 1개
# print(c)

#2)인수와 매개변수 갯수 불일치
# def sam(a,b):
#     return a + b
# a,b = 1,2
# c = sam(a)        #Error: 인수는 1개인데, 받을 매개변수는 2개
# print(c)

#인수의 갯수가 2개면, 당연히 매개변수도 2개 있어야 한다.
#매개변수와 인수는 서로 1:1 대응관계...

#23_5)예제5) (매개변수X, 반환값O)
# def say():
#     return "딕셔너리의 values()와 keys()가 이렇죠?"
# print(say())


#23_6)예제6) 되돌려주는 값이 없는 경우(return문이 X)
# def add_sam(a,b):
#     print("{},{}의 합은 {}입니다.".format(a,b,(a+b)))

# print("먼저, 호출부터 한다.")
# add_sam(1,2)
# print("호출이 끝난 후, 다음 명령 실행")

# print(add_sam(1,2))
#add_sam(1,2)로 함수가 호출되고, print만 기능 한 후, 호출이 끝남으로
#반환값이 없기 때문에 None으로 출력(오류지만, 프로그래밍 에러는 X)

# #23_7)예제7) return문이 있을 경우
# def sub_sam(a,b):
#     result = a - b
#     print("{},{}의 차는 {}입니다.".format(a,b, result))
#     return result

# n = sub_sam(3,4)
# print("결과값: ",n)
# #print(result)   ,  #result는 sum_sam(a,b)에서만 존재하는 변수
# #print(a,b)    #매개변수와 함수 내에서 만들어진 변수들은
#                #그 함수 내에서만 존재하기 때문에 외부로 가면 "자동 소멸"이 됩니다.








