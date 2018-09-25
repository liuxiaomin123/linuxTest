obj := say.o sayhello.o main.o
CC := g++
EXE := saymain

$(EXE): $(obj)
	$(CC) -o $(EXE) $(obj)

say.o: say.h
sayhello.o: say.h
main.o: say.h

.PHONY : clean
clean:
	rm $(EXE) $(obj)
	@echo finish!
