
def bindarySearch(a,k):
    print(a)
    if len(a) == 1:

        if a[0] ==  k:
            print("Element Exist")
        else:
            print("Element does not exist")
    else:
        print(a)
        middleElement = len(a)//2
        if a[middleElement] == k:
            print("Element Exist")
        elif a[middleElement]>k:
            bindarySearch(a[0:middleElement],k)
        elif a[middleElement]<k and len(a)>2:
            print(a[middleElement+1:])
            bindarySearch(a[middleElement+1:],k)
        else:
            print("Element does not exist")
k = int(input())
b=[int(i) for i in input().split(" ")]
bindarySearch(b,k)
