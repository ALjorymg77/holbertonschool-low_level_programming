#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
    *state = (*state * 1103515245u) + 12345u;
    return *state;
}

static void build_dataset(void)
{
    unsigned int state;
    int i;

    state = SEED_VALUE;

    for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
    int i;
    int v;

    for (i = 0; i < DATASET_SIZE; i++)
    {
        v = dataset[i];
        v = (v * 3) + (v / 7) - (v % 11);
        if (v < 0)
            v = -v;
        dataset[i] = v;
    }
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;

    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

    return sum;
}

int main(void)
{
    unsigned long checksum;
    clock_t start;
    clock_t after_build;
    clock_t after_process;
    clock_t end;
    double total_seconds;
    double build_seconds;
    double process_seconds;
    double reduce_seconds;

    /* Shared boundaries separate the three phases; output is not timed. */
    start = clock();
    build_dataset();
    after_build = clock();

    process_dataset();
    after_process = clock();

    checksum = reduce_checksum();
    end = clock();

    total_seconds = (double)(end - start) / (double)CLOCKS_PER_SEC;
    build_seconds = (double)(after_build - start) / (double)CLOCKS_PER_SEC;
    process_seconds = (double)(after_process - after_build) /
        (double)CLOCKS_PER_SEC;
    reduce_seconds = (double)(end - after_process) / (double)CLOCKS_PER_SEC;

    if (checksum == 0ul)
        printf("impossible\n");

    printf("TOTAL seconds: %.6f\n", total_seconds);
    printf("BUILD_DATA seconds: %.6f\n", build_seconds);
    printf("PROCESS seconds: %.6f\n", process_seconds);
    printf("REDUCE seconds: %.6f\n", reduce_seconds);

    return 0;
}
