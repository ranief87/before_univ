#day15_실습.py
# 딕셔너리를 이용해서 만들어봅니다.
# 사용자가 직접 ID 를 입력해서 딕셔너리 안에 값이 들어가는 프로그램을
# 만들어주세요
# 조건
# 반드시 다음과 같은 기능이 들어있어야 합니다
# 1.ID 추가
#   - 사용자가 ID를 지정하면 자동으로 key 는 1로 지정 됩니다
#   - 사용자가 입력한 ID는 value가 됩니다
#   - 사용자가 추가 될 때마다 key는 자동으로 2,3,4 순으로 지정이 됩니다
#   - ID는 최대 5개 만들수 있습니다
# 2.ID  수정
#   - ID 명단의 ID를 수정 할 때에는 해당 key 값 그리고 value 값을 사용해도
#   - 수정 할 수 있어야 합니다
# 3.ID 확인
#  -딕셔너리 전체 출력
# 4. 프로그램 종료
ID = {} # 빈 딕셔너리 생성
chkey = 1 # 계정 생성 시 필요한 키 값
while True :
    print("""1.ID 추가
2.ID수정
3.ID확인
4.ID종료""")
    choi = int(input("원하시는 항목을 입력하세요 : "))
    if choi == 1 :
        if len(ID) < 5 :
            newid = input("추가하고 싶은 ID를 입력하세요 : ")
            ID[chkey] = newid # 딕셔너리에 값 추가
            chkey = chkey + 1
            print(ID)
        else :
            print("더 이상 ID를 추가 할 수 없습니다")
    elif choi == 2 :
        print(ID)
        id = input("바꾸고 싶은 ID의 번호나 ID를 입력하세요 : ")
        if id.isdecimal() :
            if int(id) in ID.keys() :
                chid = input("어떤 ID로 변경 하시겠습니까 ? :")
                ID[int(id)] = chid
                print(ID)
            else :
                print("없는 ID번호 입니다")
        elif id in ID.values() :
            chid = input("어떤 ID로 변경 하시겠습니까 ? : ")
            valist = list(ID.values())
            idx = valist.index(id)
            ID[idx+1] = chid
            print(ID)
        else :
            print("없는 ID 입니다")
    elif choi == 3 :
        print(ID)
    elif choi == 4 :
        print("프로그램을 종료합니다!")
        break
