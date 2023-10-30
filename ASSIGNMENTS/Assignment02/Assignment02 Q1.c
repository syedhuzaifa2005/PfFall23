/*
Programmer: Syed Huzaifa Ali
Description: Batting performance of given number of players
*/


#include <stdio.h>

int main() {
	int Batsmen, Innings;
	printf("Enter the number of Batsmen: ");
	scanf("%d", &Batsmen);
	printf("Enter the number of Innings: ");
	scanf("%d", &Innings);
	
	int performance[Batsmen][Innings];
	for(int i = 0; i < Batsmen; i++) {
		printf("Enter the batting performance for Batsmen %d:\n", i+1);
		for(int j = 0; j < Innings; j++) {
			printf("Enter the runs scored for Innings %d: ", j+1);
			scanf("%d", &performance[i][j]);
		}
	}

	for(int i = 0; i < Batsmen; i++) {
		int Total_Runs = 0;
	 	int Highest_Score = 0;
	 	int Half_Centuries = 0;
		int Centuries = 0;

		for(int j = 0; j < Innings; j++) {
			int Runs = performance[i][j];

			//CALCULATING TOTAL RUNS
			Total_Runs += Runs;

						
			//FINDING HIGHEST SCORE
			if(Runs > Highest_Score) {
				Highest_Score = Runs;
			}


			//FINDING THE NUMBER OF HALF-CENTURIES AND CENTURIES	
			if(Runs >= 50 && Runs < 100) {
				Half_Centuries++;
			} else if(Runs >= 100) {
				Centuries++;
			}
		}
		

		//CALCULATING AVERAGE RUNS PER INNINGS	
		float Average = (float)Total_Runs / Innings;


		//DISPLAYING STATISTICS FOR EACH BATSMEN SEPARATELY
		printf("\nStatistics for Batsmen %d:\n", i+1);
		printf("Total Runs scored: %d\n", Total_Runs);
		printf("Average Runs: %f\n", Average);
		printf("Half-Centuries: %d\n", Half_Centuries);
		printf("Centuries: %d\n", Centuries);
		printf("Highest Score: %d\n", Highest_Score);
	}

	return;
}//END MAIN
