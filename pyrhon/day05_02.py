#day05_02.py

#9.<자료형 (연산자들)>
#9_1)산술 연산자(+,-,*,/,**,//,% 등)

#9_2)크기 비교 연산자 (참: True, 거짓: False)
'''
x,y = 5,5
print(x > y, x < y, x >= y, x <=y )  #False, False, True, True
print(5 > 5.01)
#print(x >= "a") #Error: 크기 비교는 반드시, 숫자만
'''
'''
#9_3)비교 연산자
x,y = 3,5
print(x == y) #False   x==y는  x와 y가 같다
print(x != y) #True    !=는 같지 않다.
a,b = "a","b"
print(a == b) #False     
print(a != b) #True
#같냐, 같지 않냐를 비교(문자,숫자 O)
'''
'''
#9_4)멤버 연산자
x = 1
print(x in (1,2,3))     #True   (,): 튜플자료형
print(x not in [2,3,4]) #True   [,]: 리스트자료형
#  x  in [묶는형] : x값이 있으면 참, 없으면 거짓
'''
'''
#9_5)식별 연산자(자료형 형태가 같은지 다른지)
x = 1
print(x is x)  #True
print(x is int(x)) #True
print(x is int) #False    1이 int냐?
print(type(x) is int) #True
print(type(x) is x) 

print(x is not int(x))
'''
'''
#9_6)논리 연산자(논리곱:and, 논리합:or, 논리부정: not)
# 참,거짓  논리연산자  참,거짓
#and는  두 개 판별식중 적어도 하나가 거짓이면 False, 둘 다 참일 때만 True
#or은   두 개 판별식중 적어도 하나가 참이면 True, 둘 다 거짓일 때만 False
#not은 한 개 값이 참이면, False   거짓이면 True (부정)

x = 3
y = 5
a = "a"
b = "b"

print(x < y and a != b)
print(x < y and a == b)
print(x < y or a == b)

print(not x)

#숫자는 0이면 거짓, 그 외에 숫자들은 모두 참
'''
'''
#9_7)연산자 우선 순위
print(6 % 3 > 2) #F
print(6 > 3 % 2) #T
print(5 + 5 != 2 * 5) #F
print(True == 1) #T
print( 15 % 4 and 4 in (0,1,2)) #F

#우선 순위  :     1순위) 묶는 것들  -> (,)  [,]  {,}
#                2순위) 비교대상이 적은 것들(피연산자 1개만 있는것)
#                3순위)  산술>비교>논리
'''


#9_8)대입 연산자(=)
#복합 대입 연산자(+= , -=, *=, /= 등등)
a, b = 1, 2
print(a)
a += b       # a = a + b   #자기자신 = 자기자신 연산자 다른 값
print(a)