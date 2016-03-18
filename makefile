obra: obras.o main.o pinturas.o esculturas.o literatura.o diseno.o
	g++ obras.o main.o pinturas.o esculturas.o literatura.o diseno.o -o obra

main.o: main.cpp obras.h pinturas.h esculturas.h literatura.h diseno.h
	g++ -c main.cpp

obras.o: obras.cpp obras.h
	g++ -c obras.cpp

pinturas.o: pinturas.cpp obras.h pinturas.h
	g++ -c pinturas.cpp

esculturas.o: esculturas.cpp obras.h esculturas.h
	g++ -c esculturas.cpp

literatura.o: literatura.cpp obras.h literatura.h
	g++ -c literatura.cpp

diseno.o: diseno.cpp obras.h diseno.h
	g++ -c diseno.cpp

