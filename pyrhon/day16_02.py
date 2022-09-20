#day16_02.py

#23_8) 예제8) 인수값이 몇개인지 알수 없을 때,
# def sum_many(*args):
#     #print(*args) : 디버깅(가변인수로 묶인거라 자료 형태가 정해져있지 않다.)
#     #print(args, type(args))
#     add = 0
#     for i in args:
#         add += i
#     return add
# res = sum_many(1,2,3,4,5,6)
# print(res)
#인수값이 몇 개든 상관없이, *args처럼 매개변수명 앞에 *을 붙이면
#함수 호출 시 인수값들을 전부 모아서 "튜플형태"로 만들어줍니다.
#args는 arguments(인수값)로 명칭을 "가변인수"라 한다.
#가변인수는 *원하는이름 만 표현하면 다 가변인수로 표한 가능
#ex) *args대신, *a


#23_9) 예제9) 인수값을 문자열과 숫자로 구성
# def sum_mul(choi, *args):
#     if choi == "sum":
#         res = 0
#         for i in args:
#             res += i
#     elif choi == "mul":
#         res = 1
#         for i in args:
#             res *= i
#     else:
#         res = "None"
#         print("잘못입력해서 결과: None")
#     return res

# res1 = sum_mul("sum", 1,2,3,4,5)
# print(res1)
# res11 = sum_mul("sum", 1,1.1,2,2.2,3,3.3)
# print(res11)
# res2 = sum_mul("mul", 1,2,3,4,5)
# print(res2)
# res3 = sum_mul("a", 1,2,3,4,5)
# print(res3)

#23_10)가변인수, 매개변수
# def sum_mul(*args):
#     print(args)
#     if choi == "sum":
#         res = 0
#         for i in args:
#             res += i
#     elif choi == "mul":
#         res = 1
#         for i in args:
#             res *= i
#     else:
#         res = "None"
#         print("잘못입력해서 결과: None")
#     return res
# print(sum_mul(1,2,3,   "mul"))

#가변인수는 모든 인수를 다 받기 때문에 항상 마지막에 표현 해야한다.


#23_11)키워드 파라미터(매개변수) kwargs
#**kwargs: 딕셔너리 인수값들만 받는 매개변수( 변수명(키) = 값  으로 묶인 인수값)
# def dic_kwargs(**kwargs):
#     #print(kwargs)  : 디버깅({}로 묶이는 것 확인)
#     return [ i for i in kwargs]
#     # for i in kwargs:
#     #     lt.append(i)
#     # return lt

# k_res = dic_kwargs(a=1,b=2,c=3)
# print(k_res)

# print({"a":1,"b":2,"c":3}.keys())
# print(list({"a":1,"b":2,"c":3}.keys()))






