all : my_ngram.c
	gcc -Wall -Wextra -Werror -o my_ngram my_ngram.c  
clean:
	rm -f *.o
fclean: clean
	rm -f *.o
	rm my_ngram
re: fclean all