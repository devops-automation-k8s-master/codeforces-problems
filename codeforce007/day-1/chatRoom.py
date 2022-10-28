s=input()
output=[]
temp=s[0]
count=1
output.append(temp)
for char in s[1:]:
    if temp != char:
        output.append(char)
        temp=char
        if char == 'l':
            count=1
    elif temp == 'l' and char == 'l' and count==1:
        output.append(temp)
        count=0
if("".join(output).find('hello') == -1):
    print("NO")
else:
    print("YES")
