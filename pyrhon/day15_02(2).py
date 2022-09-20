#day15_02.py

#20_3)원하는 사전 만들어보기

#사용자에게 사전에 등록하고 싶은 단어와 뜻을 입력받습니다.
#그럼 그 단어와 뜻이 딕셔너리에 저장이 되어야 하며 
#정상적으로 단어를 검색을 하면 뜻이 출력이 됩니다.
#다음과 같은 기능을 만들어봅시다.
#1. 단어 추가(등록)
#2. 단어 찾기(검색)
#3. 단어 제거(삭제)
#4. 단어 변경(수정)
#5. 프로그램 종료

# dic = {}    # 빈 딕셔너리 초기화
# while True:
#     print("""
#     1.단어 등록
#     2.단어 검색
#     3.단어 삭제
#     4.단어 수정
#     5.프로그램 종료""")
#     choi = int(input("이용할 번호 입력(정수값): "))
#     if choi == 1:
#         word = input("추가할 단어를 입력: ")   #Key
#         mean = input("추가한 단어의 뜻 입력: ") #Value
#         dic[word] = mean  #딕셔너리 자료 값 추가
#         print("단어 추가됬습니다.")
#         print(dic)
#     elif choi == 2:
#         word = input("검색할 단어를 입력: ")
#         print(dic[word])
#     elif choi == 3:
#         word = input("삭제할 단어 입력: ")
#         del dic[word]
#         print("단어 삭제됬습니다.")
#         print(dic)
#     elif choi == 4:
#         word = input("뜻 변경할 단어 입력: ")
#         mean = input("변경할 뜻 입력: ")
#         dic[word] = mean
#         print("단어의 뜻이 변경됬습니다.")
#         print(dic)
#     elif choi == 5:
#         print("프로그램 종료합니다.")
#         break
#     else:
#         print("번호를 잘못선택했습니다. 다시 입력해주세요.")






