class Difference:
    def __init__(self, a):
        self.__elements = a
    
    def computeDifference(self):
        elements = self.__elements
        elements.sort()
        maxVal = elements[len(elements)-1]
        self.maximumDifference = maxVal - elements[0]

# End of Difference class

_ = input()
a = [int(e) for e in input().split(' ')]

d = Difference(a)
d.computeDifference()

print(d.maximumDifference)