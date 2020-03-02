for _ in range(3):
    x=int(input())
    sum=0
    for i in range(x):
        k=int(input())
        sum+=k
    if(sum==0): print("0")
    if(sum>0): print("+")
    if(sum<0): print("-")