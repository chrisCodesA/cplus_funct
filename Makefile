#my make file

all: cpLlambdas stringGym RemoveDups

cpLlambdas: cpLlambdas.o
	g++ cpLlambdas.o -o cpLlambdas

cpLlambdas.o: cpLlambdas.cpp
	g++ -Wall -c cpLlambdas.cpp

stringGym: stringGym.o
	g++ stringGym.o -o stringGym

stringGym.o: stringGym.cpp
	g++ -Wall -c stringGym.cpp

RemoveDups: RemoveDups.o
	g++ RemoveDups.o -o RemoveDups

RemoveDups.o: RemoveDups.cpp
	g++ -Wall -c RemoveDups.cpp

clean:
	rm -rf *.o cpLlambdas stringGym RemoveDups