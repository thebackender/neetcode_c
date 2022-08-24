class Solution:
    def evalRPN(self, tokens) -> int:
        operators = ["+", "-", "*", "/"]
        arr = list()
        for t in tokens:
            if t in operators:
                a = arr.pop()
                b = arr.pop()
                num = eval(b + t + a)
                print(num)
                arr.append(str(int(num)))
            else:
                arr.append(t)
        return arr[0]

print(Solution().evalRPN(["10","6","9","3","+","-11","*","/","*","17","+","5","+"]))