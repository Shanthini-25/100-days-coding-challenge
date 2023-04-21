t = int(input())
while t:
 t -= 1
 n = int(input())
 forwardMap = {}
 totalCost = 0
 inData = [None]*n
 destinations = set()
 sources = set()
 for i in range(n-1):
    inData[i] = input()
    forwardMap[inData[i].split()[0]] = inData[i]
    sources.add(inData[i].split()[0])
    destinations.add(inData[i].split()[1])
    totalCost += int(inData[i].split()[2][:-1])
 start = sources.difference(destinations).pop()
 for i in range(n-1):
     destination = forwardMap[start]
     print(destination)
     start = destination.split()[1]
 print('%d$'%totalCost)