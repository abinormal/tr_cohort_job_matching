#include <stdio.h>
#include <string.h>




/****************************************  
	fn jobMatch 
	in  -char- job and skill description
	out -int- match score
*****************************************/
int jobMatch(char *job, char *skills){
	
	int score = 0;
	
	//Split job description strings into single words 
	//split skill descritions into single words
	
	//compare skills
	/*
	//for each item in job {
		//for each item in skills {
			//compare item {
				matches? add 10(?) to score
				if score >= 100;
				return 100;
			}
		}
	}	
	*/
	
	//** Actually I think there is a C library function to search a string for another string so if I iterate over the job
	//   strings pulling a word at a time then search the Skills string for that word it'll be a better solution. 
	//   Making user we don't match on "the", "of" etc. 
	
	// split job key words string into seperate words. 
	
	//char *strtok(char *str, const char *delim)
	
	   const char delim[2] = " ";
	   char *token;
	   
	   
	   //TODO: make a copy of string before breaking it up as the original is being truncated
	   
	   /* get the first token */
	   token = strtok(job, delim);
	   
	   /* walk through other tokens */
	   while( token != NULL ) {
		  printf( " %s\n", token );
		  if (strcmp(const char *token, const char *skill)){
			  score =+ 10;
		  }
		  token = strtok(NULL, delim);
	   }
	//Breaks string job into a series of tokens separated by delim.
	
	// compare strings - use to find words from job in the skills description
	int strcmp(const char *str1, const char *str2);

	return score;
}

int main(){
	// Test strings
	char jobA[] = "remote flexible working hours";
	char jobB[] = "office based two days per week react developer";
	char skillsA[] = "wants to work remote react experience looking for frontend";
	char skillsB[] = "backend developer cloud experience AWS certified";
				
	printf("This is the job match test./n");
	printf("Result for job A and skill set A: %d \n", jobMatch(jobA, skillsA) );
	printf("Result for job A and skill set B: %d \n", jobMatch(jobA, skillsB) );
	printf("Result for job B and skill set A: %d \n", jobMatch(jobB, skillsA) );
	printf("Result for job B and skill set B: %d \n", jobMatch(jobB, skillsB) );
	
	return 0;
}


// I struggled with stings in C, I'd prefer using Python for this as the string libraries are really very good but I haven't used python for years and feel i'd struggle more with it. 

//I'd extend this by creating a pool of words that are similar, i.e. office based two days a week and flexible are a match.

