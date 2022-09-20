#day09_03.py

#14_3)조건문( 다중 if문:  if ~ elif ~ else문)

'''
#문법
if 조건식1:                 #조건식1이 참이면
    수행문1                 #수행문1,2를 수행 후, if문 종료
    수행문2
elif 조건식2:               #조건식1이 거짓이고, 조건식2가 참일 때
    수행문3                 #수행문3을 수행 후, if문 종료
elif 조건식3:               #조건식1,2가 거짓이며, 조건식3이 참일 때
    수행문4                 #수행문4 수행 후, if문 종료
else:                       #위에 조건식들이 다 거짓일 때만..
    모든 조건 거짓들 기능문
'''

#예제
a = "Life is too short, you need Health!"

if "Wife" in a:
    print("Wife")
elif "Health" in a and "you" not in a:
    print("Health, you")
elif "shirt" in a:
    print("shirt")
elif "need" in a:
    print("need")
else:
    print("none")


