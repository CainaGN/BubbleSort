// ARQUIVO ESPECIFICAÇOES
typedef struct float_vector FloatVector;

FloatVector *create(int tam);
void destroy(FloatVector **ref_vector);
int size(const FloatVector *vector);
int capacity (const FloatVector *vector);
float at(const FloatVector *vector, int pos);
float get(const FloatVector *vector);
void append(FloatVector *vector, float n);
void print(const FloatVector *vector);
void swap(float *a, float *b);
void bubble (const FloatVector *vetor, int tam_v);
void selectionSort(const FloatVector *vetor, int tam_v);
void insertionSort(const FloatVector *vetor, int tam_v);
void mergesort(const FloatVector *vetor, int inicio, int fim);
void merge(const FloatVector *vetor, int inicio, int meio, int fim);


// PODERIA EXISTIR

//bool compare(FloatVector, FloatVector*)
//void split(FloatVector*, FloatVector*)
//void join(FloatVector*, FloatVector*)
