## Features
Creates a Person base class to store organization details.
Creates an Employee class that inherits from Person.
Creates a Manager class that inherits from Employee.
Stores and displays organization name and GST ID.
Stores and displays employee name and ID.
Stores and displays the manager's post.
Demonstrates multilevel inheritance in C++.
Uses separate functions to display information at different levels of inheritance.

## Concepts Used
Class and Object – Person, Employee, and Manager are classes, while m1 is an object of the Manager class.
Inheritance – Employee inherits from Person, and Manager inherits from Employee.
Multilevel Inheritance – The inheritance occurs across three levels:

Person → Employee → Manager.

Base Class – Person is the first/base class.
Derived Class – Employee derives from Person, and Manager derives from Employee.
Member Functions – display(), displayEmployee(), and displayManager() display information.
Data Members – Variables such as org_name, gst_id, name, id, and post store information.
Public Inheritance – The classes use public inheritance to access inherited members.
## Output
Name of organization: TESLA
GST ID: 1234
Name of Employee: Elon
ID Number: 5678
Post: CEO
