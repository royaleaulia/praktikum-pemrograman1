def reverse(num):
    reversed = 0
    while num > 0:
        reversed = (reversed * 10) + (num % 10)
        num //= 10
    return reversed

A, B = map(int, input().split())

A = reverse(A)
B = reverse(B)

C = A + B

print(reverse(C))