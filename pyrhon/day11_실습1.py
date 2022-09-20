#day11_실습1.py

#Quiz_1)1 ~ 10까지 숫자 중 짝수가 나오게 출력(while + if, while문만)
#1)while + if
'''
a = 1
while a <= 10:
    if a % 2 == 0:
        print(a, end=" ")
    a += 1
'''
#2)while
'''
a = 2
while a < 11:
    if a % 2 == 0:
        print(a,end=" ")
    a += 2
'''
'''
#3)기타(2의 배수만 나오게)
a = 0
while a < 5:
    a += 1
    print(a * 2, end=" ")
'''

'''
#Quiz_2)1 ~ 100까지 숫자 중 7의 배수의 합과 갯수를 출력하는 코딩
#합 : 735,  갯수: 14개
n, hap, cnt = 1, 0, 0
while n < 101:
    if n % 7 == 0:
        hap += n
        cnt += 1
    n+=1
print("7의 배수 합: {}, 갯수: {}개".format(hap,cnt))
#print(100//7)  #7 갯수 식
'''

#Quiz_3)1 ~ 20 까지의 값을 출력 할 때, 다음과 같은 형식으로 출력
'''
1       2       3       4       5
6       7       8       9       10
11      12      13      14      15
16      17      18      19      20
'''
#1)while문 + "\t" + if문
'''
a = 1
while a < 21:
    print(a, end="\t")
    if a % 5 == 0:
        print()
    a += 1
'''
'''
a = 1
while a < 21:
    if a % 5 == 0:
        print(a)
    else:
        print(a, end="\t")
    a += 1
'''

#Quiz_4) 1부터 10까지의 숫자들을 한 개씩 누적한 값들 중 홀수들만 출력
#단, 출력결과:        1, 3, 15, 21, 45, 55
'''
a = 1
hap = 0
while a <= 10:
    hap += a
    if hap % 2 == 1:
        if hap == 55:     #a == 10
            print(hap)
        else:
            print(hap,end=", ")
    a += 1
'''
'''
a = 1
hap = 0
while a <= 10:
    hap += a
    if hap % 2 == 1:
        print(hap,end=", ")
    a += 1
print("\b\b ")   #백스페이스키를 이용한 편법
'''
