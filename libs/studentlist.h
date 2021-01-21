#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include "student.h"

struct List;
typedef struct List* ListHandle;

ListHandle	create_list(void);
void		destroy_list(ListHandle);

int			get_size(ListHandle);
int			isempty(ListHandle);
void		push_front(ListHandle, const Student* p);
void		pop_front(ListHandle);
void		print_list(ListHandle);
void		get_first(ListHandle, Student*);
void		make_empty(ListHandle);

#endif
