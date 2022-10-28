def pythonff(argument):
    """ docuemnt line.
    document line
    """
    return "bye"
def dictionary(operation,key,value,d):
    if operation == "add":
        d[key]=value
    elif operation == "del":
        del d[key]
    elif operation == "clear":
        d.clear()
    else:
        print "operation is wrong please choose other operation"
    print d[key]
