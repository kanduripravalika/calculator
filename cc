#case 1:
class calculator():
    def __init__(self,num1,num2):
        self.num1=num1
        self.num2=num2
    def add(self):
        return self.num1+self.num2
    def sub(self):
        return self.num2-self.num1
    def mul(self):
        return self.num1*self.num2
    def div(self):
        return self.num2/self.num1
num1=int(input("Enter first number: "))
num2=int(input("Enter second number: "))
obj=calculator(num1,num2)
print("1. Add")
print("2. Subtraction")
print("3. Multiplication")
print("4. Division")
print("Result: ",obj.add())
print("Result: ",obj.sub())
print("Result: ",obj.mul())
print("Result: ",round(obj.div(),2))
print()

excepted output:
Enter first number: 10
Enter second number: 94
1. Add
2. Subtraction
3. Multiplication
4. Division
Result:  104
Result:  84
Result:  940
Result:  9.4


#case2:

class calculator():
    def __init__(self,num1,num2):
        self.num1=num1
        self.num2=num2
    def add(self):
        return self.num1+self.num2
    def sub(self):
        return self.num1-self.num2
    def mul(self):
        return self.num1*self.num2
    def div(self):
        return self.num1/self.num2
num1=int(input("Enter first number: "))
num2=int(input("Enter second number: "))
obj=calculator(num1,num2)
choice=1
while choice!=0:
    print("0. Exit")
    print("1. Add")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")
    choice=int(input("Enter choice: "))
    if choice==1:
        print("Result: ",obj.add())
    elif choice==2:
        print("Result: ",obj.sub())
    elif choice==3:
        print("Result: ",obj.mul())
    elif choice==4:
        print("Result: ",round(obj.div(),2))
    elif choice==0:
        print("Exiting!")
    else:
        print("Invalid choice!!")
 
 
print()

excepted output:
Enter first number: 25
Enter second number: 15
0. Exit
1. Add
2. Subtraction
3. Multiplication
4. Division
Enter choice: 1
Result:  40
0. Exit
1. Add
2. Subtraction
3. Multiplication
4. Division
Enter choice: 2
Result:  10
0. Exit
1. Add
2. Subtraction
3. Multiplication
4. Division
Enter choice: 3
Result:  375
0. Exit
1. Add
2. Subtraction
3. Multiplication
4. Division
Enter choice: 4
Result:  1.67
0. Exit
1. Add
2. Subtraction
3. Multiplication
4. Division
Enter choice: 0
Exiting!
