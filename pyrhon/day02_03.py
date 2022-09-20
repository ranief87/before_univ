# 문자열 자료형: Escape 제어 문자
# 이스케이프란? 문자열 안에 /문자로 표기하며, 탈출이란 기능으로 사용
# \n = 다음 줄로 이동           next
# \t = 8칸 공백                 tab
# \r = 해당 줄의 처음으로 이동    replace
# V = '문자
# V" = "문자
# W = / 문자

#4_1 이스케이프 예시
'''
print('hello\nworld')
print("Escape\n이스케이프 문자는\n")
print("문자열 안에서만 사용 가능합니다")
print("\n")
print() #아무것도 하지 않을시 엔터로도 사용 가능

print("12345678123456781234567812345678")
print("탭\t시작\t커서이동\t끝")
print("tab\tstart\tshift\tend")
# 숫자나 영문자들은 1Byte(한 칸 차지)
# 한글을 유일하게 2Byte를 차지, 즉 문자열
print('abcd              \r12')
print('역슬래시\\문자 표현')
print("문자열에\"큰 따옴표\"표현")
print('문자열에\'작은 따옴표\'표현')
'''

#print("문자\t출력")
#print("문자\\t출력")
"print(\n)은 불가능"
함수-- 어떤 한 가지의 기능