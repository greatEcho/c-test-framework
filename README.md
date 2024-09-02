# My Manual Tests Automation Framework for C language

- Unit Tests via [MinUnit](https://jera.com/techinfo/jtns/jtn002)

- End-2-End Tests via Python script using `subprocess.run` (in these tests we tests using stdin, stdout)

## Main file -- Makefile with __test__ target

```make
test: $(PROGRAM)
        @echo "Starting unit tests.."
        @gcc -o $@ $@.c
        @echo -n "==> "
        @./test
        @echo "Starting end-2-end tests.."
        @echo -n "==> "
        @./testio.py

```


