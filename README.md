# Prosensia Internship Tasks  
A collection of C++ programs submitted as part of my internship onboarding.

#Day 1 Tasks:

1.cpp - Hello World
A minimal C++ program to verify the development environment.
Key Concept: Basic program structure and output.

2.cpp - Age Input
Captures user input (age) and displays it back.
Key Concept: Variable declaration and cin/cout usage.

3.cpp - Student Information System
Takes multiple inputs (name, age, GPA) and formats the output.
Key Concept: Handling mixed data types (string, int, float).

#Day 2 Tasks:

Take input of marks for 3 subjects:
  - Mathematics
  - English
  - Physics
- Each subject has a maximum of **100 marks**
- Calculate:
  - **Total marks** out of 300
  - **Average percentage**
  - **Grade** based on the following criteria:

| Grade | Average (%)    |
|-------|----------------|
| A     | 80 – 100       |
| B     | 70 – 79        |
| C     | 60 – 69        |
| Fail  | Less than 60   |

💻 Sample Output
Enter your marks in given subjects (Each subject has 100 marks)
Enter obtained marks in Mathematics:
85
Enter obtained marks in English:
74
Enter obtained marks in Physics:
90
Total Marks = 249/300
Average = 83%
Grade: A

#Day 3 Task:

📌 Task: Eligibility Checker

This program takes user input for:

-Name
-Age
-CGPA

It then checks if the user is eligible to apply (Age ≥ 18 **and** CGPA ≥ 2.5) and prints a custom message using `if/else` statements.

##Day 4 Tasks:

📌 Task Overview

Today’s task focused on:

Practicing loops (for, while)
Reversing a number
Checking if a number is prime
📄 Programs Included

Reverse a Number

Input: Any integer
Output: Reversed digits
Loop Used: while and for (alternative)
Prime Number Checker

Input: Any integer
Output: Tells whether it is prime or not
Loop Used: for

##Day 5 Tasks
💻 ProSensia C++ Internship – Day 5

📌 Task Title: Function Logic – Factorial & Max of Three

Today’s task focuses on modular programming using user-defined functions in C++.

✅ What This Code Does

Calculates the factorial of a user-entered number using a factorial() function.
Determines the maximum of three integers using a maxOfThree() function.
🔧 Concepts Used

Function declarations and definitions
Parameters and return types
Local variables and scope
Edge case handling (e.g., negative factorial input)
💻 Sample Output

Enter a number to find factorial: 5 Factorial of 5 is 120

Enter three integers to find the maximum: 11 9 27 The maximum number is: 27

#Day 6 
💻 ProSensia C++ Internship – Day 6

📌 Task: Intelligent Array Analyzer

This simple C++ program performs the following:
- Takes input of **5 integers**
- Calculates:
  - ✅ Sum of all numbers
  - ✅ Average (2 decimal places)
  - ✅ Maximum and minimum values with their positions (1-based)
- Reorders the array to show:
  - ✅ Even numbers first, then odd numbers
  - ✅ Original order preserved in both sections

  💻 ProSensia C++ Internship – Day 7

📌 Task: String Manipulator – Reverse, Vowel Filter & Palindrome Check

This beginner-friendly C++ program takes a *single word (no spaces or symbols)* and performs:

- ✅ Converts string to lowercase manually
- ✅ Reverses string (no built-in functions)
- ✅ Checks for palindrome using index-based comparison
- ✅ Counts vowels (ignores repeated vowels like "coool" → 1 vowel)
- ✅ Rejects input with spaces or symbols

🎯 What I Learned
- How to work with strings character by character
- Writing small, useful functions (modularity)
- Validating user input without built-in libraries
- Logic for skipping repeated vowels

📥 Sample Input
Enter a single word (no spaces or symbols): Hello

📥Sample Output
String Analysis --- 
Original string  : hello 
Reversed string  : olleh 
String length    : 5 
Vowel count      : 2 
Is Palindrome?   : NO

💻 ProSensia C++ Internship – Day 8

## 📌 Task: Pointer Labyrinth – Conditional Swapping & Array Traversal

This C++ program uses **pointers** to:
- Swap two values **only if their difference > 10**
- Print array values with their **memory addresses**
- Increment **odd numbers** in the array using address manipulation
- Find the **first even element** (pointer return)
- Bonus: Count values greater than a reference value

## 📥 Sample Input
Enter two integers (a and b): 5 20

Enter 5 integers:
1 3 4 6 7

## 📤 Sample Output
🔁 Checking Conditional Swap:
Swapped because difference > 10.
a = 20, b = 5

🔹 Array Values and Memory Addresses:
Value: 1 Address: 0x...
Value: 3 Address: 0x...

🔼 Array after incrementing odd values by 1:
Value: 2 Address: 0x...
Value: 4 Address: 0x...

✅ First even element: 2 at address 0x...

🔢 Numbers greater than a (20): 0





💻 ProSensia C++ Internship – Day 9
📌 Task: Smart Student Manager – Structs + File I/O

This program manages student records using:
- struct Student { id, name, marks, grade }
- Manual file writing/reading using fstream
- Grade computed at the time of saving
- File format: delimited using |, not CSV or STL-based

🧠 Features Implemented
- Add student (ID, name, marks)
- Grade auto-assigned (A/B/C/F)
- Data stored in file with | delimiter
- Display all records in tabular format
- Search student by ID

🎯 Grading Logic
- A → 85+
- B → 70–84
- C → 50–69
- F → Below 50

🖥 Sample Output
Student Manager Menu ---

1. Add Student
2. Display All Students
3. Search Student by ID
4. Exit Enter choice: 2

ID	| Name		| Marks	| Grade

1	| Ali		| 88	| A 2	| Sara		| 65	| C

 📦 ProSensia C++ Internship – Day 10

📌 Mini Project: Inventory Management System

A beginner-friendly inventory system using:
- Structs
- File I/O (manual parsing with '|')
- No STL or built-in libraries

🎯 Features
- Add new item (with ID check)
- View all inventory in table format
- Search item by ID

🖥️ Sample Output

--- Inventory Menu ---

Add Item
View All Items
Search by ID
Exit
Enter choice: 2

ID Name Qty Price
1001 USB Cable 25 199.99

