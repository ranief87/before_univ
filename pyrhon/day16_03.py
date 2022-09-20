#day16_03.py

#23_11) 예제 11) 매개변수에 초기값 지정
def say_myself(name = "name", age = 1, man = True):
    print("나의 이름은 %s입니다."%name)
    print("나이: {}살".format(age))
    if man:
        print("남자")
    else:
        print("여자")
    

# say_myself("최강", 28, "남자")
# say_myself("최강", 28)
# say_myself()    #매개변수에 미리 초기화시 전달 되지 않으면, 초기화된 값으로 실행해준다.

#23_12) 예제 12) 여러 개 반환은 불가능
def say_myself(name = "name", age = 1, man = True):
    print("나의 이름은 %s입니다."%name)
    print("나이: {}살".format(age))
    if man:
        print("남자")
    else:
        print("여자")
    #return name,age,man : 튜플 자료형으로 자료 1개 반환
    #return [name], [age], [man]
    return name
    return age
    return man          #리턴은 딱 "한 개 자료"만 반환 가능!
print(say_myself("a",28,"man"))