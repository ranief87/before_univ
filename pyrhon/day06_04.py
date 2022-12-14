#day06_04.py

#11. 사전형: 딕셔너리(dictionary)  {key : value}

#Key(키)와 Value(값)으로 구분
# Key(키): 고정된 값
# Value(값) : 고정된 값과 변됭되는 값 모두 가능
# 형태: {"k1": 값1, "k2": 값2, ...}   #키와 값이 한 쌍 (변수명=값)

#11_1)예시1)
a = {'a': 1, 'b': 3.14}
print(a, type(a)); print("{}개".format(len(a)))

#print(a[0])  #KeyError : 인덱스번호는 키값으로 이용해야함.
print(a['a'])  #키값(인덱스)으로 접근해서 값(value)을 추출

b = {1 : [1,2,3]}   #키(1) : 값[1,2,3]
print(b,type(b))
print(b[1])     #b라는 사전의 키1에 저장된 값을 호출

#※b의 0번째 인덱스번호라고 보일 수 있으니 주의합시다.!