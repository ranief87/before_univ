#day09_0.py

#14_4)조건문(중첩 if문)
'''
#문법
if 조건식1:                 #조건식1이 참일 때
    수행문1                 #수행문1이 수행
    if 조건식2:             #중첩if문은 조건식1이 참이고, 조건식2도 참일 때,
        수행문2             #수행문2가 수행
        if 조건식3:         #중첩2_if문은 조건식1,2,3 모두 참일 때, 수행문 3 수행 후, if문 종료
            수행문3
        elif 조건식33:      #elif는 조건식1,2는 참이고, 조건식3은 거짓이며, 조건식33이 참일 때,
            수행문33        #수행문33을 수행 후, if문 종료
    else:                   #중첩 else는 조건식1은 참, 조건식2는 거짓 일 때,
         수행문4            #수행문4 수행 후, if문 종료
else:                       #조건식1이 거짓일 때, 수행문5 후, if문 종료
    수행문5
'''

#예제14_4_1)
'''
num = 10
if num > 3:
    if num < 7:
        print("num은 7보다 작다.")
    else:
        print("num은 7보다 크다")
else:
    print("num은 3보다 작다")
'''
#14_4_2)  num은 7이다라는 조건을 추가해서 고쳐보기
'''
num = 3
if num >= 3:
    if num < 7:
        print("7보다 작다")
    if num == 7:
        print("7이다.")
    if num > 7:
        print("7보다 크다")
else:
    print("num은 3보다 작다")
'''
#14_4_2)를 elif 표현 
'''
num = 3
if num >= 3:
    if num < 7:
        print("7보다 작다")
    elif num == 7:
        print("7이다.")
    elif num > 7:
        print("7보다 크다")
else:
    print("num은 3보다 작다")
'''

#elif와 if중첩 차이점...
num =  7
if 3 <= num :     #3 <= num  < 7
    print("num은 3이상이다")
    if num < 7:
        print("3이상 7미만이다")

#if중첩은 범위를 잡을시 넓은 범위(중복되게)부터 점점 좁게 잡아주고,
#elif는 중첩되면 안되기 때문에 좁은 범위에서 중첩안된 것들로 조건을 잡아주면 된다.
