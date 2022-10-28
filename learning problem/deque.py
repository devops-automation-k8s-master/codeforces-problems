from collections import deque
test=input()
finaltop=0
localtop=0
check=0
d=deque()
while test>0:
    countelem=input()
    elem=list(map(int,raw_input().split()))
    if countelem%2!=0:
        elem.insert(countelem/2,elem[countelem/2])
    if elem[0]<elem[-1]:
        finaltop=elem[-1]
    else:
        finaltop=elem[0]
    d=deque(elem)
    #print d
    if countelem==1:
        print "Yes"
    else:

        while len(d)>0 :
            left=d.popleft()
            right=d.pop()
            if left<right:
                localtop=left
            else:
                localtop=right
            if finaltop>=localtop:
                finaltop=localtop
            else:
                print "No"
                check=1
                break
        if len(d)==0 and check!=1:
            print "Yes"
        d.clear()
        elem=[]
        check=0
        test=test-1
