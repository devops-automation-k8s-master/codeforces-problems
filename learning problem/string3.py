def printCharcter(string):
    length=len(string)
    i=0
    while i<length:
        print string[i]
        i=i+1

input=raw_input("please enter the strings\n")
printCharcter(input)
