def count(string,char):
    repet=0
    for elem in string:
        if elem==char:
            repet+=1
    return repet
i=1
while i>0:
    input=raw_input("please enter the string\n")
    char=raw_input("please enter the char\n")
    ccount=count(input,char)
    print ccount
    i=int(raw_input("press 1 for cont or press 0\n"))
