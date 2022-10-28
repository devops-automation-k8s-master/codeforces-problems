n=int(input())
data=[tuple(int(k) for k in input().split()) for i in range(n)]
output=[0,0,0]

for x,y,z in data:
    output[0]+=x
    output[1]+=y
    output[2]+=z

if output[0] == 0 and output[1] == 0 and output[2] ==0:
    print("YES")
else:
    print("NO")
