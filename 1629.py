a,b,c=input().split()
a=int(a)
b=int(b)
c=int(c)
for i in range(b):
    a*=a
print(a%c)