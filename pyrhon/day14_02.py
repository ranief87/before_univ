#day14_02.py

#20.파이썬만의 간단한 반복 표현(리스트 안에 for문을 포함하는 "리스트 내포")

#20_1)result에 일반적인 값 리스트에 추가

# a = [1,2,3,4]
# result = []
# for num in a:
#     result.append(num * 3)
# print(result)

#20_2)for문 한 줄 표현
# a = [1,2,3,4]
# result = [(num*3, num+3) for num in a]
# print(result)

#이 리스트 내포는 반복문 안에 사용할 기능문은 "딱 한 가지 "기능만 할 경우에 사용 가능!

#20_3)응용
#20_3_1)일반
# a = [1,2,3,4]
# result = []
# for num in a:
#     if num % 2 == 0:
#         result.append(num*3)
# print(result)

#20_3_2)for+if 리스트내포
# a = [1,2,3,4]
# result =[num * 3 for num in a if num % 2 == 0 if num == 2]
# print(result)

#리스트 내포의 단점: 리스트 안에 제어문 사용시 중첩으로만 사용 가능.
#리스트 내포의 장점: 한 줄 표현