word=raw_input()
result=""
vowelDataSet=['A','a','e','E','i','I','o','O','u','U','Y','y']
for elem in word:
    if elem in vowelDataSet:
        continue
    elif ord(elem)<97:
        result=result+"."+chr(ord(elem)+32)
    else:
        result=result+"."+elem
print result
