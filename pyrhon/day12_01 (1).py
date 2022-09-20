# continue문:

# continue 를 사용하면 아래 문장을 실행하지 않고 다시 반복문의 조건식으로 이동하는 분기문

# 1~n 까지의 수 중에서 짝수만 출력하는 프로그램
# n은 사용자가 직접 입력
'''
N= int(input("정수를 입력: "))
n=0
while n<N:
    n+=1
    if n % 2==1:
        continue
    print(f"짝수: {n}")
'''


#  예시:
# 3개 버튼 (1: 콜라를 준다) (2: 콜라 리필) (3: 매진= 프로그램 종료)

cola=10 # 콜라의 초기값 정수
while True:
    print("-"* 20)
    print( "1.콜라를 준다")
    print( "2.콜라 리필")
    print( "3.프로그램 종료")
    print("-"* 20)
    choi= int(input("1~3 중 번호를 입력합니다: "))
    if choi ==1:
        if cola ==0:
            print("콜라 매진")
        elif cola >0:    
            cola-=1
            print("콜라 캔 나왔다!")
    elif choi==2:
        print("콜라 리필!")
        if cola ==0:
            print("콜라 매진")
            continue
        print("콜라 리필!")
        cola-=1
    elif choi==3:
        print("프로그램 종료")
        break
    else:
        print("잘못 입력됬습니다. 다시 선택해주세요")



























