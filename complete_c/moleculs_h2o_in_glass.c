#include <stdio.h>

int main(void)
{
    // how much moleculs h2o in glass
    int N;
    double blob_mass = 0.05;
    double blobs_in_glass = 249.5;
    double mass_molecul = 3e-23;
    scanf("%d", &N);
    int blob = blobs_in_glass / blob_mass * N;
    double moleculs = blob * blob_mass / mass_molecul;
    printf("%d %.3e", blob, moleculs);
    return 0;
}