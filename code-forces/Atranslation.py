import string
firstString=raw_input()
secondString=raw_input()
temp="".join(reversed(firstString))
if temp==secondString:
    print "YES"
else:
    print "NO"
