T=input()
while T>0:
    N=input()
    d={}
    colors={}
    ans=0
    colors=list(map(long,raw_input().split()))
    for elem in colors:
        d[elem]=d.get(elem,0)+1
    for i in d.values():
        if i>1:
            ans=ans+i-1
    print ans
