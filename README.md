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


## Sample Output

```text
=== Sorting & Searching Arena ===
Enter size: 5
Enter elements: 64 34 25 12 22
> Sorting > Quick Sort > Randomized

Sorted: 12 22 25 34 64
swaps: 8, comparisons: 23
















