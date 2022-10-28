fd=open("read.txt","r")
text=fd.readline()
while text != "":
    print len(text)
    print text[0:len(text)
    ]
    text=fd.readline()
