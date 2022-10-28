str=input()
word=list(str)
capsCount=0
smallCount=0
if word[0]>='a' and word[0]<='z':
    word[0]=chr(ord(word[0])-97+65)

for i in range(1,len(str)):
    if word[i]>='A' and word[i]<='Z':
        word[i]=chr(ord(word[i])-65+97)
        capsCount+=1
    else:
        smallCount+=1
if capsCount==len(str)-1 or smallCount==len(str)-1:
    print("".join(word))
else:
    print(str)
