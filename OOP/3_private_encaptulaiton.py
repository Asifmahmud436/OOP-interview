class Account:
    def __init__(self,account_number,balance):
        self.__account_number = account_number
        self.__balance = balance

    def get_account_number(self):
        return f"Your account number is: {self.__account_number}"
    
    def get_balance(self):
        return f"Your current balance is: Tk. {self.__balance}"
    

# here account number and balance is example of private encapsulation
obj1 = Account(12543675,30000)
print(obj1.get_account_number())
print(obj1.get_balance())

