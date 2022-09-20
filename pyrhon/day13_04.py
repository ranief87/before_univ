#day13_04.py

#18_5)예시
'''
marks = [95,25,67,45,80]
num = 0
for CK in marks:
    num += 1
    if CK >= 60:
        print("%d번 학생은 합격"%num)
    else:
        print("%d번 학생은 불합격"%num)
'''

#18_6)for문의 continue(잘못된 표현)
'''
marks = [95,25,67,45,80]
num = 0
for CK in marks:
    num += 1
    if CK >= 60:continue
        print("%d번 학생은 불합격"%num)
#제어문 중에서 들여쓰기 생략은 그 안에 기능이 "딱 하나만" 표현 가능
'''

#18_7)for문의 continue 해결
'''
marks = [95,25,67,45,80]
num = 0
for CK in marks:
    num += 1
    if CK >= 60:continue
    print("%d번 학생은 불합격"%num)
'''


#18_8)for문의 break
#while과 동일하게 적용
#for i in [1,2,3]:
#    print(i)
#    break
#보통 for문은 무한 반복용이 아니라 break는 의외로 잘 쓰진 않습니다.

#18_9)for문의 누적합계( 1 ~ 10의 합들: 55)
'''
hap = 0
for a in range(1,11):
    hap+=a
print(hap)
'''
'''
#18_10)
marks = [90,25,67,45,80]
for num in range(len(marks)):
    if marks[num] >= 60:continue
    print("%d번 학생은 불합격입니다."%(num + 1))
'''