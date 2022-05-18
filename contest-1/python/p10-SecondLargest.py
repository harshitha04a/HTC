n=int(input())
a=[int(x) for x in input().split()]
b=list(a)
k=max(b)
b.remove(k)
g=max(b)
print((a.index(g))+1)
