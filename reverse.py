x=input("Enter a number\n")
y=len(x)
x=int(x)
i=a=b=0
while i<y:
    b=x%10
    a=a*10+b
    x=int(x/10)
    i+=1
print(a)    
