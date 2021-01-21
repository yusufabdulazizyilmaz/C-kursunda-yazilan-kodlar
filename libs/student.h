#ifndef STUDENT_H
#define STUDENT_H

#include "date.h"

typedef struct {
	int m_no;
	char m_name[20];
	char m_surname[20];
	char m_town[20];
	Date m_date;
}Student;

Student*	set_student_random(Student*);
void		print_student(const Student*);
void		print_student_(FILE *f, const Student*);

int			cmp_student_by_name(const Student* p1, const Student* p2);
int			cmp_student_by_surname(const Student* p1, const Student* p2);
int			cmp_student_by_no(const Student* p1, const Student* p2);
int			cmp_student_by_town(const Student* p1, const Student* p2);
int			cmp_student_by_date(const Student* p1, const Student* p2);


#endif
