#include <stdio.h>

int main ()
{
    int task;
    

    scanf("%d", &task);

    if(task == 1) {
        /* Solution for task 1.*/
        
        int number_of_transactions, i;
        long double initial_balanceTL;
        float euro, dollar;

        
        scanf("%Lf %f %f", &initial_balanceTL, &euro, &dollar);
        scanf("%d", &number_of_transactions);
        
        for (i = 0 ; i < number_of_transactions; i++) {
            float amount;
            char type, currency;
            scanf(" %c %c %f", &type, &currency, &amount);
            
            if (type == 'D'  && currency == 'D') {
                initial_balanceTL += (amount * dollar);
                
            } else if (type == 'W' && currency == 'D') {
                initial_balanceTL -= (amount * dollar);
                
            } else if (type == 'W' && currency == 'E') {
                initial_balanceTL -= (amount * euro);
                
            } else if (type == 'D' && currency == 'E') {
                initial_balanceTL += (amount * euro);
            }
        }
        
        printf("Final balance: %.2Lf TL.", initial_balanceTL);
        
    } else if(task == 2) {
        /* Solution for task 2.*/
        char exam_type, sub_type;
        float penalty_score, last_score, correct_score1, correct_score2, correct_score3, correct_score4;
        int lesson_1, lesson_2, lesson_3, lesson_4;


        scanf(" %c", &exam_type);
        if (exam_type == 'T') {
            scanf("%f", &penalty_score);
            scanf("%d %f %d %f %d %f %d %f", &lesson_1, &correct_score1, &lesson_2, &correct_score2, &lesson_3, &correct_score3, &lesson_4, &correct_score4);
            last_score = ((lesson_1 * correct_score1) - ((40 - lesson_1) * correct_score1) * penalty_score) + ((lesson_2 * correct_score2) - ((40 - lesson_2) * correct_score2) * penalty_score) + ((lesson_3 * correct_score3) - ((40 - lesson_3) * correct_score3) * penalty_score) + ((lesson_4 * correct_score4) - ((40 - lesson_4) * correct_score4) * penalty_score);
            printf("T result: %.2f points.", last_score);

        } else if (exam_type == 'A') {
            scanf(" %c %f", &sub_type, &penalty_score);
            if (sub_type == 'C' || sub_type == 'O') {
                scanf("%d %f %d %f", &lesson_1, &correct_score1, &lesson_2, &correct_score2);
                last_score = ((lesson_1 * correct_score1) - ((30 - lesson_1) * correct_score1) * penalty_score) + ((lesson_2 * correct_score2) - ((30 - lesson_2) * correct_score2) * penalty_score);
                printf("A-%c result: %.2f points.", sub_type, last_score);
                
            } else if (sub_type == 'E') {
                scanf("%d %f %d %f %d %f %d %f", &lesson_1, &correct_score1, &lesson_2, &correct_score2, &lesson_3, &correct_score3, &lesson_4, &correct_score4);
                last_score = ((lesson_1 * correct_score1) - ((30 - lesson_1) * correct_score1) * penalty_score) + ((lesson_2 * correct_score2) - ((30 - lesson_2) * correct_score2) * penalty_score) + ((lesson_3 * correct_score3) - ((30 - lesson_3) * correct_score3) * penalty_score) + ((lesson_4 * correct_score4) - ((30 - lesson_4) * correct_score4) * penalty_score);
                printf("A-E result: %.2f points.", last_score);
            }
        }
        
    }

    return 0;
}
