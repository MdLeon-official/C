#include <stdio.h>
#include <stdint.h>
#include <float.h>
#include <limits.h>

int main() {
printf("Ranges for integer data types in C\n\n");
printf("------------------------------------------------------------\n");
printf("int8_t %25d %20d\n", INT8_MIN, INT8_MAX);
printf("int16_t %25d %20d\n", INT16_MIN, INT16_MAX);
printf("int32_t %25d %20d\n", INT32_MIN, INT32_MAX);
printf("int64_t %25lld %20lld\n", INT64_MIN, INT64_MAX);
printf("uint8_t %25d %20d\n", 0, UINT8_MAX);
printf("uint16_t %25d %20d\n", 0, UINT16_MAX);
printf("uint32_t %25d %20u\n", 0, UINT32_MAX);
printf("uint64_t %25d %20llu\n", 0, UINT64_MAX);

printf("\n============================================================\n\n");

printf("Ranges for real number data types in C\n\n");
printf("------------------------------------------------------------\n");
printf("float %15.6e %15.6e\n", FLT_MIN, FLT_MAX);
printf("double %15.6e %15.6e\n", DBL_MIN, DBL_MAX);
printf("long double %15.6Le %15.6Le\n", LDBL_MIN, LDBL_MAX);

return 0;
}
