T=input()
while T>0:
    N=input()
    front=0
    back=0
    finger=[long(i) for i in raw_input().split()]
    gloves=list(map(long,raw_input().split()))
    for (x,y,z) in zip(finger,gloves,gloves[::-1]):
        if y-x<0l:
            front=1
        if z-x<0l:
            back=1
    if front==1l and back==1l:
        print "none"
    elif front==0l and back==0l:
        print "both"
    elif front==0l and back==1l:
        print "front"
    else:
        print "back"
    finger=[]
    gloves=[]
    T=T-1
