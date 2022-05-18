a,b=map(int,input().split())
for i in range(1,b):
    if i%a==0 and i<b:
        print(i,end=" ")
        
