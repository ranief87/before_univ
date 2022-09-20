
# 1) 클래스: calculator 생성 후 객체 생성시 자동으로 메서드 받는 생성자 이용해서
# 총 6개 (self는 객체) 를 메서드에 멤버변수로 사용
# 객체는  cal1과 cal2를 생성
# 이 때 객체로 받는 멤버 변수를 제외한 나머지 멤버변수들은 합메서드와 평균메서드
# 에 사용될 시 cal1과 cal2에 각각 객체변수로 사용되게 만들어봅니다
# cal1은 1~5의 합 및 평균
# cal2는 6~10 의 합 및 평균

# class calculator:
#     def cal(self,n1,n2,n3,n4,n5):
#         self.n1=n1
#         self.n2=n2
#         self.n3=n3
#         self.n4=n4
#         self.n5=n5
#     def hap(self,n1,n2,n3,n4,n5):
#         return n1+n2+n3+n4+n5
#     def avg(self,n1,n2,n3,n4,n5):
#         return (n1+n2+n3+n4+n5)/5


# cal1= calculator()
# cal2= calculator()

# print(cal1.hap(1,2,3,4,5))
# print(cal1.avg(1,2,3,4,5))
# print(cal2.hap(6,7,8,9,10))
# print(cal2.avg(6,7,8,9,10))


# teacher's

# class calculation :
#     def _init_ (self,n1,n2,n3,n4,n5):
#         self.n1=n1
#         self.n2=n2
#         self.n3=n3
#         self.n4=n4
#         self.n5=n5
#     def sum(self):
#         self.hap=self.n1+self.n2+self.n3+self.n4+self.n5
#         return self.hap
#     def avg(self):
#         return self.hap/5

# cal1=calculation(1,2,3,4,5)
# cal2=calculation(6,7,8,9,10)

# print(cal1.sum())
# print(cal1.avg())
# print(cal2.sum())
# print(cal2.avg())


class calculator:
    def _init_(self,*args):
        self.args= args
    def sum(self):
        num=0
        for i in self.args:
            num+=1
        self.hap= hap
        return self.hap
    def avg(self):
        return self.hap/len(self.args)

cal=calculator(1,2,3,4,5,6,7,8,9,10)
print(cal.sum())
print(cal.avg())


for in in range (self.args)



