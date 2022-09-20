#day14_01.py

#19.제어문 (이중 for 문)
#문법
'''
for 변수명1 in 멤버자료형1:        #for1)멤버자료형1의 갯수만큼 반복
    외부1                         #for1)이 도는 횟수만큼 외부1 실행
    for 변수명2 in 멤버자료형2:    #for2)멤버자료형2의 갯수만큼 반복(재반복시 멤버자료형으로 초기화)
        내부1                     #for1이 한번 돌때, for2가 멤버자료형2갯수만큼 내부1실행
    외부2                         #for2)가 다 끝난 후, 실행
'''
'''
#19_1)예시
for a in (1,2):
    print("%d)번째로 외부1 턴 시작"%a)
    for b in range(1,4):
        print("%d)번째로 내부1 턴 "%b)
    print("%d 외부2 시작"%a)
'''
#19_2)구구단 for문
for gugu in range(1,10):
    print("===={}단====".format(gugu))
    for gugu1 in range(1,10):
        print("{} X {} = {}".format(gugu,gugu1,gugu*gugu1))
