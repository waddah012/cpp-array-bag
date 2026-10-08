# Array bag

This is my array version of a bag in C++. A bag can hold the same item more than once, and the order of the items does not matter.

I used shopping items in the example to try adding items, removing one or all copies, counting duplicates, and combining two bags. The program prints the contents as it goes so you can see what changed.

The array holds 20 items. If it is full, adding another item replaces the last one. Removing an item also moves the last item into its place.

To build and run it, you need a C++17 compiler and Make. Open a terminal in this folder and run:

```sh
make
make run
```

You can also run `make check` to check the sample output. That needs Python 3. Use `make clean` if you want to remove the compiled program.
