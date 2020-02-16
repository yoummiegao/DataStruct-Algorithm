'''
'''

class Node(object):
    def __init__(self, value=None, pointer=None):
        self.value = value
        self.pointer = pointer
        # pass
    def getData(self):
        return self.value
        # pass
    def getNext(self):
        return self.pointer
        # pass
    def setData(self, newValue):
        self.value = newValue
        # pass
    def setNext(self, newPointer):
        self.pointer = newPointer
        # pass
    pass