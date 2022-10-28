from collections import deque
test=input()
finaltop=0
localtop=0
d=deque()
while test>0:
    countelem=input()
    elem=list(map(int,raw_input().split()))
    d=deque(elem)
    if len(d)==2:
        print "yes"
    else:
        print "no"
