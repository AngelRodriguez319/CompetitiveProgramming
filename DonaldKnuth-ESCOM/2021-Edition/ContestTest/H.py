# Author: Angel Gabriel Rodriguez
# Date: August / 11 / 2021

data = input().split(' ')
a = int(data[0])
b = int(data[1])
p = int(data[2])

A = int(input())
B = int(input())
P = str(input())

result = str(A*B)

index = P.find('*')
print(result[index])