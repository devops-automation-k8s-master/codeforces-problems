import string
def achatroom(word):
    hvalue=0
    list=['h','e','l','l','o']
    status=1
    for elem in list:
            temp=word.find(elem,hvalue)
            if temp==-1:
                return "NO"
            else:
                hvalue=temp+1
    return "YES"

word=raw_input()
ans=achatroom(word)
print ans
