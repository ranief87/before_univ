
# 길이를 반환하는 함수  len()만들기
# lt=["a","b","c",7]
# tu=(1,2,8,"d","e")
# dic={"a":4,"b":7}
# print(len(lt),len(tu),len(dic))

# print()

# # copy len  for문
# def copy_len(st):
#     num = 0
#     for i in st:
#         num += 1
#     return num
# print(copy_len(lt),copy_len(tu),copy_len(dic))

# print(copy_len((1,2)))

# print(copy_len(("a","c")))

# len 을 while 로 index이용


print()

# 함수 내에 return 두 개 이상 존재하는 경우

# def return_compare(num1,num2):
#     if num1 >= num2:
#         return num1
#     else:
#         return num2

# print("3과 7중에서 큰 수는 %d이다" %return_compare(3,7))

print()


# 두 개의 정수를 입력받고 return_compare()함수를 이용하되, 절댓값을 구하는 함수를 추가 후
# 두 개 값 중 절댓값이 큰 수를 구하게 코딩
# 단, 절댓값 함수: abs(x)가 아닌 abs_compare(x)라는 함수를 직접 만들어서 이용
# 출력 결과: ()와 ()중에서 절댓값이 큰 수는 ()이다.


# num1=int(input("숫자 1 입력: "))
# num2=int(input("숫자 2 입력: "))

# def abs_return(num1,num2):
#     if num1>=0 and num2>=0:
#         if num1>=num2:
#             return num1
#         else:
#             return num2
#     elif num1<=0 and num2<=0:
#         if num1>=num2:
#             return num1
#         else:
#             return num2
#     elif num1>=0 and num2<=0:
#         if num1>= -(num2):
#             return num1
#         else:
#             return num2
#     elif num1<=0 and num2>=0:
#         if -(num1)>=num2:
#             return num1
#         else:
#             return num2
# print("{}와 {}중에서 절댓값이 큰 수는 {}이다".format(num1,num2,abs_return(num1,num2)))



# 재귀호출(함수 안에 자기자신 함수를 호출)

# def re_func():
#     print("자기자신 호출?")
#     return re_func

# re_func()    

# 내용 임시복사하다가 메모리의 자리 부족으로 에러가 뜨면서 print만 남고 모두 삭제


# 피보나치 수열

# 1 1 2 3 5 8 13 21 34 ...

# 처음 두 항은 1 그 다음번째 항부터는 앞 두 개의 합
# 


# def fib(n):
#     if n==0: return 0
#     if n==1: return 1
#     return fib(n-1)+fib(n-2)

# print(fib(7))

# num=0
# for i in range(5):
#     num+=fib(i+1)
# print(num)



# quiz 재귀 호출을 이용해서 5!을 구하는 함수를 만들어보자
# 팩토리얼 n!= n*(n-1)*(n-2)*...1
#           = n*(n-1)!
#
# 0!과  1!은 1로 약속
# 
 



def fac(n):
    if n==0: return 1
    if n==1: return 1
    return n*fac(n-1)
print(fac(5))






