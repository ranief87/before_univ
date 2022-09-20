
# dictionary 예시

#dict(): 딕셔너리 함수로   []안에 key를 넣고 = value 
'''
sales_a=dict({'b':3, 'c':6})
print(sales_a)
print(list(sales_a))
print(tuple(sales_a))
print(len(sales_a))

lt=list(sales_a)
print(lt[0])   # dict() -> list, tuple  가능 (문법적으로)
               # list,tuple-> dict() 불가능             키와 값 한쌍이 필요    
'''
'''
sales_b= dict()
sales_b['11/5']=545526
sales_b['12/5']= 457823
sales_b['11/2']= 928618
sales_b['13/4']= 938574
sales_b['12/7']=837652
sales_b['17/5']=124567
print(sales_b,type(sales_b))
print(sales_b['12/5'])
print()
'''
# pop() 를 이용한 내용 추출
# 문법 변수명 .pop (인덱스 번호나 키 값)
'''
a= {'a': 8,'b':4,'c':7}
print('초기a',a)
result_pop= a.pop ('b')
print(a)    # pop은 안에 있는 값을 뽑아서 반환 
print(result_pop)


result3= {'a': 8,'b':4,'c':7}.pop('c')
print(result3)
'''
# 키('c')에 들어있는 값을  result에 저장
# 단 a 값을 따로 설정한 것이므로 저장 x
a= {'a': 8,'b':4,'c':7}
print(a.pop('a'))    # 사전에서는 키만 인덱스 구별

res1 = a.pop('b')
print(res1,and," ," ), print(a)






