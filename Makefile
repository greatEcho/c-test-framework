CC := gcc
CFLAGS := -g -Wall -Wextra -Wpedantic

PROGRAM := hello

$(PROGRAM): $(PROGRAM).c
	$(CC) $(CFLAGS) -o $@ $<

test: $(PROGRAM)
	@echo "Starting unit tests.."
	@gcc -o $@ $@.c
	@echo -n "==> "
	@./test
	@echo "Starting end-2-end tests.."
	@echo -n "==> "
	@./testio.py	



clean:
	rm -f ./$(PROGRAM) ./test

.PHONY: test clean

