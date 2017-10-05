#include <stdio.h>
#include <stdbool.h>

int main(void){

        int n, a;
        char c;
        _Bool run = true;

        printf("Begin calculations:\n------------\n");

        while(run){
                scanf("%i %c", &n, &c);

                switch(c){
                        case 'S': 
                                a = n;
                                printf("Set Accumulator to %i\n",a);
                                printf("= %.3f\n",(float)a);
                                break;
                        case '/':
                                if(n == 0){
                                        run = false;
                                        printf("Error: dividing by %d\n", n);
                                        break;
                                } else {
                                a /= n;
                                printf("Divide by %i\n",n);
                                printf("= %.3f\n",(float)a);
                                break;
                                }
                       case '-':
                                a -= n;
                                printf("Subtract %i\n",n);
                                printf("= %.3f\n",(float)a);
                                break;
                        case '*':
                                a *= n;
                                printf("Multiply by %i\n",n);
                                printf("= %.3f\n",(float)a);
                                break;
                        case '+':
                                a += n;
                                printf("Add %i\n",n);
                                printf("= %.3f\n",(float)a);
                                break;
                        case 'E':
                                run = false;
                                printf("End of Program\n");
                                printf("= %.3f\n",(float)a);
                                break;
                        default:
                                run = false;
                                printf("Error: unrecognised operator\n");
                                break;
                }
        }

        printf("End of Calculations \n");

        return 0;
}

