#day15_01.py

#20. 딕셔너리 복습
#{ key: value}   키:값 으로 한 쌍으로 이루어진 자료형

# #20_1)딕셔너리 값 추가해보기
# a = {"이름" : "홍길동"}   #dict()함수
# print(a)
# a["나이"] = 28
# print(a)
# a[28] = 23      #새로운 28키로 23값을 추가
# print(a)
# a[1.23] = "1.23"
# print(a)
# #딕셔너리는 자료값 추가는 인덱스[key]로 다 할 수 있다.
# #a[{"a" : 1}] = [1,2,3]   #unhashable에러는 딕셔너리자료의 키를 정의할 때,
#                          #자료형식이 list,dict을 제외한 나머지는 가능
#                          #key는 변경이 되면 안되기 때문에 튜플은 가능
# a[(1,2,3)] = [1,2,3]
# print(a)
# #20_2)딕셔너리 값 삭제
# #del 딕셔너리변수명[key]
# del a["나이"]
# print(a)
# #없는 키를 삭제? 없는 걸 삭제는 불가능
# #del a["최강"]

#딕셔너리는 중복된 키 값을 사용 X
#사용하면 기존에 잇던 키는 삭제가 되고 새로 추가된 키가 생성이 됩니다.
#key는 그대로 사용하고 value 값만 변경하면 됩니다.
# a = {"a": 1, "b":2}
# print(a)
# a["a"] = 100
# print(a)

# #value 값은 중복이 가능
# a = {"1": 10, "2": 20}
# print(a)
# a["3"] = 20
# print(a)




