#include <stdio.h>
 
int main() {
	int Me, You;
	printf("Relationship: \n");
	scanf("%s", &Me, &You);
	
	if (Me==You) {
		
		printf("My girlfriend: %s = %s", Me, You);
	}
	else if(Me > You) {
		printf("Love you very much: %s > %s", Me, You);
	}
	else{
		printf("You don't love me: %s < %s", Me, You);
	}
	return 0;
	
	
}
