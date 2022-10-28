testCases=int(input())
output=0
while testCases:
    a,b=(int(i) for i in input().split())
    output=0
    while a>0 and b >0:
        if a==1 and b==1:
            break
        if a>=b :
            if 2*b==a or 2*b+1==a:
                output+=b
                break
            else:
                a=a-2
                b=b-1
                output+=1
        else:
            if if 2*a==b or 2*a+1==b:
                output+=a
                break
            else:
                a=a-1
                b=b-2
                output+=1
    print(output)
    testCases-=1
