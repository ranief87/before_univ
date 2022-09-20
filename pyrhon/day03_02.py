#day03_03.py

#5. <자료형(서식 문자 및 포맷팅함수, f 포맷팅)>
#서식문자란?
#지정된 값을 여러 가지 형태로 출력해주는 기법(문자열 안에서만 가능)

#문자열 포맷팅(파이썬만)
#문자열이 아닌 다른 자료, 혹은 문자열을 특정 문자열 속에 가변적으로 대입

#문법:  1)서식문자(C스타일)
print(" %문자 " %(해당형태에 알맞는 값) )

#       2)포맷팅함수
print(" {:문자}".format(해당형태에 알맞는 값))

#       3)f 문자열 포맷팅
#변수명 = "값"
#print(f"{변수명}")


#5_1)서식 문자
#정수 지정
print("정수1:  %d" %(100))
print("정수2: %d"%1)
print("정수 2개: %d   %d" %(100,200))
#print("정수 2개: %d   %d" %(100))
#print("정수 2개: %d" %(100,200))
#print("정수 2개: %d %d" %100, %200)
#%서식 지정자는 한번만 표현
#%d(Decimal) : 10진 정수





#문자열과 실수 지정
print("%s님의 신장은 %f입니다." %("CK", 173.05))
#%f는 실수형으로 소수점 6자리까지 기본값으로 나타냄.
                              #print("%s님의 신장은 %.2f입니다."%("CK",173.05))
print("%s님의 신장은 %.2f입니다."%("CK",173.054))
print("%s님의 신장은 %.2f입니다."%("CK",173.055))
#%.숫자f는 .오른쪽의 숫자가 소수점 자릿수를 나타냄
#.숫자에 숫자+1한 자리는 반올림

print("%s : |%10.2f|"%("CK",173.05))
print("%s : |%.2f|"%("CK",173.05))
#%10.2f는 왼쪽숫자.는 고정길이를 잡음
#%f(Float): 실수형
#%s(String): 문자열


#5_2)포맷팅 함수
#정수와 문자열
print("{}는 {}이다.".format("a",1))  # a는 1이다.(문자열,정수)
print("{}는 {}이다.".format("a","1")) # a는 1이다.(문자열,문자열)
print("{:s}는 {:d}이다.".format("a",1))

print("{0}는 {1}이다.".format("a",1))
print("{1}는 {0}이다.".format("a",1))
#인덱스번호(여러 개 자료를 묶은 값에서 첫번째 시작은 0번째)

#실수 포맷팅
print("{}님의 평점은 {}입니다.".format("A",3.14))
print("{}님의 평점은 {:f}입니다.".format("B",3.14))
print("{}님의 평점은 {:.1f}입니다.".format("C",3.15))
                              #print("{}님의 평점은 {:.1f}입니다.".format("C",3.16))
print("{}님의 평점은 |{:6.1f}|입니다.".format("C",3.16))



#5_3)서식 및 포맷팅 오류
print("%s    %s"    %("CK", 27))  #컴퓨터가 자기가 판단해서
                                  # 사용자 입장으론 에러입니다...
print("%s    %d"   %("CK",'27'))  

print("%s    %s"    %("CK", 27))
#코드 실행 시 순서대로 읽어서 실행 시, 중간에 에러가 날 경우
#밑에 있는 코드는 정상이여도 실행 X

print("{:s}   {:d}".format(100, 100))
print("{:s}   {:d}".format("100", "100")) #Error: 문자열을 숫자로 변경 X

'''
#6_    f 포맷팅
a = "최강"
print(f"{a}")












