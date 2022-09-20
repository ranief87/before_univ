#day05_01.py

#8. 사용자 입력 함수: input()   #키보드 입력 함수

#8_1.)input 사용
'''
#변수명 = input()
키보드 = input()
print("키보드 입력받은 값: {}".format(키보드))
#input()을 할시 키보드 입력한 후, 엔터하면 키보드값 저장됨.
'''

#8_2)문자열과 숫자값 입력받은 후 출력하기

#st = input("문자열: ") #input(" ~ ")안에 문자열은 메세지
#print("문자열: %s"%st)

#it = input("정수값: ")
#print(it)

#f1, f2 = input("실수값1 : "), input("실수값2 :")
#input()는 값 하나만 입력됨.
#print("f1 : {}, f2: {}".format(f1,f2))

#n1, n2 = input("두 개 입력: "), input()
#위처럼 두 개가 아닌 하나씩 입력되게 사용할 것

#print(type(n1),type(n2))
#print(n1,n2)
#입력받은 값은 "항상" 문자열입니다.

#var1 = input("문자열 입력: ")
#var2 = int(input("정수 입력  : "))
#print('{}'.format(type(var1)))
#print('{}'.format(type(var2)))  #int형


#8_3)
#회원 소개 하는 코드입니다. 오류를 찾고 고쳐주시고 실행 되게 수정
print(20*"=")
name = input("이름을 입력: ")  #str
age = int(input("나이: "))          #int
height = float(input("키를 입력: "))  #float
print("{:=^20}".format("="))
print("%s, %d, %.2f " %(name,age,height))
print("100세까지 남은 해는 {}년 입니다.".format(100-age))


