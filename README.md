
Student Result Database (C Console App)
A tiny, in‑memory student record system written in C.
It lets you add up to 50 students, list all entries, and search by roll number – all from the command line.
Features
- Add a student (roll, name, marks)
- Display all stored records
- Search for a record by roll number
- Simple text‑menu interface
How to compile
gcc -Wall -o student_db main.c   # replace main.c with your source file name

How to run
./student_db

Follow the on‑screen menu:
1. Add Student
2. Display All Students
3. Search Student
4. Exit

Code overview
- struct Student holds int roll, char name[30], float marks.
- s[MAX] is a global array (MAX = 50) that stores the records.
- count tracks how many entries are currently stored.
- Functions:
    - addStudent() – validates capacity, reads data, increments count.
    - displayStudent() – prints all records if any exist.
    - searchStudent() – linear search by roll number.
- main() presents the menu and drives the loop.
Limitations
- Data is kept only in RAM; it disappears when the program exits.
- No input validation beyond basic scanf checks.
- Name length limited to 29 characters (to leave space for the null terminator).
License
This project is released under the MIT License. See LICENSE for details.
Feel free to fork, improve, or add persistence (e.g., file I/O) as you see fit!
