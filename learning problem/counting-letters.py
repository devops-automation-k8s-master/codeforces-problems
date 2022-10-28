dic={}
def count_letter(string):
    for elem in string:
        if not(dic.has_key(elem)):
            dic[elem]=1
        else:
            dic[elem]=dic[elem]+1

string=raw_input("please enter a string\n")
count_letter(string)
print dic
