def sum_all(k):
    sum=0
    for i in range(k+1):
        sum+=i
    return sum

def sum_range(n1,n2):
    if n2 is None:
        result=sum_all(n1)
        return result
    elif n1>n2:
        result=sum_all(n1) - sum_all(n2)
        return result
    else:
        result=sum_all(n2-1) -sum_all(n1)
        return result

def sum_range1(n1):
    result=sum_all(n1)
    return result

n1=6
n2=21

n1=94
n2=7


n1=100

print(sum_range1(n1))

n1=100
n2=1
print(sum_range(n1,n2))