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
