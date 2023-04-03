a=0
while a<4:
    b=0
    while b<7:
        if (b>=(3-a)) and (b<=(3+a)):
            print("*",end='')
        else:
            print(" ",end='')
        b+=1
    print("\n")
    a += 1