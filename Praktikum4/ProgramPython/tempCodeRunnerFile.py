Inputan = int(input("Input: "))

for i in range(1, Inputan):
    if(i % 2 == 1):
        print(i , end=' ')
    else:
        continue

print("")

for j in range(Inputan, 1, -1):
    if(j % 2 == 0):
        print(j , end=' ')
    else:
        continue
