angka = int(input("Input: "))

print("Output:", end=" ")

if angka == 0:
    print("Nol")
elif angka >= 1 and angka <= 9:
    print("Satuan")
elif angka >= 10 and angka <= 19:
    print("Belasan")
elif angka >= 20 and angka <= 99:
    print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")