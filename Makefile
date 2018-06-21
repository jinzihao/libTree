test: test.cpp *.h
	g++ test.cpp -o test

clean:
	rm -f test
