#include "Book.h"
#include <vector>
#include <cstdio>

int comptytul(Book &lewy, Book &prawy)
{
	return strcmp(lewy.tytul, prawy.tytul);
}

int compautor(Book &lewy, Book &prawy)
{
	return strcmp(lewy.autor, prawy.autor);
}

int compiloscStron(Book &lewy, Book &prawy)
{
	if (lewy.iloscStron == prawy.iloscStron)
	{
		return 0;
	}

	return lewy.iloscStron < prawy.iloscStron ? -1 : 1;
}


void zamien(Book *lewy, Book *prawy)
{
	Book temp = *lewy;
	*lewy = *prawy;
	*prawy = temp;
}

void sortuj(std::vector<Book> &books, int comp(Book &lewy, Book &prawy))
{
	for (size_t i = 0; i < books.size(); i++)
	{
		for (size_t j = 0; j < books.size() - 1; j++)
		{
			if (comp(books[j], books[j + 1]) > 0)
			{
				zamien(&books[j], &books[j + 1]);
			}
		}
	}
}

void printBook(Book book)
{
	printf("%s, %s, %i \n", book.tytul, book.autor, book.iloscStron);
}

void printBooksVector(std::vector<Book> books)
{
	int konsParam = 0;
	int konsCopy = 0;
	int konsMove = 0;

	for (size_t i = 0; i < books.size(); i++)
	{
		printBook(books[i]);

		konsParam += books[i].konsParam;
		konsCopy += books[i].konsCopy;
		konsMove += books[i].konsMove;
	}

	printf(" Parametryczny:  %i \n", konsParam);
	printf(" Copy:  %i \n", konsCopy);
	printf(" Move:  %i \n", konsMove);
}

int main()
{
	std::vector<Book> books;
	
	books.emplace_back(Book("Poczatek", "Dan Brown", 432));
	books.emplace_back(Book("Za zamknietymi drzwiami", "B.A. Paris", 190));
	books.emplace_back(Book("Jak zawsze", "Zygmunt Miloszewski", 452));
	books.emplace_back(Book("Prokurator", "Paulina Swist", 511));
	books.emplace_back(Book("Komisarz", "Paulina Swist", 145));
	books.emplace_back(Book("Tekst", "Dmitry Glukhovsky", 378));
	books.emplace_back(Book("Generalowie", "Juliusz Cwieluch", 435));
	books.emplace_back(Book("Womanizer", "Katy Evans", 108));
	books.emplace_back(Book("Swiatlo", "Jay Asher", 978));
	books.emplace_back(Book("To", "Stephen King", 121));

	
	printf("Original:\n");
	printBooksVector(books);

	sortuj(books, comptytul);
	printf("\nPo tytule:\n");
	printBooksVector(books);

	sortuj(books, compautor);
	printf("\nPo autorze:\n");
	printBooksVector(books);

	sortuj(books, compiloscStron);
	printf("\nPo ilosci stron:\n");
	printBooksVector(books);

	system("PAUSE");
    return 0;
}



