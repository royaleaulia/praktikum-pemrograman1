DuaInputan = input("Input : ")

banyakN, kelipatan = map(int, DuaInputan.split())

hasil = 0
hasilAkhir = 0


for i in range(1, banyakN+1):
    hasilpbaris = i * kelipatan
    hasil += hasilpbaris
    if i == 1:
        print(f"{i} * {kelipatan} = {hasilpbaris}")
    else:
        print(f"({i} * {kelipatan}) + ({i-1} * {kelipatan}) = {hasil}")
    
    hasilAkhir += hasil

print(hasilAkhir)
