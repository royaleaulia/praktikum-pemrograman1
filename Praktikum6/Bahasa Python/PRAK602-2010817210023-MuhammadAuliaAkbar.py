nInput = int(input())
inputke = []

# Input elemen
input_str = input()
input_list = input_str.split()

for i in range(nInput):
    inputke.append(int(input_list[i]))

# Output hasil perhitungan
for i in range(1, nInput + 1):
    print(inputke[i - 1] * i, end=" ")
