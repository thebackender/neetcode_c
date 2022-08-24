class MinStack:

    def __init__(self):
        self.data = list()
        self.min_data = list()
        self.size = 0

    def push(self, val: int) -> None:
        self.data.append(val)
        if self.size:
            if val >= self.min_data[self.size-1]:
                self.min_data.append(self.min_data[self.size-1])
            else:
                self.min_data.append(val)
        else:
            self.min_data.append(val)
        self.size += 1

    def pop(self) -> None:
        self.size -= 1
        self.data.pop()
        self.min_data.pop()

    def top(self) -> int:
        return self.data[self.size - 1]
        
    def getMin(self) -> int:
        return self.min_data[self.size - 1]
# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()