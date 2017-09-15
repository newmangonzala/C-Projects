#include <stdio.h>
#include <math.h>

int main(void){
	float w, h, BMI, weight, weeks, w2, l;
	printf("Enter your height (in inches) and weight (in pounds).\n");
	scanf("%f %f", &h, &w);
	BMI = (703 * w) / (h * h);
	printf("Your BMI is %f.\n", BMI);
	if(BMI < 18.5){
		printf("Weight status: underweight.\n");
	}
	else if ((BMI >= 18.5) && (BMI <= 24.9)){
		printf("Weight status: normal.\n");
	}
	else if ((BMI >= 25.0) && (BMI <= 29.9)){
		printf("Weight status: overweight.\n");
		printf("Input the amount of weight you want to lose per week, from 0.5 - 2 lbs.\n");
		scanf("%f", &weight);
		if ((weight >= 0.5) && (weight <= 2)){
			w2 = ((h*h) * 24.9) / 703;
			l = w - w2;
			weeks = l / weight;
			printf("Amount of weeks to get to normal range: %f\n", weeks);
		}
		else{
			printf("Error.\n");
		}
	}
	else if (BMI >= 30.0){
		printf("Weight status: obese.\n");
		printf("Input the amount of weight you want to lose per week, from 0.5 - 2 lbs.\n");
		scanf("%f", &weight);
		if ((weight >= 0.5) && (weight <= 2)){
			w2 = ((h*h) * 24.9) / 703;
			l = w - w2;
			weeks = l / weight;
			printf("Amount of weeks to get to normal range: %.1f\n", weeks);
		}
		else{
			printf("Error.\n");
		}
	}
	else{
		printf("Error.\n");
	}
	//printf("%f %f", h, w);
	return 0;
}