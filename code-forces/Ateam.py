nofProblems=int(raw_input())
result=0
for i in range(nofProblems):
    a=raw_input().split()
    if int(a[0])+int(a[1])+int(a[2])>=2:
        result+=1;
print result
