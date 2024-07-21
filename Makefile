	@echo Makefile is making...
sum:sum_func.c
	gcc sum_func.c -o sum
.PHONY:clean
	rm sum
