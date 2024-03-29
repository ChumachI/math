CC=gcc
WAY=./unit_test/
OS=$(shell uname)
WILD=$(wildcard */*.c)
WILD_SORT=$(shell find . -name "*.c" ! -name "*test*")
FLAGS=-Wall -Werror -Wextra
ifeq ($(OS), Linux)
  FLAGS_LCHECK = -lcheck -pthread -lsubunit -lrt -lm
  OPEN=xdg-open
else
  FLAGS_LCHECK = -lcheck
  OPEN=open
endif
FLAGS_GCOV = -coverage -fprofile-arcs -ftest-coverage
FILE_TEST = my_math_test

all: clean test

.PHONY: test
test: my_math.a
	$(CC) -c $(WILD)
	$(CC) -o test *.o $(FLAGS) $(FLAGS_LCHECK)

.PHONY: gcov_report
gcov_report: my_math.a
	mkdir report
	$(CC) $(FLAGS) $(WILD) \
		$(FLAGS_LCHECK) $(FLAGS_GCOV) \
		$(WILD_REPORT) -o report/info
	./report/info
	lcov -t "report/info" -o report/gcovreport.info -c -d .
	genhtml -o report report/gcovreport.info
	$(OPEN) report/index.html

my_math.a:
	$(CC) -c $(WILD_SORT)
	ar -rcs $@ *.o
	ranlib $@
	rm -rf *.o

.PHONY: docker
docker:
	docker rmi -f string && docker build -t string . && docker run --name unit string
	# docker cp unit:/hello/report .
	docker rm unit

.PHONY: cppcheck
cppcheck:
	cppcheck --enable=all --suppress=missingIncludeSystem *.c *.h

style:
	clang-format -i */*.c
	clang-format -i */*.h
	clang-format -i $(WAY)*.c
	clang-format -i $(WAY)*.h


clean_no_all:
	rm -rf *.o *.gcda *.gcno *.info
	rm -f info

clean:
	rm -rf *.o *.gcda *.gcno *.info
	rm -f info
	rm -f *.a
	rm -rf report
	rm -f test

.PHONY: git
git: style
	rm -rf report
	git add .
	git commit -m "commit"
	git push
