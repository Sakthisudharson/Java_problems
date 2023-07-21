import java.util.*;
class Member()
{
    def __init__(self, name, age, phone_number, address, salary):
        self.name, self.age, self.phone_number, self.address, self.salary = name, age, phone_number, address, salary;
   
    def printSalary(self):
	{
        print(f"The salary of {self.name} is {self.salary}");
	}

class Employee(Member):
    def __init__(self, name, age, phone_number, address, salary, specialization):
        super().__init__(name, age, phone_number, address, salary);
        self.specialization = specialization;

   
class Manager(Member):
    def __init__(self, name, age, phone_number, address, salary, department):
        super().__init__(name, age, phone_number, address, salary);
        self.department = department;

       

emp = Employee("John", 25, "1234567890", "123 Main St, Anytown USA", 50000, "Web Development");
mgr = Manager("Jane", 35, "0987654321", "456 Oak St, Anytown USA", 80000, "Marketing");


print(f"Employee: {emp.name}, Salary: {emp.salary}, Specialization: {emp.specialization}");
print(f"Manager: {mgr.name}, Salary: {mgr.salary}, Department: {mgr.department}");
emp.printSalary()
mgr.printSalary()
}