x=input("Enter the number\n")
#long way
'''
y=len(x)
x=int(x)
a=int(input("Enter the digit\n"))
count=0
i=0
while i<y:
    b=x%10
    if b==a:
        count+=1
    x=int(x/10)
    i+=1
print(count)
'''
#simple way(can be used to check frequency of any text)
a=input("Enter the digit\n")
print(x.count(a))