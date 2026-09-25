#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

// Color codes
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"

int main() {
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;
    int choice;
    int i, j, k;

    while (1) {
        printf(MAGENTA "\n--- Basic Matrix Operations ---\n" RESET);
        printf(GREEN "1. Matrix Addition\n" RESET);
        printf(GREEN "2. Matrix Subtraction\n" RESET);
        printf(GREEN "3. Matrix Multiplication\n" RESET);
        printf(GREEN "4. Matrix Transpose\n" RESET);
        printf(RED "5. Exit\n" RESET);
        printf(CYAN "\nEnter your choice: " RESET);
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf(YELLOW "Enter rows and columns for Matrix 1: " RESET);
                scanf("%d %d", &rows1, &cols1);

                for (i = 0; i < rows1; i++) {
                    for (j = 0; j < cols1; j++) {
                        printf(CYAN "Enter element [%d][%d]: " RESET, i + 1, j + 1);
                        scanf("%d", &matrix1[i][j]);
                    }
                }

                printf(YELLOW "\nEnter rows and columns for Matrix 2: " RESET);
                scanf("%d %d", &rows2, &cols2);

                for (i = 0; i < rows2; i++) {
                    for (j = 0; j < cols2; j++) {
                        printf(CYAN "Enter element [%d][%d]: " RESET, i + 1, j + 1);
                        scanf("%d", &matrix2[i][j]);
                    }
                }

                if (rows1 == rows2 && cols1 == cols2) {
                    for (i = 0; i < rows1; i++) {
                        for (j = 0; j < cols1; j++) {
                            result[i][j] = matrix1[i][j] + matrix2[i][j];
                        }
                    }

                    printf(CYAN "\nResult of Matrix Addition:\n" RESET);
                    for (i = 0; i < rows1; i++) {
                        for (j = 0; j < cols1; j++) {
                            printf("%d ", result[i][j]);
                        }
                        printf("\n");
                    }
                } else {
                    printf(RED "\nError: Matrix dimensions do not match for addition!\n" RESET);
                }
                break;

            case 2:
                printf(YELLOW "Enter rows and columns for Matrix 1: " RESET);
                scanf("%d %d", &rows1, &cols1);

                for (i = 0; i < rows1; i++) {
                    for (j = 0; j < cols1; j++) {
                        printf(CYAN "Enter element [%d][%d]: " RESET, i + 1, j + 1);
                        scanf("%d", &matrix1[i][j]);
                    }
                }

                printf(YELLOW "\nEnter rows and columns for Matrix 2: " RESET);
                scanf("%d %d", &rows2, &cols2);

                for (i = 0; i < rows2; i++) {
                    for (j = 0; j < cols2; j++) {
                        printf(CYAN "Enter element [%d][%d]: " RESET, i + 1, j + 1);
                        scanf("%d", &matrix2[i][j]);
                    }
                }

                if (rows1 == rows2 && cols1 == cols2) {
                    for (i = 0; i < rows1; i++) {
                        for (j = 0; j < cols1; j++) {
                            result[i][j] = matrix1[i][j] - matrix2[i][j];
                        }
                    }

                    printf(CYAN "\nResult of Matrix Subtraction:\n" RESET);
                    for (i = 0; i < rows1; i++) {
                        for (j = 0; j < cols1; j++) {
                            printf("%d ", result[i][j]);
                        }
                        printf("\n");
                    }
                } else {
                    printf(RED "\nError: Matrix dimensions do not match for subtraction!\n" RESET);
                }
                break;

            case 3:
                printf(YELLOW "Enter rows and columns for Matrix 1: " RESET);
                scanf("%d %d", &rows1, &cols1);

                for (i = 0; i < rows1; i++) {
                    for (j = 0; j < cols1; j++) {
                        printf(CYAN "Enter element [%d][%d]: " RESET, i + 1, j + 1);
                        scanf("%d", &matrix1[i][j]);
                    }
                }

                printf(YELLOW "\nEnter rows and columns for Matrix 2: " RESET);
                scanf("%d %d", &rows2, &cols2);

                for (i = 0; i < rows2; i++) {
                    for (j = 0; j < cols2; j++) {
                        printf(CYAN "Enter element [%d][%d]: " RESET, i + 1, j + 1);
                        scanf("%d", &matrix2[i][j]);
                    }
                }

                if (cols1 == rows2) {
                    for (i = 0; i < rows1; i++) {
                        for (j = 0; j < cols2; j++) {
                            result[i][j] = 0;
                            for (k = 0; k < cols1; k++) {
                                result[i][j] += matrix1[i][k] * matrix2[k][j];
                            }
                        }
                    }

                    printf(CYAN "\nResult of Matrix Multiplication:\n" RESET);
                    for (i = 0; i < rows1; i++) {
                        for (j = 0; j < cols2; j++) {
                            printf("%d ", result[i][j]);
                        }
                        printf("\n");
                    }
                } else {
                    printf(RED "\nError: Matrix dimensions do not match for multiplication!\n" RESET);
                }
                break;

            case 4:
                printf(YELLOW "Enter rows and columns for Matrix: " RESET);
                scanf("%d %d", &rows1, &cols1);

                for (i = 0; i < rows1; i++) {
                    for (j = 0; j < cols1; j++) {
                        printf(CYAN "Enter element [%d][%d]: " RESET, i + 1, j + 1);
                        scanf("%d", &matrix1[i][j]);
                    }
                }

                for (i = 0; i < rows1; i++) {
                    for (j = 0; j < cols1; j++) {
                        result[j][i] = matrix1[i][j];
                    }
                }

                printf(CYAN "\nTranspose of the Matrix:\n" RESET);
                for (i = 0; i < cols1; i++) {
                    for (j = 0; j < rows1; j++) {
                        printf("%d ", result[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 5:
                printf(RED "Exiting the program...\n" RESET);
                return 0;

            default:
                printf(RED "Invalid choice! Please try again.\n" RESET);
        }
    }
    return 0;
}
