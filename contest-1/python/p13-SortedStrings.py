a=input()
c=list(a)
b=c
b.sort()
d="".join(b)
if a==d:
    print("yes")
else:
    print("no")
