# Array-Based Bag ADT

A fixed-capacity bag with duplicate items, removal, frequency counts, and union operations.

An educational C++ example developed from coursework, organized as a standalone project.

## Build and run

Requires a C++17 compiler and Make. Smoke checks also require Python 3.

```sh
make
make run
make check
```

To choose a compiler: `make CXX=clang++` or `make CXX=g++`. Run `make clean` to remove build outputs.

## Example

The demonstration constructs two shopping bags and exercises their operations.

## Structure

- `src/`: source code and headers.
- `tests/smoke.py`: representative console checks with execution timeouts.
- `Makefile`: builds the source files together into `build/example`.

## Scope

Capacity is 20 items. Adding when full replaces the last stored item; order is not preserved by removal.

The source retains the original exercise logic and explanatory comments. Build outputs, submission documents, and course materials are not part of this repository.
