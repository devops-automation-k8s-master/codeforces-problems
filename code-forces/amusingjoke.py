word1=raw_input()
word2=raw_input()
newWord=raw_input()
def calculate(word1,word2,newWord):
    dic={}
    for elem in word1:
        if dic.has_key(elem):
            dic[elem]+=1
        else:
            dic[elem]=1

    for elem in word2:
        if dic.has_key(elem):
            dic[elem]+=1
        else:
            dic[elem]=1
    #print dic
    for char in newWord:
        if dic.has_key(char):
            dic[char]-=1
        else:
            dic[char]=1
    #print dic
    c=dic.values()
    #print c
    for elem in c:
        if elem!=0:
            return "NO"
    return "YES"

result=calculate(word1,word2,newWord)
print result
