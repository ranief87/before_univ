# 실습

# 1. pid= "030816-1178692" 라는 주민번호가 있다
# 2. 주민번호를 "-"기준으로 분할 후 생년월일만 뽑은 후 새로운 변수열에 저장
#이때 '1'은 몇 개인지 , 갯수를 구합니다
# 3. pluto='python:is:important:programming' 라는 문자열이 있는데
# pluto의 결과: Python Is Important Programming 으로 바꾸기

pid= "030116-1178692"
pid_lt=pid.split("-")
print(pid_lt)
pid_lt_0= pid_lt[0]
#pid_lt_0= pid_lt.pop(0)
print(pid_lt_0, type(pid_lt_0))
print(pid_lt_0.count('1'))



pluto='python:is:important:programming'
print("pluto의 결과: ", pluto.replace(":"," "))
pluto2= pluto.replace(":"," ") 
print(pluto2.title()) 

print(pid.split("-"))


















