totalDetik = int(input("Input: "))

hari = totalDetik // 86400
totalDetik %= 86400

jam = totalDetik // 3600
totalDetik %= 3600

menit = totalDetik // 60
detik = totalDetik % 60

if hari > 0:
    print(f"Output: {hari} hari {jam:02}:{menit:02}:{detik:02}")
else:
    print(f"Output: {jam:02}:{menit:02}:{detik:02}")
