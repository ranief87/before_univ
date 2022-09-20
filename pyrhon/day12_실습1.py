
# 메뉴판 만들기

# 라면 김밥 떡볶이 3가지를 팔고 있다
# 가격은 [라면:3000, 김밥:2000, 떡볶이: 2500]입니다
# 음식의 가격을 입력한 가격으로 바꿀 수 있으며 메뉴의 이름도 변경이 가능하다
# 조건 :반드시 리스트 사용
# 1. 메뉴확인
# 2. 가격 확인
# 3. 가격 변경
# 4. 메뉴 변경
# 5. 프로그램 종료

a= ["라면", "김밥", "떡볶이"]
b=[3000, 2000, 2500] 
while True:
    print("-"*20)
    print("1.메뉴 확인")
    print("2.가격 확인")
    print("3.가격 변경")
    print("4.메뉴 변경")
    print("5.프로그램 종료")
    print("-"*20)

    choi= int(input("1~5 중 입력하세요: "))

    if choi==1:
        print(a)
    elif choi==2:
        print(b)
    elif choi==3:
        c= int(input("3개의 메뉴 중 몇 번의 가격을 바꾸시겠습니까?(숫자로 입력): "))
        d= int(input("얼마로 바꾸시겠습니까?: "))
        if c==1:
            b[0]=d
        elif c==2:
            b[1]=d
        elif c==3:
            b[2]=d
        else:
            print("1~3 까지만 하라고!")
    elif choi==4:
        e= int(input("메뉴 중 무엇을 바꾸시겠습니까?")) 
        f= input("무엇으로 바꾸시겠습니까?: ")
        if e==1:
            a[0]=f
        elif e==2:
            a[1]=f
        elif e==3:
            a[2]=f
        else:
            print("1~3까지만 하시라고요")
    elif choi==5:
        print("프로그램 종료")           
        break
    else:
        print("다시 입력하삼")
        continue
    









