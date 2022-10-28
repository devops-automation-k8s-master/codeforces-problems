str =  input()

outputStr=""
vList=['a','A','e','E','i','I','u','U','o','O']
for char in str:
    if char not in vList:
        if ord(char)>=97 and ord(char)<=122:
            outputStr+="."+char
        else:
            outputStr+="."+chr(ord(char)-65+97)
print(outputStr)
