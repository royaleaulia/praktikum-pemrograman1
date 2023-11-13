userInput = input('Example: 42 X =  ')
parts = userInput.split()

if len(parts) == 2:
    inputKelipatanKe = int(parts[0])
    Huruf = parts[1]

    for i in range(1, 51):
        if(i % inputKelipatanKe == 0):
            print(Huruf, end=' ')
            continue
        else:
            print(i, end=' ')
else:
    print("Data Yang Dimasukan Tidak Valid")