#day09_05.py

#if문 종합 정리

#14_5)윤년을 구하는 코드   [윤년? 약 4년씩 2월29일이 있는 해]
#조건1)4의 배수는 1)윤년이 된다. 그 외는 1)평년
#조건2)4의 배수이고, 100의 배수인 경우는 2)윤년, 그외는 3)윤년
#조건3)4의 배수이고, 100의 배수이고, 400의 배수인 경우 4)윤년이다. 그 외는 2)평년

'''
#14_5_1)단순if문
year = int(input("년도 입력: "))
if year % 4 == 0:
    print("1)윤년")
if year % 4 == 0 and year % 100 == 0:
    print("2)윤년")
if year % 4 == 0 and year % 100 == 0 and year % 400 == 0 :
    print("4)윤년")
if year % 4 != 0 or year % 100 != 0 or year % 400 != 0:
    print("1)평년, 3)윤년, 2)평년")
'''

#14_5_2)if ~ else문으로만?   #불가능

#14_5_3)if중첩
year = int(input("년도 입력: "))
if year % 4 == 0:
    print("1)윤년")
    if year % 100 == 0 :
        print("2)윤년")
        if year % 400 == 0:
            print("3)윤년")
        else:
            print("3)평년")
    else:
        print("2)평년")
else:
    print("1)평년")

#14_5_4)다중 if문(평년이냐 윤년이냐?)
#4의 배수면, 1)윤년
#100의 배수면, 2)윤년
#400의 배수면, 3)윤년
#그외는 평년   출력
