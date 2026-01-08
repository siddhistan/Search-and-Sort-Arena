Search-and-Sort-Arena 
Console-based Sorting & Searching Algorithm Visualizer
with Real-time Performance Metrics & Robust Input Handling

 Table of Contents
Features

Performance Metrics

Algorithm Complexities

Tech Stack

Quick Start

Sample Output

Input Validation

Screenshots

 Features
Searching Algorithms
Linear Search (Iterative)

Linear Search (Recursive)

Binary Search (Iterative)

Binary Search (Recursive)

Sorting Algorithms
Bubble Sort

Selection Sort

Insertion Sort

Merge Sort

Heap Sort

Quick Sort (3 variants)

Lomuto Partition

Hoare Partition

Randomized Lomuto

📊 Performance Metrics
Unique Feature: Tracks algorithm efficiency live!

Algorithm	Metrics Tracked
Bubble, Selection	Swaps, Comparisons
Insertion	Shifts, Comparisons, Inversions
Merge	Inversions, Comparisons
Quick (all), Heap	Swaps, Comparisons
⏱️ Algorithm Complexities
Algorithm	Best	Average	Worst	Space
Bubble Sort	O(n)	O(n²)	O(n²)	O(1) 
​
Selection Sort	O(n²)	O(n²)	O(n²)	O(1)
Insertion Sort	O(n)	O(n²)	O(n²)	O(1)
Merge Sort	O(n log n)	O(n log n)	O(n log n)	O(n)
Heap Sort	O(n log n)	O(n log n)	O(n log n)	O(1)
Quick Sort	O(n log n)	O(n log n)	O(n²)	O(log n)
🛠️ Tech Stack
text
✅ C99 Standard
✅ Dynamic Memory (malloc/free)
✅ Modular Design (main.c + sorting.c + searching.c)
✅ Input Sanitization (clear_buffer())
✅ srand()/rand() for Quick Sort
✅ Performance Profiling
🚀 Quick Start
bash
# Windows (Command Prompt)
gcc main.c sorting.c searching.c -o arena.exe -std=c99 -Wall
arena.exe

# Linux/Mac  
gcc main.c sorting.c searching.c -o arena -std=c99 -Wall
./arena
📱 Sample Output
text
=== Sorting & Searching Arena ===
Enter size: 5
Enter elements: 64 34 25 12 22
> Sorting > Quick Sort > Randomized

Sorted: 12 22 25 34 64
swaps: 8, comparisons: 23 
 Input Validation
text
🔹 clear_buffer() after every scanf()
🔹 Handles letters/numbers mix gracefully
🔹 Space-separated array input supported
🔹 Menu re-prompts on invalid input
🔹 0: Exit from any level
📸 Screenshots
(Add your console output screenshots here)

text
[Insert arena running screenshot]
 Purpose
Educational tool for comparing algorithm performance through real metrics, input handling, and multiple implementations. Perfect for DSA coursework, hackathons, and interviews.

 Future Enhancements
Automated test cases (random/sorted/reverse)

File I/O support

Algorithm visualizations

CSV export of metrics

Built with ❤️ for algorithm enthusiasts | Ready for production!
