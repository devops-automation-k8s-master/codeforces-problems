firstString=raw_input()
secondString=raw_input()

nfirstString=""
nsecondString=""

for elem in firstString:
    if(ord(elem)<97):
        nfirstString+=chr(ord(elem)+32)
    else:
        nfirstString+=elem

for elem in secondString:
    if(ord(elem)<97):
        nsecondString+=chr(ord(elem)+32)
    else:
        nsecondString+=elem

if nfirstString< nsecondString:
    print "-1"
elif nfirstString == nsecondString:
    print "0"
else:
    print "1"
