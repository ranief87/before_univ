#day15_03.py

#22.딕셔너리에서 사용하는 함수들 보기

#22_1)get(x,y)          #1)get(x)는 x에 키를 넣을시 값을 얻는 함수
                        #2)get(x,y)는 x에 키를 넣을시, y는 원하는 내용 지정 가능
# dic = {"a":1,"b":2,"c":3}

# print(dic.get("a"))     #"a"키에 있는 값을 얻어서 출력(검색)
# #print(dic["a"])        #위와 동일한 의미
# print(dic)

# #print(dic["d"])        #KeyError: 없는 키는 인덱스(키)로 검색 X
# print(dic.get("d"))     #에러가 아닌 존재하지 않는 키를 검색시
#                         #얻을게 없음으로 None을 출력(디폴트값)
# print(dic.get("d","값이 없습니다."))

#get은 값을 검색용도로 사용하며, 값이 없어도 에러를 발생시키지 않는다.
#딕셔너리 전용 함수

#22_2)update(x)           #update(x)의 x는 딕셔너리만 올 수 있고,
                          #딕셔너리 요소값을 추가 및 변경하는 함수
# dic = {"a": 1, "b" : 2, "c": 3}
# print(dic)
# dic.update({"d":123, "a" : 100})
# print(dic)


#22_3)keys()와 values()
# keys 함수는 딕셔너리 안에 key 값만 따로 모아서 객체 형태로 반환을 해주는 함수
# a = {"1": 10, "2": 20}
# print(a.keys())
# k = a.keys()
# print(k, type(k))   #dict_keys라는 키값만 모은 자료형
# #키값만 묶인 자료형k를 튜플과 리스트로 묶기(튜플,리스트 자료형 변환 함수 이용)
# lt_key = list(k)
# tp_key = tuple(k)
# print(lt_key, type(lt_key))
# print(tp_key, type(tp_key))
# #d = dict(k)

# lt = list(a)
# tu = tuple(a)
# print(lt, tu)
#list(), tuple()로 딕셔너리 자료를 변환시 키만 묶임

# 
# values 함수는 딕셔너리 안에서 value에 해당하는 값만 모아서 객체 형태로 반환을 해주는 함수
# a = {"A" : 1, "B" : 2}
# print(a.values())   #값들만 따로 모아서 묵은 자료형(dic_values())
# print(list(a.values()), tuple(a.values()))  #리스트,튜플로 변환해서 묶기

#22_4)items()와 popitem()
#items 함수는 딕셔너리 안에 key와 value 값을 모아서 객체 형태로 반환(안에 요소는 튜플: (키,값))
# a = {"A" : 1, "B" : 2}
# print(a.items())     #dict_items()라는 자료형(키와값)
# lt_item = list(a.items())
# tu_item = tuple(a.items())
# print(lt_item, tu_item)

#popitem() 함수는 딕셔너리에 맨 뒤에 있는 딕셔너리 요소값을 튜플형태의 객체로 반환 후, 삭제
# a = {"A" : 1, "B" : 2}
# print(a)
# print(a.popitem())
# print(a)            #딕셔너리 자료 하나 뽑은 후, 소멸


#22_5)in
#in는 입력한 key 값이 딕셔너리 안에 있는지 찾아주는 연산자
# a = {"A" : 1, "B" : 2}
# print("A" in a)   #멤버 연산자(대상은 key)

#22_6)isdecimal() 함수는 입력한 문자열이 정수형으로 변환이 가능한지 판별(True,False)
# a = "123"
# b = (1,2,3)
# c = [1,2,3]
# d = {"A" : 1, "B" : 2}
# e = 123

# print(a.isdecimal())
# print(e.isdecimal())

#문자열을 정수형으로 변환 판단 함수임으로 대상은 오로지 "문자열만" 가능한 함수






