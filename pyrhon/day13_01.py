#day13_01.py

#17.랜덤함수: random()는 random.py라는 외부 파일에서 불러와서 안에 내장되있는 함수를 이용
#(모듈: 무언가를 불러온다)

#17_1)랜덤함수 모듈화
from random import random    #random.py(스크립트)로부터 random 함수를 가지고 와서 불러온다.
#cnt = 10
#while True:
#    print(random())
#    cnt += 1
#    if cnt == 20:
#        break; 
'''
print(random())        #0.0 초과 ~ 1.0 미만 값(실수)
print(random() * 10 )  #1.0 초과 ~ 10.0 미만 값
a = 0
while a != 20:
    print(int(random() * 10))       #0 ~ 9(정수)
    a +=1
'''

#17_2)Quiz
# 1 ~ 10까지 랜덤값 생성
#print(int(random() * 10) + 1) 
# 1 ~ 100까지 랜덤값 생성
'''
a = 1
while True:
    print(int(random() * 100) + 1) 
    if a == 50:
        break
    a +=1
'''
# 100 ~ 999까지 랜덤값?
#print(int(random() * 900) + 100) 
'''
a = 1
while True:
    b = int(random() * 1000)
    if b == 1000:
        print(b - 1)
    elif b < 100:
        continue
    else:
        print(b)
    #if a == 10:
    #    break;
    a += 1
'''

#17_3)randint(x,y)는 x이상 ~ y미만 정수값 랜덤 호출
from random import randint
#print(randint(100,1000))

#17_4)randrange(x,y,z)는 x이상 ~ y미만 정수값 중 증감 범위 랜덤 호출
from random import randrange
#print(randrange(5,10))  #randint(5,10)과 동일
#print(randrange(5,10,2)) #5부터 2씩 증가 된 랜덤값 반환


#17_5)ASCII코드
#print(chr(65))   #chr(정수): 정수 -> 문자
#chr()함수는 정수 0 ~ 1114111의 범위까지 숫자를 문자로 바꿀 수 있다.
#print(0x110000)

#17_6)응용(임의의 문자들 불러보기) # 'A' ~ 'z' (총: 52개)
#chr(65)) ~ chr(122)를 랜덤 불러보기 , 단, 91~ 96은 특문임으로 제외 시키기
a = chr(randint(65, 122))
b = chr(int(random() * 58) + 65)
print(a+b)







