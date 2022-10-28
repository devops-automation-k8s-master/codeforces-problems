import math
T=input()
while T>0:
    NH=[long(i) for i in raw_input().split()]
    N=NH[0]
    H=NH[1]
    data=list(map(long,raw_input().split()))
    max=data[0]
    for i in data:
        if i>max:
            max=i
    minH=H-N+1l
    #print minH,max
    temp=long(math.ceil(float(max)/minH))
    print temp
    T=T-1
    NH=[]
    data=[]
