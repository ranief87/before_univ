# 함수

# 자료형: 문자열 내장 함수
# 문자열 내장 함수

#문자 갯수 세기(count)
'''
a= 'Python to python'
print("문자 갯수: ", a.count('o'))
# count(요소값): 요소값의 개수가 몇 개인지 세어주는 함수
# 변수명.count(변수명에 있는 요소값)

# 위치를 인덱스 번호로 알려주는 함수 (find,rfind)
print("'p': ",a.find('p'))
print("'o': ", a.find('o'))  # 값이 같은 게 있다면 처음 발견한 것

print("'o(1)' 'o(2)  ", a.find('o', 4), a.find('o',5))
# find(?,숫자) 숫자는 인덱스번호로 시작위치를 지정
#4면 4번과 위치 이후부터 처음 찾는 곳을 출력
print(a.find('r'))  #결과 -1 = 없다

# rfind 함수는 find함수와 효과는 동일하지만 인덱스 번호를 -1(오른쪽)부터 찾음
print("rfind", a.rfind('o'))
'''
'''
# 위치를 요소값으로 인덱스번호를 출력(index)
print("인덱스", a.index('p'))
print("인덱스", a.index('o'))
print( a.index('o', 5))
# print(a.index('10'))  find다르게 없으면 오류가 남
'''
'''
# 문자열 삽입 (join)
a= " "
print('join', a.join("1234")) # a 에 1234 넣음
b=','
print('join', b.join("abcd"))  # b에  abcd를 ", " 기준으로 하나씩 삽입

print(type(a.join('1234')))  # 따로 하나씩 삽입해도 결국 문자열 안에서임
'''
'''
# 소문자를 대문자로 (upper), 대문자를 소문자로(lower)
a ='hello'
print(a.upper())
b= 'ROBERT'
print(b.lower())
'''
'''
# 대, 소문자 유용하게 바꾸는 추가 함수들
# capitalize 함수: 문자열의 첫글자만 대문자로
print(a.capitalize())

#title 함수 : 띄어쓰기를 기준으로 각각 첫글자를 대문자로
c= "Hi robert thank"
print(c.title())

# swapcase함수 : 대->소 , 소-> 대
print(c.swapcase())
'''
'''
# replace(바꾸고 싶은 문자열, 새로운 문자열)

a= "hEllo"
a= a.replace("hE", "He")
print(a)
'''
'''
# split함수: 문자열을 나누는 함수  ***
# 변수명.split(나눌 기준 값)
# 문자열 안에 있는 값을 기준값으로 나누기 때문에 '문자열'만 분할 가능
# 나눴을 때 결과를 '리스트' 형태 저장
sl1= "Life is too short"
print(sl1)
print('sl1: ', sl1.split())  # 공백(스페이스바, 엔터, 탭)
print('sl1: ', sl1.split(" "))
print("split: ", sl1.split('t'))  # 나눌 기준 값에 반드시 있어야함

sl2="beautifulday"
print("split: ", sl2.split('l'))

#sl1= ["Life", "is", "too", "short"]  # tuple list 둘 다 split 속성이 없다
#print(sl1.split())
'''
sl5=' a : b:c:d'
sl5_lt=sl5.split(':')
print(sl5_lt)

#기준값이 문자열 안에 없을 경우 에러는 x






































