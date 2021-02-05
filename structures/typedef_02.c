//yapılara ilişkin typedef bildirimi örnekleri

struct Data {
	int mx, my, mz;
};

struct Nec {
	int a, b;
};

typedef struct Data Data;
typedef struct Data* DataPtr;
typedef struct Nec Nec, *NecPtr;
