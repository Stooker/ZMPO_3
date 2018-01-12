#pragma once
class Book
{
public:
	static int konsParam;
	static int konsCopy;
	static int konsMove;

	char* tytul;
	char* autor;
	int iloscStron;

	Book();
	Book(char* tytul, char* autor, int iloscStron);
	Book(const Book &inny);
	Book(Book&& inny);
	~Book();

	Book & operator= (const Book &inny);
	Book & operator= (Book&& inny);

};

