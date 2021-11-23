CC =gcc
AR =ar
OBJECTS_MAIN= main.o
OBJECTS_my_mat= my_mat.o
FLAGS= -Wall -g 
all : connections

connections: $(OBJECTS_MAIN) libclassmy_mat.a
	$(CC) $(FLAGS)  -o connections $(OBJECTS_MAIN) libclassmy_mat.a

mat: libclassmy_mat.a
libclassmy_mat.a: $(OBJECTS_my_mat) 
	$(AR) -rcs libclassmy_mat.a $(OBJECTS_my_mat) 
	
.PHONY: clean all

clean:
	rm -f *.o *.a *.so connections
