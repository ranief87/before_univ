#day13_02.py

#18.제어문(반복문: for문)

#문법
#for 임의의변수명 in 자료형:    
#    유사한명령문

#임의의변수명은 아무 이름
#자료형(갯수를 가진 것들: 문자열, 튜플, 리스트, range())
#while과 다르게 in이란 멤버 연산자로 사용해서 몇번 돌지 갯수만큼 반복

#사용도: 갯수를 가진 자료형의 0번째 인덱스로 시작해서 마지막 인덱스까지 돌고,
#임의의변수명에 하나씩 값을 대입하면서 반복

#18_1)문자열
#for ch in 'abcd':       #4번: 문자열은 문자들이 모인 것
#    print(ch)
#print(ch)
#for kor in "파이썬":      #한글도 for문 in은 글자 하나로 횟수
#    print(kor)

#18_2)튜플 및 리스트 형태 for문
#test_list = [1,2.27,"abc"]
#for i in test_list:     #리스트 안의 인덱스 요소값으로 3번
#    print(i)

a = [(1,2), (3,4), (5,6)]  #1차 리스트 안에 2차 튜플들
#print(type(a), type(a[0]), type(a[0][0]))

#for x in a:        #3번
#    print(x)
#for (x,y) in a:         #3번
#    print(x);print(y)

#for x,y in a:
#    print(x + y)

#18_3)Quiz)
st = "Python Is Programing Language !!!"
#문자열 st 안에 공백을 제외한 문자의 갯수는 몇개인지 출력!(for문)
cnt = 0 
for a in st:
    if a != " " :
        cnt += 1
print("갯수:", cnt)
print(len(st))

