// Author: xuanyi shen xjs5065@psu.edu
// Collaborator: Hanbit Kim hqk5400@psu.edu
// Collaborator: Seungki An sva5802@psu.edu
// Collaborator: Jacob Hallowell jph5997@psu.edu
// Section: 4
// Breakout: 5

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *grade = readline("Enter your CMPSC 131 grade: ");
  double gpa = atof(grade);

  if (gpa >=93) {
    printf("Your letter grade for CMPSC 131 is A.");
  }
  else if (gpa >= 90){
    printf("Your letter grade for CMPSC 131 is A-.");
  }
  else if (gpa >=87){
    printf("Your letter grade for CMPSC 131 is B+.");
  }
  return 0;
}