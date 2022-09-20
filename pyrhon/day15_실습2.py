
# 딕셔너리를 이용해서 만들어봅시다
# 사용자가 직접 ID를 입력해서 딕셔너리 안에 들어가는 프로그램을 만들어보자
# 조건
#1. ID 추가
#  - 사용자가 ID를 지정하면 key는 자동으로 1로 지정됨
#  - 사용자가 입력한 ID는 value
#  - 사용자가 추가 될때마다 key는 자동으로 2,3,4 순으로 지정
#  - ID는 최대 5개까지

#2. ID수정
#  - ID명단의 ID를 수정할 때에는 해당 key값 그리고 value값 모두 수정 가능

#3. ID확인
#  - 딕셔너리 전체 출력

#4. 프로그램 종료

dic={}
num=0
while True:
    print("""
    1. ID 추가
    2. ID 수정
    3. ID 확인
    4. 프로그램 종료""")
    choi=int(input("1~4 중 숫자를 입력하세요: "))
    if choi==1:
        if num==5:
            print("더 이상 ID생성이 불가능합니다")
            break
        a=input("ID를 입력하세요: ")
        num+=1
        dic[num]=a
        if num>5:
            print("더 이상 ID생성이 불가능합니다")
            break
    if choi==2:
        c=input("ID의 key값을 입력해주세요: ")
        b=input("수정할 ID를 입력해주세요: ")
        dic[c]=b
    if choi==3:
        print("ID목록: ", dic.values())
        print("전체: ", dic)
    if choi==4:
        print("프로그램 종료")
        break









