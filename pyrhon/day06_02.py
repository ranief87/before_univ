#day06_02.py

#10_2) 튜플 및 리스트 차이점과 안에 요소값 접근하기
#1. 튜플만 소괄호 생략 가능(리스트 생략 X)
#2. 튜플 안에 묶인 자료형들은 요소값 변경이 불가능(상수화)
#   리스트 안에 묶인 자료형들은 변경이 가능(변수화)

#10_2_1)묶음 자료형의 요소값 접근(인덱스번호)
#인덱싱
a = 1,2,3
tup = tuple(a)
lt = list(a)
print(tup,lt)

print(tup[0],type(tup[0]))
print(lt[2],type(lt[2]))

#tup[0]는 튜플 tup안에 갯수 중 시작 0번째 인덱스 번호에 위치한 값을 말함.
print()

#10_2_2)양수와 음수 번호로 인덱스 출력
print(tup[2], tup[-1]); print(tup[1],tup[-2])
print(lt[0],lt[-3])

print()

#10_2_3)2차 이상 튜플 및 리스트 형식 인덱스 접근
a = [1,2,['a','b',['Life','Live']]] #3차 리스트
b = (3,4,('c','d',('Hello','Hi')))  #3차 튜플
c = [5,6,('e',['f','g'])]           #1차,3차 리스트, 2차 튜플

print(a[0], a[2], a[2][-3], a[2][2][0])

print()
#10_2_4)슬라이싱(slice) [인덱스번호를 범위로 지정해서 추출]
tup = (1,2,3)
lt = [1,2,3]


print(tup[0:2], tup[1:3], tup[-1: -1], tup[:1])
#슬라이스는 기본: a[x:y]는 x인덱스번호가 시작점 ~ 끝점: y-1인덱스 번호까지 묶어서 출력
print(lt[1:2], lt[0:3], lt[-1:], lt[2:0], lt[:])

print()

#10_2_5)튜플 및 리스트 연산
#1) + : 합침
#튜플
tu1 = (1,2,'a','b')
tu2 = (3,4,('ab',))
print(tu1 + tu2)
tu1 += tu2  #tu1 = tu1 + tu2
print(tu1)  #튜플 + 튜플 = 새로운 튜플

#리스트
lt1 = [1,2,"a"]
lt2 = [4,5,('a','b')]
print(lt1 + lt2)
#lt2 -= lt1
lt2 += lt1
print(lt2)

print()

#2)* : 반복하기
t, l = ('a','b'), [1,2]
print("t : {}".format(t * 3))
print("l : {}".format(l * 3))

print()
#10_3)길이(갯수) 구하기 : len(x)는 x에 몇개 요소 갯수가 있는지 세는 함수
a = (1,2,'a',[3,4])
b = [(1,2,3), 'a']
print("a에 들어있는 요소 갯수 : {}개".format(len(a)))
print("b에 들어있는 요소 갯수 : {}개".format(len(b)))

print("a[3]에 들어있는 요소 갯수: {}개".format(len(a[3])))
print("b[1]에 들어있는 요소 갯수 : {}개".format(len(b[1])))