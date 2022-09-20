# 1. 다음과 같은 자료를 가지고 sales_b의 값들의 합 구하기 (pop이용)
# 2. 1번 결과값을 천 단위 나오게 표시
sales_b= dict()
sales_b['11/5']=545526
sales_b['11/6']= 457823
sales_b['11/8']= 928618
sales_b['11/9']= 938574
sales_b['11/14']=837652
sales_b['11/29']=124567

print(sales_b['11/5']+sales_b['11/6']+sales_b['11/8']+sales_b['11/9']+sales_b['11/14']+sales_b['11/29'])

sale= sales_b['11/5']+sales_b['11/6']+sales_b['11/8']+sales_b['11/9']+sales_b['11/14']+sales_b['11/29']

print("{:,}". format(sale))

res1= sales_b.pop('11/5')
res2= sales_b.pop('11/6')
res3= sales_b.pop('11/8')
res4= sales_b.pop('11/9')
res5= sales_b.pop('11/14')
res6= sales_b.pop('11/29')

print(res1+res2+res3+res4+res5+res6)
print("{:,}".format(res1+res2+res3+res4+res5+res6))
