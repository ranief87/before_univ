#day08_01.py

#13. <자료형의 내장 함수들>

#13_1)리스트 함수들
#append()        #리스트의 요소(값)를 추가하는 함수
lst = [1,2,3]
print("초기lst : {}".format(lst))
lst.append('a')     #요소는 마지막 인덱스 부분에 추가
print("append 후 : {}".format(lst))

#print(lst.append('b'))  #append()는 값만 추가를 하는 함수라 반환 출력 대상 X
#print(lst)

lst.append([{'1':10,"2":20},[3,4],("ab","cd",[5,6,7])])
print(lst)   #append는 요소 값 '하나만'

print()
#extend()     #리스트의 요소값을 확장시킨 후 추가하는 함수
lst = [1,2,3]
print("초기lst: {}".format(lst))
lst.extend("a")
print(lst)
lst.extend(['a','b',(123,456)])
print(lst)
#장점: 하나의 자료형을 여러개로 확장(풀어서 안에 같은 요소값으로 대입)
#단점: 항상 마지막에 확장되서 추가..

print()
#insert(x,y)        #y라는 자료를 x번째 인덱스 위치에 추가 하는 함수
lst = [1,2,3]
#lst.insert([4,'a'])   #insert()는 인덱스,자료  총 2개 인수값을 필요
lst.insert(1,[4,"a"])
print(lst)

print()

#pop(x)        #1)기본: pop()는 리스트의 마지막 요소를 반환하고, 삭제하는 함수
               #2)pop(x)는 x번째 인덱스 번호로 값 반환 후, 삭제
lst = [1,2,3]
print(lst.pop())
print(lst)

print(lst.pop(0))
print(lst)

print("\n")

#remove(x)        #리스트에서 x값을 제거(단, 반환 X)

lst = [1,2,3,4,1,1,5]
lst.remove(2)     #lst 안에 2라는 값 제거
print(lst)

lst.remove(1)
print(lst)        #중복 값이 있으면, 왼쪽에서 가장 가까운 값부터 제거
lst.remove(1)     #그 다음 제거
print(lst)

print()

#clear()          #자료의 요소값 모두 제거
lst = [1,2,3]
print("초기: {}".format(lst))
lst.clear()       #빈 자료형으로 청소
print(lst)

print()
#count(x)       : x라는 값이 몇개 있냐?
lst = [1,2,3,1,2,1,1]
cnt = lst.count(1)   #1값은 4개 반환
print(cnt)
lst = [1,2,3,(2,2,{"A": 1, "B":2})]
print(lst[3].count(2))


print()

#index(x,y)   :  문자열 내장 함수의 index와 동일

#reverse()      #리스트 요소값들 역순
                #단, 정렬된 걸 역순이 아닌 현재  자료 형태

lst1 = [1,2,3]
lst2 = [2,1,3]
lst1.reverse()
lst2.reverse()
print(lst1)
print(lst2)

#sort()         #리스트 요소값 정렬
                #sort()의 기본형태 : sort(reverse=False)
lst1 = [2,1,3]
lst2 = ["b","a","c"]
lst1.sort()
lst2.sort(reverse=False)
print(lst1); print(lst2)


#lst = ["b",3,"a",1,"c",2]  #Error: 정렬시 리스트 안에 한가지 동일한 자료형끼리만, 정렬 가능
lst = [3,1,2]
lst = ["b","d","c","a"]
lst.sort(reverse=True)    #내림차순 정렬
print(lst)






