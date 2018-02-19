##############################################################################
# MAC_GNU:		MAC OS X Apple with GNU compiler gfortran.
##############################################################################
F90_SER = gfortran
F90_OMP = gfortran
F90_MPI = mpif90
FLAGS_OPT = -O
FLAGS_MSC = -w -fno-second-underscore
FLAGS90_MSC = $(FLAGS_MSC) -ffree-line-length-none
FLAGS_SER =
FLAGS_OMP = -fopenmp
FLAGS_MPI =
INCS_SER =
INCS_OMP =
INCS_MPI =
LIBS_SER =
LIBS_OMP = -static-libgcc
LIBS_MPI =
O_DIR =
OUT = -o 
EXTO = o
MAKE = make
RM = rm -f
swch = -unix