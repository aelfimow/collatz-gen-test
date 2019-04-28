CXXFLAGS += -O2
# CXXFLAGS += -Wall
# CXXFLAGS += -Wextra
# CXXFLAGS += -pedantic
# CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++17

CXXFLAGS += -I../googletest/include
CXXFLAGS += -I../../collatz-asm/src

GTEST_OBJ = ../googletest/gtest-all.o
COLLATZ_FUNC_OBJ = ../../collatz-asm/src/collatz_length_windows.o

OBJDIR = ./obj

all:
	${CXX} -c main.cpp -o ${OBJDIR}/main.o ${CXXFLAGS}
	${CXX} -c test-collatz-length.cpp -o ${OBJDIR}/test-collatz-length.o ${CXXFLAGS}
	${CXX} -c test-collatz-calc.cpp -o ${OBJDIR}/test-collatz-calc.o ${CXXFLAGS}
	${CXX} ${GTEST_OBJ} ${COLLATZ_FUNC_OBJ} ${OBJDIR}/*.o -o collatz-test.exe
