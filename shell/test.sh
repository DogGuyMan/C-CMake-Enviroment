# export MallocStackLogging=1

#leaks --atExit -- ./build/Project

# https://eecs280staff.github.io/tutorials/setup_leakcheck.html
MallocStackLogging=1 leaks --atExit --list -- ./build/Project