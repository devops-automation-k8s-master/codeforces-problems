inputData=raw_input().split()
totalRupee=int(inputData[0])*int(inputData[2])*(int(inputData[2])+1)
totalRupee=totalRupee/2
if totalRupee-int(inputData[1])>=0:
    print totalRupee-int(inputData[1])
else:
    print "0"
