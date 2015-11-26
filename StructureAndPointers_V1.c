/*Assignment for "C for Embedded Course":
----Create a struct called student of char name[10], int seatNumber.
----Create an array of pointers to that struct
----Create a function to print the content of all the students passing to it the
......array of pointer to struct that u created holding all the student structs ......created which we assumed to be 5!*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>



struct student
 {
	 char name[10];
	 int seatno;

};
void Print(struct student * );
int main()
{
	// Creating the Students

	struct student anas;
	strcpy(anas.name,"Anas Halim"); //asign a value to the structure >> this is the only way to do this
	anas.seatno = 5;

	struct student ashraf;
	strcpy(ashraf.name,"Ashraf Nabil"); //asign a value to the structure >> this is the only way to do this
	ashraf.seatno = 2;

	struct student ahmed;
	strcpy(ahmed.name,"Ahmed Fawzy"); //asign a value to the structure >> this is the only way to do this
	ahmed.seatno = 4;

	struct student doha;
	strcpy(doha.name,"Doha Halim"); //asign a value to the structure >> this is the only way to do this
	doha.seatno = 3;

	struct student hadeer;
	strcpy(hadeer.name,"Hadeer Ahmed"); //asign a value to the structure >> this is the only way to do this
	hadeer.seatno = 10;



	struct student *ptr[5];
	ptr[0]=&anas;
	ptr[1]=&ashraf;
	ptr[2]=&ahmed;
	ptr[3]=&doha;
	ptr[4]=&hadeer;


	Print(ptr[0]);




	getchar();
}
	void Print(struct student *x)
	{
		printf("the name of the entered students is %s and its seat bumber is %d\n",x->name,x->seatno);
	}


