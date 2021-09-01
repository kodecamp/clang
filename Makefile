# target: dependencies
# <tab>action
run: build
	./bin/app

build: main.o cp_objs
	# pass all the dependencies and create executable(link all of them)
	gcc ./objs/mystring.o ./objs/main.o -o ./bin/app -l m

main.o: mystring.o
	gcc -c ./src/main.c

mystring.o:
	gcc -c ./src/mystring.c

cp_objs:
	mv ./mystring.o ./objs/mystring.o
	mv ./main.o ./objs/main.o

clear:
	rm ./objs/*.o ./bin/app


