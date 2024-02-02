#include <stdio.h>
int calculateTotalRuns(int runs[], int numBatsmen) {
    int totalRuns = 0;
    for (int i = 0; i < numBatsmen; i++) {
        totalRuns += runs[i];
    }
    return totalRuns;
}
int findHighestScorer(int runs[], int numBatsmen, int *maxRuns) {
    int maxBatsman = -1;
    *maxRuns = 0;
    for (int i = 0; i < numBatsmen; i++) {
        if (runs[i] > *maxRuns) {
            *maxRuns = runs[i];
            maxBatsman = i;
        }
    }
    return maxBatsman;
}
int main() {
    int numBatsmen, runs[100], totalRuns, maxRuns, maxBatsman;
    printf("Enter the number of Batsmen: ");
    scanf("%d", &numBatsmen);
    printf("Enter the runs scored by each Batsman:\n");
    for (int i = 0; i < numBatsmen; i++) {
        printf("Batsman %d: ", i);
        scanf("%d", &runs[i]);
    }
    totalRuns = calculateTotalRuns(runs, numBatsmen);
    maxBatsman = findHighestScorer(runs, numBatsmen, &maxRuns);
    printf("\nTotal Runs: %d\n", totalRuns);
    printf("Batsman %d scored the highest runs: %d\n", maxBatsman, maxRuns);
    return 0;
}
