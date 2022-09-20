#day11_01.py

#while계속

#15_5) 1 ~ 10까지의 합을 구해보기(누적 합계 변수명 이용)
a = 0     #조건식에 사용될 초기값
hap = 0
while a < 10:
    a += 1      #a = a + 1
    #print(a)
    hap += a    #hap = hap + a        #1씩 증가한 a의 값을 hap에 더해서 누적(누적합계코드)
    #print("{} = {} + {}".format(hap,a,hap-a))
print("합:",hap)

#15_5_1)초기값 다를 경우
a = -1   
hap = 1
while a <= 10:
    hap += a    
    a += 1
print("합:",hap)   #위와 결과는 같지만, 반복은 총 12번 
