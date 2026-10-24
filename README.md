# Algorithms for Arrays

This repository is a small collection of C++ examples for practicing array
algorithms and reusable programming patterns. The code focuses on simple,
explicit implementations that are easy to read and adapt.

## What is covered

- Reversing arrays, including an in-place swap-based implementation
- Filtering a partially filled array, such as removing odd values
- Copying values from selected positions while respecting a destination limit
- Selecting or copying values based on an inclusive interval
- Generating and printing repeating `0, 1, 2` sequences
- Looking up values in a table, illustrated by days in a month
- Basic loop, indexing, counter, and partially filled array patterns

The root directory contains array examples such as `remove_odd.cpp`,
`copy_values_inside_interval.cpp`, and the two reverse-array versions. The
`Patterns/` directory contains smaller examples of reusable control-flow and
array patterns. Some files define helper functions rather than complete
programs and are intended to be included in a larger program.

## Compiling and running

There is currently no build system; compile individual standalone examples
with a C++ compiler such as `g++`:

```bash
g++ -std=c++17 remove_odd.cpp -o remove_odd
./remove_odd
```

For another standalone example, replace the source and output names, for
example:

```bash
g++ -std=c++17 Patterns/zero_one_two.cpp -o zero_one_two
./zero_one_two
```

Function-only files need a `main()` function or a separate driver before they
can be run by themselves. The examples are intentionally independent, so
their interfaces and assumptions may differ.

This README is an initial guide and can evolve as more algorithms, examples,
tests, or build instructions are added.
