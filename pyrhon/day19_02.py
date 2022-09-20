
# 클래스와 객체

# class cal_set:
#     def setdata(self,first,second):
#         self.first =first
#         self.second=second
#         return self.first
#     def setdata1(self):
#         return self.first + self.second

# a = cal_set()
# print(a.setdata(4,2))
# print(a.setdata1())


# self.first는 객체를 생성 후, 사용되는 변수로 객체에 생성되는 객체만의 변수 
# 객체변수란? ^


# 객체변수와 메소드 정의를 이용한 클래스(사칙연산)

# class fourcal :
#     def setdata (self,a,b):
#         self.a= a 
#         self.b= b
#     def add(self,a,b):
#         return self.a + self.b
#     def sub(self,a,b):
#         return a - b
#     def mul(self,a):
#         return self.a * self.b
#     def div(self):
#         return self.a / self.b


# py1= fourcal()
# py2= fourcal()

# py1.setdata(12,4)

# print(py1.add(0,0))  # 16이 나온 이유? a,b는 0으로 들어갔지만 return된 것은 self.a와 self.b이기 때문에
# print(py1.sub(7,2))  # 5가 나온 이유? a b 가 return 값이므로
# print(py1.mul(0))
# print(py1.div()) 

# py2.setdata(20,10)
# print(py2.add(0,0))
# print(py2.sub(9,5))
# print(py2.mul(7))
# print(py2.div())


# 클래스에 삽입한 인수를 객체로 정의

# class cat:
#     def _init_ (self,name,age):
#         self.name= name
#         self.age= age
#     def get_name(self):
#         return self.name
#     def get_age(self):
#         return self.age

# c1=cat("최강",28)   # _init_ 생성자 메서드의 name,age를 초기화
# c2=cat("chicken",12)

# print(cl.get_name())
# print(c2.get_age())




# 메서드 정의 시 각종 초기값 지정해보기

# class puz:
#     def _init_(self,가로,세로,높이):
#         self.가로 = 가로
#         self.세로 = 세로
#         self.높이 = 높이
#     def set_가로(self,가로):
#         self.가로 = 가로
#     def set_세로(self,세로):
#         self.세로 = 세로
#     def set_높이(self,높이):
#         self.높이 = 높이
#     def getvolume(self):
#         return self.가로 * self.세로 * self.높이
#     def _slr_(self):
#         return "(%d ,%d ,%d)" %(self.가로, self.세로, self.높이 )

# box1 = (100,100,100)
# print(box1)
# print("상자의 부피(기본값): ",box1.getvolume())

# box1.set_가로(200)l
# print(box1.getvolume)















