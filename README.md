# Student Record Management System
A menu-driven "Student Record Management System" written in 'C' using 
a single linked list, dynamic memory allocation, modular programming, searching, sorting, file handling and compile using 'makefile'.

---

## Project Structure
The project is organized inside the `std_rec/` directory using modular C source and header files:

 File names & its functions 

 `student.h`    ->  Structure definition (`struct student`), macro definitions, and function prototypes. 
 `stud_main.c`  ->  Main function, menu display loop, and overall program flow. 
 `stud_add.c`   ->  Dynamically allocates a new student node and assigns the smallest unused positive roll number. 
 `stud_del.c`   ->  Deletes a specific record by roll number or name, or deletes all records while freeing memory. 
 `stud_show.c`  ->  Displays the complete student linked list in a formatted table. 
 `stud_mod.c`   ->  Searches and modifies existing student records by roll number, name, or percentage. 
 `stud_save.c`  ->  Saves records to `student.dat` and automatically loads existing data on startup. 
 `student.dat`  ->  Data file used to store and restore persistent student records. 

---

## Features & Menu Options
The program runs continuously until the user chooses to exit:

  `a/A` – Add New Record:  Allocates memory using `malloc()` and automatically assigns the lowest available positive roll number.
  `d/D` – Delete Record:  Delete a student by Roll Number (`R/r`) or Name (`N/n`) with duplicate-name handling.
  `s/S` – Show List:  Displays all student records (Roll No., Name, Percentage) in a tabular format.
  `m/M` – Modify Record:  Search by Roll Number (`R/r`), Name (`N/n`), or Percentage (`P/p`) to update student details.
  `v/V` – Save Records:  Writes the current linked list to `student.dat`.
  `t/T` – Sort List:  Sorts the linked list alphabetically by Name (`N/n`) or in descending order by Percentage (`P/p`).
  `l/L` – Delete All Records:  Frees all dynamically allocated nodes in memory without deleting `student.dat`.
  `r/R` – Reverse List:  Reverses the singly linked list in-place by rearranging node pointers.
  `e/E` – Exit:  Choose between Save and Exit (`S/s`) or Exit Without Saving (`E/e`), releasing all allocated memory before termination.

---

## Compilation & Execution
1. Navigate to the source folder
   cd std_rec

2. Compile the program
  'makefile' is already created and all the source code files are uploaded to makefile.
   Use 'make' to compile all source code files into the required executable named 'student'

3. Run the program
  ./student
