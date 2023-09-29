hargasepatuA = float(input("Masukkan Harga Sepatu A: "))
hargasepatuB = float(input("Masukkan Harga Sepatu B: "))

diskon13 = 13
diskon21 = 21

diskonsepatuA13persen = hargasepatuA - (hargasepatuA * (diskon13 / 100))
diskonsepatuB21persen = hargasepatuB - (hargasepatuB * (diskon21 / 100))

print(f"Sepatu A Mendapat Diskon {int(diskon13)} Sehingga Harganya Menjadi {int(diskonsepatuA13persen)}")
print(f"Sepatu B Mendapat Diskon {int(diskon21)} Sehingga Harganya Menjadi {int(diskonsepatuB21persen)}")
