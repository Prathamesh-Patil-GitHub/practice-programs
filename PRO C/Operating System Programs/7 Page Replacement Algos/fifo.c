#include<stdio.h>
#include<stdlib.h>

int search(int arr[], int num, int n){
	int i;
	for(i=0; i<n; i++){
		if(arr[i] == num) return 1;
	}
	return 0;
}

void printFrames(int arr[], int n){
	int i;
	for(i=0; i<n; i++){
		if(arr[i] == -1){
			printf("- ");
		}
		else{
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
	return;
}

void main(){
	int framesN, pagesN, i, curr = 0, pageFaultCount = 0;
	float faultFreq;
	int *pages, *frames;

	printf("Enter the number of pages input: ");
	scanf("%d", &pagesN);
	printf("Enter %d pages: \n", pagesN);
	pages = (int*)malloc(pagesN * sizeof(int));
	for(i=0; i<pagesN; i++){
		scanf("%d", &pages[i]);
	}

	printf("Enter the number of frames: ");
	scanf("%d", &framesN);
	frames = (int*)malloc(framesN * sizeof(int));
	for(i=0; i<framesN; i++){
		frames[i] = -1;
	}

	i = 0;
	printf("Page\tFrames\n");
	while(i<pagesN){
		
		printf("%d\t", pages[i]);

		if(search(frames, pages[i], framesN)){
			printFrames(frames, framesN);
		}
		else{
			pageFaultCount++;
			frames[curr] = pages[i];
			if(curr == framesN-1){
				curr = 0;
			}
			else{
				curr++;
			}
			printFrames(frames, framesN);
		}
		i++;
	}

	faultFreq = (pageFaultCount/(float)pagesN) *100;

	printf("\n\nFinal results: \n");
	printf("Page Fault Count: %d \n", pageFaultCount);
	printf("Fault frequency: %f \n", faultFreq);
	printf("Page hit count: %d \n", pagesN - pageFaultCount);
	printf("Hit ratio: %f \n", 100 - faultFreq);

	return;
}
