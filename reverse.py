x=input("Enter a number\n")
#long way
'''
y=len(x)
x=int(x)
i=a=b=0
while i<y:
    b=x%10
    a=a*10+b
    x=int(x/10)
    i+=1
print(a)
'''
#simple way(can be used to reverse any text)
print(x[::-1])