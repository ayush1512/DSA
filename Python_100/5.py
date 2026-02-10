class op:
    def __init__(self):
        self.s = ""
        
    def getString(self):
        self.s = input()
        
    def printString(self):
        print(self.s.upper())
        
obj = op()
obj.getString()
obj.printString()