//Tech Support Diagonostic System

#include <stdio.h>

int main(){
	int device_type;
	int symptom;
	
	printf("Enter Device Type (1.Laptop , 2.Smartphone , 3.Router): \n");
	scanf("%d", &device_type);
	
	switch(device_type){
		case 1: 	
			printf("\nEnter Symptom Code: (10,11,12)");
	        scanf("%d", &symptom);
        	switch(symptom){
        		case 10: printf("Won't turn on'");
        			break;
        		case 11: printf("Overheating");
        			break;
        		case 12: printf("Slow performance");
        			break;
			}
	    break;
	        
		case 2:
		    printf("\nEnter Symptom Code: (20,21,22)");
	        scanf("%d", &symptom);
		    switch(symptom){
        		case 20: printf("Battery drains fast");
        			break;
        		case 21: printf("No signal");
        			break;
        		case 22: printf("Touchscreen unresponsive");
        			break;
        	}
		break;
			
        case 3:
        	printf("\nEnter Symptom Code: (30,31,32)");
	        scanf("%d", &symptom);
        	switch(symptom){
        		case 30: printf("No internet connection");
        			break;
        		case 31: printf("Wi-Fi signal weak");
        			break;
        		case 32: printf("Device can't connect");
        			break;
        	}
        break;
        
        default:
        break;
        
	}
	
	return 0;
}
