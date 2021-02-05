//yapılara ilişkin typedef bildirimi örnekleri

typedef struct Data{
	int x, y, z;
}Data;

typedef struct {
	int mx, my;
}Point;


typedef struct Node {
	int mval;
	struct Node* mpnext;
}Node;

typedef struct {
	Node* mpfirst;
	int msize;
}*ListHandle;
