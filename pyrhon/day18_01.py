#day18_01.py

#23. 전역변수와 지역변수

#지역변수란? 지역 내에서만 사용하며 존재하는 변수들
#전역변수란? 전체 지역에서 사용(모든 지역에 영향을 줌)

#23_1) 함수 밖에 인수값이 있는 경우(전역)
# a = 1           #a는 전역변수

# def vartest(a): #a는 매개변수(지역변수의 성격)
#     a += 1      #a는 vartest함수에서 존재하는 지역변수

# vartest(a)      #a는 인수
# print(a)        #a는 전역변수

# a = 1           
# def vartest(a): 
#     a += 1      
#     print("함수 내에서 출력:",a)
#     #지역변수는 함수 내 존재할 수 있음으로 밖으로 빠져나가는 즉시 '자동소멸'!
# vartest(a)      
# print("함수 밖 출력:",a)       


#23_2)함수 밖에 있는 값을 return으로 받게끔 유도
# a = 1
# def vartest(a):
#     a = a + 1
#     return a

# print(vartest(3))
# print("리턴 받은 값으로 a초기화 전:",a)
# a = vartest(5)
# print("리턴 받은 값으로 a초기화 후:",a)


#23_3)광역 변수
# a = 1
# def vartest(b):                 #global(광역)은 함수 내에서만 문법이 가능하고,
#     global a                    #미리정의된 변수(전역변수)를 지역변수에 영향을 줘서
#     a += 1                       #함수 내에서 바깥 변수를 지속 이용(값 소멸 X)
#     a += b

# print("광역변수 사용 전:",a)
# vartest(3)
# print("광역변수 사용 후:",a)


