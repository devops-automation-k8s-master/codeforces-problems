watermelon=int(raw_input())
counter=0
for i in range(1,watermelon):
    if (watermelon-i)%2==0 and i%2==0:
        print "YES"
        counter=1
        break;
if watermelon%4==0 and counter==0:
    print "YES"
elif counter==0:
    print "NO"
