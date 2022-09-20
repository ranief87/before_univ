
# 딕셔너리에서 사용하는 함수들 보기

# get(x,y)        # get(x)는 x에 키를 넣을 시 값을 얻는 함수
                  # get(x,y)는 x에 키를 넣을 시 y에 원하는 값 저장 가능
'''
dic={"a":2,"b":7}
print(dic.get("a"))  # a라는 키에 있는 값을 출력(검색)
print(dic)
'''
 # print(dic["c"]) keyerror # 없는 키는 불가능
'''
print(dic.get("c"))  # error 안 뜸 none (디폴트값)

print(dic.get("d","값이 없습니다"))
'''
# update(x)  # 딕셔너리 요소 값을 추가 및 변경
'''
dic={"a":2,"b":7}
'''
# fromkeys


# keys values


#keys 딕셔너리 key값들만 모아줌 객체형태

'''
a={"a":2,"b":7}
print(a.keys())
k=a.keys()
print(k,type(k))  # dict_keys 라는 키값만 묶은 자료형
'''
# 키값만 묶인 자료형 k를 튜플과 리스트로 묶기(튜플,리스트 자료형 변환 함수 이용)
'''
lt_keys=list(k)
tu_keys=tuple(k)

print(lt_keys,type(lt_keys))
print(tu_keys,type(tu_keys))
'''
# values()  딕셔너리 안에서 value에 해당하는 값만 모아서 객체 형태로 변환해주는 함수

b={"a":5,"b":17}
print(b.values())

# 값들만 따로 모아서 묶은 자료형( dict_values())
print(list(b.values()),tuple(b.values()))



# items() key와 value 값을 한 번에 tuple형태로 변환 후 반환
print(b.items())

# popitem()
popitem

    



