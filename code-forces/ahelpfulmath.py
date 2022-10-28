summands=raw_input().split('+')
string=""
b=sorted(summands)
i=0
string=b[0]
for elem in range(1,len(b)):
    string=string+"+"+b[elem]
print string
