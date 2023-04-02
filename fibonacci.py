a=0
b=1
n=int(input("enter the limit\n"))
print("0\n1")
i=2
while i<n:
  x=a+b
  a=b
  b=x
  print(x)  
  i+=1

