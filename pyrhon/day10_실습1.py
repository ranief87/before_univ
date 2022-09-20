#day10_실습1.py
#1)정수 값 한 개 입력 받고 입력 받은 값이 7의 배수 인지를
#구분하는 코드를 작성합니다.
'''
n = int(input("값 입력: "))
if n % 7 == 0:
    print("{}는 '7의배수다'".format(n))
else:
    print("{}는 7의배수X".format(n))
'''
#2)2개의 정수 값을 입력 받아 빼기 계산을 할 때,
#항상 양의 정수(0)가 나올 수 있도록 합니다.
'''
n1 = int(input("값1 입력: "))
n2 = int(input("값2 입력: "))

if n1 >= n2:
    print("{}-{} = {}".format(n1,n2,n1-n2))
else:
    print("{}-{} = {}".format(n2,n1,n2-n1))
'''


#3)다음 코드를 만들어 줍니다.
#-학점 입력하게 코드 작성(변수: score, score는 정수)
#-90이상 100이하면 '학점은 A'
#-80이상 90미만이면 '학점은 B'
#-70이상 80미만이면 '학점은 C'
#-60이상 70미만이면 '학점은 D'
#-'F'
#단, 학점은 0.00 ~ 100.00 범위
'''
#3_1)elif만
score = int(input("점수 입력: "))
if 90 <= score and score <= 100:
    print("학점은 'A'")
elif 80 <= score < 90:
    print("학점은 'B'")
elif 70 <= score < 80:
    print("학점은 'C'")
elif 60 <= score <70 :
    print("학점은 'D'")
elif 0 <= score <60:
    print("학점은 'F'")
else:
    print("점수 잘못 입력.. 다시 입력하세요.")
'''
'''
#3_2)elif + 중첩
score = int(input("점수 입력: "))
if 0<= score <=100:
    if 90 <= score and score <= 100:
        print("학점은 'A'")
    elif 80 <= score < 90:
        print("학점은 'B'")
    elif 70 <= score < 80:
        print("학점은 'C'")
    elif 60 <= score <70 :
        print("학점은 'D'")
    else:
        print("학점은 'F'")
else:
    print("점수 잘못 입력.. 다시 입력하세요.")
'''



#4)3과 5의 배수를 구분하는 조건문을 코딩(if,elif,중첩 표현해보기)
#3과 5의 배수(공배수)면,3과 5의 공배수다 출력
#3의 배수면, 3의 배수 출력
#5의 배수면, 5의 배수 출력
#3의 배수도 5의 배수도 아니면, 3의 배수도 5의 배수도 아니다 출력
'''
#4_1)if문만
num = int(input("값: "))
if num % 3 == 0 and num % 5 == 0:
    print("{}는 3과 5의 공배수다.".format(num))
if num % 3 == 0:
    print("{}는 3배수다".format(num))
if num % 5 == 0:
    print("{}는 5배수다".format(num))
if num % 3 != 0 and num % 5 != 0 :
    print("{}는 3의 배수도, 5의 배수도 아니다.".format(num))
'''
'''
#4_2)중첩if
num = int(input("값: "))
if num % 3 == 0 and num % 5 == 0:
    print("{}는 3과 5의 공배수다.".format(num))
    if num % 3 == 0:
        print("{}는 3배수다".format(num))
    if num % 5 == 0:
        print("{}는 5배수다".format(num))
if num % 3 != 0 and num % 5 != 0 :
    print("{}는 3의 배수도, 5의 배수도 아니다.".format(num))
'''
'''
num = int(input("값: "))
if num % 3 != 0 and num % 5 != 0 :
    print("{}는 3의 배수도, 5의 배수도 아니다.".format(num))
else:
    if num % 3 == 0:
        print("{}는 3배수다".format(num))
        if num % 5 == 0:
            print("{}는 3과 5의 공배수다.".format(num))
    else:
        print("{}는 5배수다".format(num))
'''
'''
#4_3)elif
num = int(input("값: "))
if num % 3 == 0 and num % 5 == 0:
    print("{}는 3과 5의 공배수다.".format(num))
elif num % 5 == 0 :
    print("{}는 5배수다".format(num))
elif num % 3 == 0:
    print("{}는 3배수다".format(num))
else:
    print("{}는 3의 배수도, 5의 배수도 아니다.".format(num))
'''




#5)day05_실습1.py의 4번 문제 수정(수강생 과목 )
#수강생 과목 정보입니다.
#수강생 이름, Python,Linux,Windows,Network의 값을 입력받고,
#입력 받은 값들을 사전형(Dic_St)으로 저장.
#Dic_St에 각 점수들만 뽑아서, 평균값을 구하고, 다음 조건에 만족하게 코딩
#80.00점 이상은 합격
#70.00점 ~ 79.xx점이면 미달
#70.00점 미만은 불합격

Dic_St = dict()
#print(Dic_St, type(Dic_St))

S = input("수강생이름: ")
P = int(input("파이썬점수: "))
L = int(input("리눅스점수: "))
W = int(input("윈도우점수: "))
N = int(input("네트워크점수: "))

Dic_St["수강생"] = S
Dic_St["Py"] = P
Dic_St["Linux"] = L
Dic_St["Window"] = W
Dic_St["Network"] = N

# print(Dic_St) : 디버깅
#Dic_St에 각 점수들만 뽑아서, 평균값을 구하고, 다음 조건에 만족하게 코딩
#80.00점 이상은 합격
#70.00점 ~ 79.xx점이면 미달
#70.00점 미만은 불합격
Dic_St_cnt=len(Dic_St)
Hap= (Dic_St.pop("Py") + Dic_St.pop("Linux") + Dic_St.pop("Window") + Dic_St.pop("Network"))
Avg = Hap/(Dic_St_cnt - 1)

print()
if 0.00 <= Avg <= 100.00:
    if 80.00 <= Avg:
        print("{:.2f}합격!".format(Avg))
    elif 70.00 <= Avg < 80:
        print("{:.2f}미달".format(Avg))
    else:
        print("{:.2f}불합격...".format(Avg))
