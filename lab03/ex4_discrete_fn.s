.globl f # this allows other files to find the function f

# f takes in two arguments:
# a0 is the value we want to evaluate f at
# a1 is the address of the "output" array (read the lab spec for more information).
# The return value should be stored in a0
f:
    # Your code here
    addi t0, a0, 3 # t0 is the index
    slli t2, t0, 2 # t2 = t0 * 4
    add a1, t2, a1 # a1 = a1 + index * 4
    lw a0, 0(a1)   # 
    # This is how you return from a function. You'll learn more about this later.
    # This should be the last line in your program.
    jr ra
