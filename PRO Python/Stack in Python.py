class Stack:
    def __init__(self):
        self.data = []

    def push(self, num):
        self.data.append(num)

    def pop(self):
        return self.data.pop()

    def peek(self):
        return self.data[-1]

    def print(self):
        [print(x,end=" ") for x in self.data]
        print()

stk = Stack()
stk.push(10)
stk.push(20)
stk.push(30)
stk.print()
stk.pop()
stk.pop()
stk.print()
print(stk.peek())
