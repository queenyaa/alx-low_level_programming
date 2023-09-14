#!/usr/bin/python3

def isPalindrome(n):

    return str(n) == str(n)[::-1]

l_palin = 0

for x in range(100, 1000):
    for y in range(100, 1000):
        prod = x * y
        if isPalindrome(prod) and prod > l_palin:
            l_palin = prod

with open('102-result', 'w') as file:
    file.write(str(l_palin))
