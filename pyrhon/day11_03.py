#day11_03.py


#16. 제어문(분기문)

#16_1) break문
#break문은 반복문에서 사용 가능하며, 강제적으로 반복문을 멈춰서 중단
'''
a = 1
while True:
    print("a는 %d입니다." %a)
    a+=1
    break    #반복문에서 break 읽을시 즉시 중단해서 반복문 종료
    print("a는 %d입니다." %a)       #break 이후의 명령들은 사용 되질 X
'''

#16_2)이중 while에서 break
# break는 자신을 종속하고 있는 반복문에서만 탈출
#즉, 프로그램 중단이 아닌 한 개의 반복문에는 한 개의 분기문만 적용!
'''
a = 1
while True:
    print("a: ",a)
    b = 1
    while True:
        print("b: ", b)
        b += 1
        break
    a += 1
    break
'''
'''
#16_3)예시(입력시 구구단에서 해당 배수단만 출력(단, 0을 누르면 프로그램 종료시키기))
while True:
    gugu = int(input("원하는 구구단을 입력(0을 입력시 종료): "))
    num = 1
    if 1 <= gugu <= 9 :
        while num <= 9:
            print("%d X %d = %d" %(gugu,num,gugu*num))
            num += 1
    elif gugu == 0:
        print("프로그램 종료")
        break
    else:
        print("잘못된 단값이 들어왔습니다. 다시 입력해주세요.")
'''


