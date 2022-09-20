#day06_03.py

#10_4)요소 값 삭제와 변경

#삭제 명령 del

tu1 = (1,3.1,'a',["ABC"])
#del tu1[0]    #튜플 안의 요소 삭제 불가능
#del tu1[3]

#tu1[0] = 10   #튜플 안의 요소값 변경 불가능
print(tu1)
print()
lt1 = [1,3.1,'a',("ABC",)]
print("lt1초기값: {}".format(lt1))
print(lt1[3])

del lt1[0]
print("lt1[0]삭제: {}".format(lt1))
#print(lt1[3])  인덱스 길이 변경되서 [3]은 X
lt1[0] = 3.14
print("lt1[0]변경: {}".format(lt1))

#lt1[2][0] = ["ABC",'abc'] #Error: 2차는 튜플임
lt1[2] = ["ABC",'abc']
print(lt1)

#10_5)슬라이스의 값 변경
lt1[0:3] = [2]    #묶인 자료형의 요소값으로 변경(슬라이스는 범위라 튜플,리스트,사전만 표현 가능)
print(lt1)

