#day08_02.py

#13_2)딕셔너리 함수
dic1 = {"a" : 1, "b" : 2, "c" : 3}
dic2 = {"d" : 4, "e" : 5, "f" : 6}

#update(x)          #update(x)의 x는 딕셔너리형만 올 수 있으며,
                    #딕셔너리 자료 값을 변경하는 함수
dic1.update({"a" : 10})
print(dic1)
dic2.update({"a" : 10})   #없는 사전형을 update할시 사전형 값 추가!
print(dic2)
#dic1.update(1,{"d" : 1}) #인수값은 딕셔너리 딱 하나만 표현(인덱스 추출 X)

print()
#fromkeys(x,y)          #1)fromkeys(x)는 딕셔너리의 x자료로 키값만 부여
                        #2)fromkeys(x,y)는 x로 키값 설정, y로 값 결정
k = ["a","b","c","d"]  #키 설정
dic1,dic2 = {},{}      #빈 딕셔너리 초기화
print(dic1,dic2)

#1)
#dic1 = dic1.fromkeys(k)
#print(dic1)

#2)
dic2  = dic2.fromkeys(k, 1)
print(dic2)
dic2 = dic2.fromkeys(k,[1,2,3,4])    #키값들만 따로 부여 후, 동일한 값 저장
print(dic2)


print()

#values()함수는 딕셔너리 안에 value값만 해당하는 걸 모아서 반환
a = {"a": 10, "b" : 20}
a_v = a.values()
print(a_v)
print(tuple(a_v)); print(list(a_v))

print()
#items 함수는 딕셔너리 안에 key와 values 값을 한번에 튜플형태로 저장 후, 반환
a = {"A":1,"B":2}
print(a.items())
a_i = a.items()
print(tuple(a_i)); print(list(a_i))

#popitem 함수는 딕셔너리 안에 key와 values 값을 한번에 튜플형태로 저장 후, 반환 후, 소멸
print("초기값 a : {}".format(a))
b = a.popitem()
print(b)    #popitem이 a에 마지막 사전값을 뽑은 후, 반환해서 저장
print(a)

# in 
# in은 입력한 key 값이 딕셔너리 안에 있는지 찾아주는 연산자
a = {"이름" : "최강", "나이" : 28}
print("이름" in a)
print(28 in a)    #딕셔너리의 in 멤버연산자는 키만 찾을 수 있으며, value는 대상 X

print()
#get(x,y)            #1)get(x)는 x에 키를 넣을시 값을 얻는 함수
                     #2)get(x,y)는 x에 키를 넣을시, y는 원하는 문구(부연설명) 정의 가능
dic = {"a": 1, "b" : 2, "c" : 3}
print(dic.get("a"))  #"a"키에 들어있는 값:1을 얻고(반환) 출력
print(dic)           #pop과는 다르게 삭제 X
                     #dic["키값"]으로 한 거랑 동일

print(dic.get("d"))  #get("키")에서 없는 키값으로 값 추출 시
                     #인덱스로 부른 것과 다르게 에러를 내지 않고,
                     #얻을게 없음으로 None으로 출력

print(dic.get("d", "이런 키값은 없어..."))

#에러를 안내기 위한 녀석!






