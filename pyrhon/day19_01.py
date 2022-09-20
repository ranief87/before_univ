

# 클래스 계속

# 클래스 예시 (1) 문제점
# 1)클래스 선언
# class HAM :
#     def recipe (a,b):     # 매개변수, 멤버변수(클래스 안에 메서드에 들어가서)
#         print("%s버거는 %s와 %s로 만들어집니다" %(a,a,b))


# 2)객체를 생성
# 치즈버거 = HAM()
# 치킨버거 = HAM()


# 3) 객체 이용해서 접근
# HAM.recipe("치즈","피클") # 함수처럼 호출해서 사용
# HAM().recipe("치즈","피클")

# 치즈버거.recipe("치즈","피클")
# 치킨버거 .recipe("치킨","양상추")

# 클래스 선언한 명으로 직접 접근해서 호출하면 적용되는데
# 객체를 생성 후 접근하려고 하면 typeError(매개변수(멤버변수))는 2개인데 이상하게 3개가 필요
# 이유: 객체를 생성한 순간 HAM().recipe()로 접근할 때 이미 HAM()객체가 멤버변수에 전달되기 때문
# 즉, 객체 치즈버거는 이미 HAM클래스 안에 recipe 메서드에 "자동 전달"된 것입니다


# 클래스 예시 (2) 해결점


# class HAM:
#     def recipe (self,a,b):                      # self 라는 변수는 객체를 받는 멤버변수
#         print("%s버거는 %s와 %s로 만들어집니다" %(a,a,b))

# HAM.recipe("치즈,"피클")
# HAM().recipe("치즈","피클")
# 치즈버거 = HAM()
# 치킨버거 = HAM()
# 치즈버거 .recipe("치즈","피클")
# 치킨버거 .recipe("치킨","양상추")


# 클래스 안에 함수를 정의(덧셈 계산기 이어짐)

class calculation :
    def _init_(self):       # _init_은 메서드 중에서 클래스 메서드 생성자 (constructor)라 함
        self.result = 0     # _init_은 객체가 생성될 때 자동 호출되는 메서드
                            # self.result는 객체 생성시 자동 호출되는 초기값
    def add(self,num):
        self.result += num
        return self.result

cal1= calculator()
cal2= calculator()

print(cal1.add(4))
print(cal1.add(5))

print(cal2.add(7))
print(cal2.add(9))


# 생성자란? 객체가 생성될 때 클래스의 메서드 안에 멤버변수를 초기화나 객체 생성과 동시에 작업을 가동




