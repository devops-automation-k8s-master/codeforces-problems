input=raw_input("please enter a string for reverse\n")
length=len(input)
s=""
while length>0:
     s+=input[length-1]
     length=length-1
print s
