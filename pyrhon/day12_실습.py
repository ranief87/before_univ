#day12_실습.py

#메뉴판 만들기 실습

#김밥천국에서 라면, 김밥, 떡볶이 3가지를 팔고 있습니다.
#가격(price)은 [라면:4000, 김밥:1500, 떡볶이:3000] 입니다.
#음식에 가격을 입력한 가격으로 바꿀 수 있으며, 메뉴의 이름도
#변경이 가능한 프로그램 메뉴판을 만들어봅니다.
#조건: 반드시, 리스트를 이용합니다.(가격, 메뉴)
#프로그램 기능은 다음과 같은 기능
#1.메뉴 확인
#2.가격 확인
#3.가격 변경
#4.메뉴 변경
#5.프로그램 종료

price = [4000,1500,3000]
menu = ["라면","김밥","떡볶이"]
while True:
    print("""
    ============
    1.메뉴 확인
    2.가격 확인
    3.가격 변경
    4.메뉴 변경
    5.프로그램 종료
    ==============""")
    print()
    choi = int(input("몇 번을 선택하시겠습니까? "))
    if choi == 1:
        print(menu,"\n")
    elif choi == 2:
        num = 0
        while num < len(menu):
            print("{} = {:,}".format(menu[num],price[num]))
            num += 1
    elif choi == 3:
        print()
        print(menu)
        num = int(input("몇 번째 가격을 변경하시겠습니까? "))
        num2 = int(input("변경할 가격을 입력해주세요.: "))
        if 1 <= num <= 3:
            price[num - 1] = num2   #변수명[인덱스]에 초기화시 존재하지 않는 인덱스번호는 에러가 난다!
        else:
            print("선택을 잘못했습니다. 처음부터 다시 해주세요.")
    elif choi == 4:
        print(menu)
        n = int(input("몇 번 째 메뉴의 이름을 변경? "))
        name = input("바꾸고 싶은 메뉴 이름을 입력: ")
        if 1 <= n <= 3:
            menu[n-1] = name
        else:
            print("선택을 잘못했습니다. 처음부터 다시 해주세요.")
    elif choi == 5:
        print("프로그램 종료합니다.")
        break


