s=input()
index=0
output=[]
for char in 'hello':
    for i in range(index,len(s)):
        if s[i] == char:
            output.append(s[i])
            index=index+1
            break
        else:
            index=index+1
if len(output) == 5:
    print("YES")
else:
    print("NO")
