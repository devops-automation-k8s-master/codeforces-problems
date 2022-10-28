if __name__ == '__main__':
    N = int(input())
    for op in range(N):
      operation = input().split()
      if operation[0] == "insert":
          arg1 = int(operation[1])
          arg2 = int(operation[2])
          li.insert(arg1,arg2)
      elif operation[0] == "append":
          arg1 = int(operation[1])
          li.append(arg1)
      elif operation[0] == "remove":
          arg1 = int(operation[1])
          li.remove(arg1)
      elif operation[0] == "pop":
          li.pop()
      elif operation[0] == "sort":
           li.sort()
      elif operation[0] == "reverse":
           li.reverse()
      elif operation[0] == "print":
          print(li)
      else:
        print("operation")
