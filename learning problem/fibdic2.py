dic={0:0,1:1}
def fib(number):
    if dic.has_key(number):
        return dic[number]
    else:
        dic[number]=fib(number-1)+fib(number-2)
        return dic[number]


i=1
while i>0:
    number=input("please enter a number\n")
    print "fib of number=",fib(number)
    i=input("do u want to continue then enter 1 otherwise 0=")

print dic
