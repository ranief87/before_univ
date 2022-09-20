
# 원하는 사전 만들어보기

# 사용자에게 사전에 등록하고 싶은 단어와 뜻을 입력받습니다
# 그럼 그 단어와 뜻이 딕셔너리에 저장이 되어야 하며
# 단어를 검색하면 뜻이 검색되어야 합니다


#1. 단어 추가 (등록)
#2. 단어 찾기 (검색)
#3. 단어 제거(삭제)
#4. 단어 변경(수정)
#5. 프로그램 종료


dit= {}  # 빈 딕셔너리 초기화
while True:
    print("""
    1.단어 등록
    2.단어 찾기
    3.단어 제거
    4.단어 변경
    5.프로그램 종료""")
    choi=int(input("1~5 중 하나 입력(정수값): "))
    if choi==1:
        a=input("단어 입력: ")
        b=input("뜻 입력: ")
        dit[a]=b
    if choi==2:
        c=input("찾을 단어 입력: ")
        print(dit[c])
    if choi==3:
        d=input("삭제할 단어 입력: ")
        del(dit[d])
    if choi==4:
        e=input("변경하고 싶은 단어 입력: ")
        f= input("변경할 단어 입력: ")
        g=input("변경한 단어 뜻 입력: ")
        del(dit[e])
        dit[f]=g
    if choi==5:
        print("프로그램 종료")
        break
else:
    print("제대로 입력해라")

