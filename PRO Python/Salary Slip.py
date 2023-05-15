class Employee:
    def __init__(self, emp_id, emp_name):
        self.emp_id = emp_id
        self.emp_name = emp_name
        self.basicSalary = 0
        self.netSalary = 0
        self.da = 0
        self.hra = 0
        self.pf = 0
        self.tax = 0

    def calculate_tax(self):
        package  = self.netSalary * 12
        self.tax = 0
        amount = package

        if amount > 1000000:
            self.tax += (amount-1000000)*0.3
            amount = 1000000

        if amount > 750000:
            self.tax += (amount-750000)*0.20
            amount = 750000

        if amount > 500000:
            self.tax += (amount-500000)*0.10
            amount = 500000

        if amount > 250000:
            self.tax += (amount-250000)*0.05
            amount = 250000

        self.tax = round(self.tax/12, 2)
           
    def set_salary(self, salary):
        self.basicSalary = salary
        self.da = self.basicSalary * 0.02
        self. hra = self.basicSalary * 0.03
        self.pf = self.basicSalary * 0.03
        self.netSalary = self.basicSalary + self.da + self.hra + self.pf
        self.calculate_tax()

    def generate_payslip(self):
        print("< < < < < S A L A R Y   S L I P  > > > > >")
        print()
        print(">> Emp ID:", self.emp_id)
        print(">> Name:", self.emp_name)
        print(">> Base Salary:", self.basicSalary)
        print(">> House Rent Allowance:", self.hra)
        print(">> Dearness Allowance:", self.da)
        print(">> Provident Fund:", self.pf)
        print("---------------------------------")
        print("Net Salary:", self.netSalary)
        print("Tax:", self.tax)
        print("---------------------------------")
        print("Final Salary:", self.netSalary - self.tax)


if __name__ == '__main__':
    emp = Employee(123, "Prathamesh")
    emp.set_salary(80000)
    emp.generate_payslip()
