def find_char(string,ch):
    i=0
    for elem in string:
        if elem == "a" :
            return i
        i=i+1
    return -1
string=raw_input("please enter the string")
char=raw_input("please enter the char")
print "string=",string,"char=",char
postion=find_char(string,char)
print postion
