#string="g fmnc wms bgblr rpylqjyrc gr zw fylb. rfyrq ufyr amknsrcpq ypc dmp. bmgle gr gl zw fylb gq glcddgagclr ylb rfyr'q ufw rfgq rcvr gq qm jmle. sqgle qrpgle.kyicrpylq() gq pcamkkclbcb. lmu ynnjw ml rfc spj."
string="http://www.pythonchallenge.com/pc/def/map.html"
secstr=""
for i in string:
    if 'a'<=i<='z':
        secstr+=chr((ord(i)-ord('a')+2)%26+ord('a'))
    else:
        secstr+=i
print secstr
#print string.maketrans()
