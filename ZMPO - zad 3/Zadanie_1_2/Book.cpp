#include "Book.h"
#include <cstddef>

int Book::konsParam = 0;
int Book::konsCopy = 0;
int Book::konsMove = 0;

Book::Book() : 
	tytul(nullptr), autor(nullptr), iloscStron(0)
{
}


Book::Book(char * tytul, char * autor, int iloscStron) :
	tytul(tytul), autor(autor), iloscStron(iloscStron)
{
	konsParam++;
}

Book::Book(const Book & inny) :
	tytul(inny.tytul),
	autor(inny.autor),
	iloscStron(inny.iloscStron)
{
	konsCopy++;
}

Book::Book(Book && inny):
	tytul(inny.tytul),
	autor(inny.autor),
	iloscStron(inny.iloscStron)
{
	inny.tytul = nullptr;
	inny.autor = nullptr;
	inny.iloscStron = NULL;

	konsMove++;
}

Book::~Book()
{
}

Book & Book::operator=(const Book & inny)
{
	if (&inny != this)
	{
		tytul = inny.tytul;
		autor = inny.autor;
		iloscStron = inny.iloscStron;
	}

	konsCopy++;

	return *this;
}

Book & Book::operator=(Book && inny)
{
	if (&inny != this)
	{
		tytul = inny.tytul;
		autor = inny.autor;
		iloscStron = inny.iloscStron;

		inny.tytul = nullptr;
		inny.autor = nullptr;
		inny.iloscStron = NULL;
	}

	konsMove++;

	return *this;
}
