a,b=(int(i) for i in input().split())

A=[int(i) for i in input().split()]
B=[int(i) for i in input().split()]
d={}
sum=0
for i in A:
    if i in d:
        d[i]+=1
    else:
        d[i]=1
for elem in B[1:]:
    if d[elem] >1:
        sum+=d[elem]
        sum=sum%998244353
print(sum%998244353)
