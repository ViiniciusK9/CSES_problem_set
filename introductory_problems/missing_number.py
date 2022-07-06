"""
from re import X


a = 842572599 
b = 577431753
x = 2
y = 1

while(a > 0 and b > 0):
    print(a, b) 
    a -= x
    b -= y 
    aux = x 
    x = y 
    y = aux

print(a, b)
"""

a = 842572599 // 2
a1 = 421286299
b = 577431753 - a1
b1 = 156145454 // 2
b2 = 78072727 * 2
b3 = 156145454 + 156145454
a2 = 78072727 + 1

print()

