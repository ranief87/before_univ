#day18_03.py

#25.Class(클래스)
# 1. 함수들과 변수들의 모임
# 2. 클래스 안에는 객체(인스턴스)를 만들어서 사용
# 객체(Object)란? 정의는 물리적, 추상적으로 표현 할 수 있는 모든 것들이 다 객체

#예를 들면, 햄버거로 따지면, 햄버거가 클래스가 됩니다.
#그러면, 햄버거를 만들려면 재료들이 필요한데 그 재료들이 각각 객체가 됩니다.
#재료에는 빵, 패티, 양상추, 토마토, 치즈 등 들어가겠죠?
#햄버거마다 들어가는 양이나 종류들이 다르기 때문에 그 들어가는 재료들이 함수나 변수명으로
#객체 따로 저장되서 각각의 레시피
# 즉, 객체들을 만들어서 햄버거 종류들의 만드는 과정이 클래스와 객체가 됩니다.


#25_1)문법
# class 클래스명:
#     임의의함수명정의():
#         기능들
#클래스 형태
# class 햄버거:           #햄버거라는 객체를 정의(선언)
#     치즈버거 = 햄버거()  #햄버거()클래스를 이용해서 치즈버거라는 객체 생성
#     def setdata():
#         빵,패티,치즈    #치즈버거에 들어갈 재료들이 모인 함수

# print(치즈버거.setdata())

#25_2): 클래스없이 덧셈함수만 정의한 경우
# result = 0
# def add(num):
#     global result
#     result += num
#     return result

# print(add(3))      #3
# print(add(4))      #7

#25_3) 클래스 안에 함수를 정의한 경우
# result = 0
# class SAM:
#     def add(num):
#         global result
#         result += num
#         return result

# print(SAM.add(3))      #3
# print(a)      #7


# #25_4)클래스 객체 불러오기
# class Cal:
#     a = Cal()
#     def setdata(n,m):
#         n = 1
#         m = 2
#     def add(n,m):
#         return n+m

# print(Cal.add(3,4))
