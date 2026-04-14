
# push_swap

A sorting algorithm implementation using two stacks and a limited set of operations, written in C.

## About

Given a list of unsorted integers, `push_swap` outputs the sequence of operations needed to sort the integers in ascending order on stack A, using stack B as auxiliary space.

### Available Operations

| Operation | Description |
|-----------|-------------|
| `sa` | Swap the top two elements of stack A |
| `sb` | Swap the top two elements of stack B |
| `pa` | Push the top element of stack B onto stack A |
| `pb` | Push the top element of stack A onto stack B |
| `ra` | Rotate stack A upward (top element becomes last) |
| `rb` | Rotate stack B upward (top element becomes last) |
| `rr` | Rotate both stacks upward |
| `rra` | Reverse rotate stack A (last element becomes first) |
| `rrb` | Reverse rotate stack B (last element becomes first) |
| `rrr` | Reverse rotate both stacks |

## Algorithm

- **2–5 elements**: Optimized hardcoded sorting routines.
- **6+ elements**: A chunk-based approach that divides the sorted range into sqrt(n) chunks, pushes elements to stack B by range, then refills stack A by popping the maximum from B.

## Build

```bash
make        # Build the push_swap executable
make clean  # Remove object files
make fclean # Remove object files and executable
make re     # Full rebuild
```

## Usage

```bash
./push_swap 3 2 1
./push_swap "5 4 3 2 1"
```

The program prints the list of operations to stdout, one per line.

## Project Structure

```
├── Makefile
├── lib/
│   └── push_swap.h
└── src/
    ├── main.c
    ├── sorting/
    │   ├── main_algo.c
    │   ├── check_len_tosort.c
    │   └── algo_utils.c
    ├── moves/
    │   ├── p_stacks.c
    │   ├── s_stacks.c
    │   ├── r_stacks.c
    │   └── rrr_stacks.c
    └── utils/
        ├── linked_lists.c
        ├── arg_pars.c
        ├── fillers_sortedarr.c
        ├── helper_functions.c
        ├── helper_functions_2.c
        └── helper_functions_3.c
```
