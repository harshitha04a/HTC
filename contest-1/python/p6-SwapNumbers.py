n=int(input())
a=[int(x) for x in input().split()]
a[0],a[n-1]=a[n-1],a[0]
for i in a:
    print(i,end=" ")
