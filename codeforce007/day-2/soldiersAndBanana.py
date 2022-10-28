k,n,w = (int(i) for i in input().split())
borrowMoney = n-((w*k*(w+1))//2)
if borrowMoney<0:
    print(-1*(borrowMoney))
else:
    print(0)
