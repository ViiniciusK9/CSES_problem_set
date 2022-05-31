
'''
N = int(input())
lista_num = map(int, input().split())
falta = N
for teste, num in enumerate(sorted(lista_num)):
    if (teste + 1) != num:
        falta = teste + 1
        break
print(falta)
'''
md = 1000000007

print(2 ** 447 % md)