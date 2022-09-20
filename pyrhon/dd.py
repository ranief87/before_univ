score80= 0
N = int (input("학생 수: "))
for i in range(N):
    if score[i] >= 80:
        score80 = score80+1
print(N, "명 중 80점 이상은 ", score80, "명임")