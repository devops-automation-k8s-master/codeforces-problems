def fib(number):
    if number ==0 or number ==1:
        return number
    else:
        value=fib(number-1)+fib(number-2)
        return value

print "please enter a number\n"
number=input("please enter a number")
print fib(number)
