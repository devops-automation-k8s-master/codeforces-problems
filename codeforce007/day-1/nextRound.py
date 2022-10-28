n,k =  (int(i) for i in input().split())
score = [ int(i) for i in input().split()]
count=0
for i in score:
    if score[k-1] <= i and i >0:
        count+=1
print(count)
