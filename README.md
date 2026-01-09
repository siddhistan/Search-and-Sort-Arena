# Search and Sort Arena

A console-based C program that demonstrates multiple sorting and searching algorithms with real-time performance metrics and robust input handling.

---

## Table of Contents

- Features
- Performance Metrics
- Algorithm Complexities
- Tech Stack
- Quick Start
- Sample Output
- Input Validation
- Screenshots
- Purpose
- Future Enhancements

---

## Features

### Searching Algorithms

- Linear Search (Iterative)
- Linear Search (Recursive)
- Binary Search (Iterative)
- Binary Search (Recursive)

### Sorting Algorithms

- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort
- Heap Sort
- Quick Sort (Three Variants)
  - Lomuto Partition
  - Hoare Partition
  - Randomized Lomuto

---

## Performance Metrics

This project tracks algorithm efficiency during execution.

| Algorithm Type | Metrics Tracked |
|---------------|-----------------|
| Bubble Sort, Selection Sort | Swaps, Comparisons |
| Insertion Sort | Shifts, Comparisons, Inversions |
| Merge Sort | Inversions, Comparisons |
| Quick Sort (all variants), Heap Sort | Swaps, Comparisons |

---

## Algorithm Complexities

| Algorithm | Best | Average | Worst | Space |
|---------|------|---------|-------|-------|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) |
| Heap Sort | O(n log n) | O(n log n) | O(n log n) | O(1) |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) |

---

## Tech Stack

- C99 Standard
- Dynamic memory management using malloc and free
- Modular design using main.c, sorting.c, and searching.c
- Input sanitization using clear_buffer()
- srand() and rand() for randomized quick sort
- Real-time performance profiling

---

## Quick Start

### Windows (Command Prompt)

```bash
gcc main.c sorting.c searching.c -o arena.exe -std=c99 -Wall
arena.exe
```

## Sample Output

```text
=== Sorting & Searching Arena ===
Enter size: 5
Enter elements: 64 34 25 12 22
> Sorting > Quick Sort > Randomized

Sorted: 12 22 25 34 64
swaps: 8, comparisons: 23
```

## Input Validation

- `clear_buffer()` is used after every `scanf` call
- Handles mixed character and numeric input safely
- Supports space-separated array input
- Menu re-prompts on invalid input
- Entering `0` exits from any menu level

---

## Screenshots

### Sorting using Quick Sort
<img width="1483" height="758" alt="image" src="https://github.com/user-attachments/assets/46ad2f64-e730-4017-b020-1e78aa0008d0" />


### Recursive Linear Search
<img width="1521" height="780" alt="image" src="https://github.com/user-attachments/assets/240f7633-70f0-4885-bacb-f9f738c365a7" />



---

## Purpose

This project is designed as an educational tool for comparing sorting and searching algorithms using real performance metrics, strong input handling, and multiple implementations. It is suitable for DSA coursework, interviews, and hackathons.

---

## Future Enhancements

- Automated test cases (random, sorted, reverse order)
- File input and output support
- Algorithm visualizations
- CSV export of performance metrics

















