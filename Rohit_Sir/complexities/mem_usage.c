#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>
#include <unistd.h> // For sleep()

void print_memory_usage(const char *label)
{
    struct rusage usage;
    getrusage(RUSAGE_SELF, &usage);
    printf("%s Memory usage in KB = %ld\n", label, usage.ru_maxrss);
}

int main()
{

    // Print initial memory usage
    print_memory_usage("Initial");

    // Allocate memory
    int *arr = (int*)malloc(1000000 * sizeof(int)); // Increased allocation
    if (arr == NULL)
    {
        perror("Failed to allocate memory");
        return 1;
    }

    // Introduce a delay to ensure memory allocation is processed
    sleep(1); // Sleep for 1 second

    // Print memory usage after allocation
    print_memory_usage("After allocation");

    // Free allocated memory
    free(arr);

    // Print memory usage after deallocation
    print_memory_usage("After deallocation");

    return 0;
} 
