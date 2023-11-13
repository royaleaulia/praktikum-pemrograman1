DuaInputan = input("Dua Inputan : ")

input1, input2 = map(int, DuaInputan.split())

if input1 < input2:
    batas = input2
    while input1 <= batas:
        if input1 == batas:
            print(f"{input1} {input2}")
        else:
            print(f"{input1} {input2}", end=" - ")
        input1+= 1
        input2-= 1
    
elif input1 > input2:
    batas = input1
    while input2 <= batas:
        if input2 == batas:
            print(f"{input1} {input2}")
        else:
            print(f"{input1} {input2}", end=" - ")
        input1-= 1
        input2+= 1

else:
    print("The two numbers are equal")