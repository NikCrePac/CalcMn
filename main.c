#include "func.h"

int main()
{
    int menu = 0;           //Переменная для выбора пункта в главном меню 1
    int menu_sc1 = 0;   //Пременная для выбора пункта в case 1
    int menu_sc2 = 0;   //Пременная для выбора пункта в case 2
    int menu_sc3 = 0;   //Пременная для выбора пункта в case 3
    int menu_sc4 = 0;   //Пременная для выбора пункта в case 9

    int A[] = {0, 0, 0, 0, 0};   //Множество A
    int B[] = {0, 0, 0, 0, 0};   //Множество B
    int C[] = {0, 0, 0, 0, 0};   //Множество C
    int D[] = {0, 0, 0, 0, 0};   //Множество D
    int E[] = {0, 0, 0, 0, 0};    //Множество E

    int number_to_check = 0;   //Число для проверки принадлежности множеству

    int universe_low = 0;
    int universe_up = 100;

    int union_arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};      //Объединёный массив

    char simms1;
    char simms2;
    int ms1[] = {0, 0, 0, 0, 0};
    int ms2[] = {0, 0, 0, 0, 0};

    for(;;)
    {
    system("clear");
    puts("╔══╗╔══╗╔╗──╔══╗╔╗──╔╗╔╗─╔╗");
    puts("║╔═╝║╔╗║║║──║╔═╝║║──║║║╚═╝║");
    puts("║║──║╚╝║║║──║║──║╚╗╔╝║║╔╗─║");
    puts("║║──║╔╗║║║──║║──║╔╗╔╗║║║╚╗║");
    puts("║╚═╗║║║║║╚═╗║╚═╗║║╚╝║║║║─║║");
    puts("╚══╝╚╝╚╝╚══╝╚══╝╚╝──╚╝╚╝─╚╝");
    puts("--------------------------------------------------");
    //Пункты меню
    puts("1. Ввод множества");
    puts("2. Вывод множеста");
    puts("3. Проверка принадлежности множеству");
    puts("4. Вывод всех множеств");
    puts("5. Проверка принадлежности всем множествам");
    puts("6. Задать универсум");
    puts("7. Найти пересечение всех множеств");
    puts("8. Найти пересечение множеств");
    puts("9. Объединение множеств");
    puts("0. Выход");

    scanf("%d", &menu);    //Ввод номера пункта меню

    switch(menu)    //Главное меню
    {
        case 1:     //Пункт меню 1
            for(short trigger = 1; trigger > 0;)
            {
                system("clear");
                printf("Выберите множество\n1.A\n2.B\n3.C\n4.D\n5.E\n0.Назад\n");
                scanf("%d", &menu_sc1);     //Выбор множества для ввода
                switch(menu_sc1)    //Меню для выбора множества для ввода
                {
                case 1:
                    system("clear");
                    printf("Введите множество A\n");
                    input_arr(A);
                    printf("Готово!\nНажмите Enter для продолжения...");
                    getchar(), getchar();
                    break;
                case 2:
                    system("clear");
                    printf("Введите множество B\n");
                    input_arr(B);
                    printf("Готово!\nНажмите Enter для продолжения...");
                    getchar(), getchar();
                    break;
                case 3:
                    system("clear");
                    printf("Введите множество C\n");
                    input_arr(C);
                    printf("Готово!\nНажмите Enter для продолжения...");
                    getchar(), getchar();
                    break;
                case 4:
                    system("clear");
                    printf("Введите множество D\n");
                    input_arr(D);
                    printf("Готово!\nНажмите Enter для продолжения...");
                    getchar(), getchar();
                    break;
                case 5:
                    system("clear");
                    printf("Введите множество E\n");
                    input_arr(E);
                    printf("Готово!\nНажмите Enter для продолжения...");
                    getchar(), getchar();
                    break;
                case 0:
                    system("clear");
                    trigger = 0;    //Триггер для выхода из меню
                    break;
                default:
                    system("clear");
                    printf("Вы выбрали несуществующий пункт меню!\n\nНажмите Enter для продолжения...");
                    getchar(), getchar();
                    break;
                }
            }
            break;
        case 2:
            for(short trigger = 1; trigger > 0;)
            {
                system("clear");
                printf("Выберите множество\n1.A\n2.B\n3.C\n4.D\n5.E\n0.Назад\n");
                scanf("%d", &menu_sc2);
                switch(menu_sc2)
                {
                    case 1:  //Пункт меню 2
                        system("clear");
                        printf("Множество A=");
                        output_arr(A, 4);
                        printf("\n\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 2:
                        system("clear");
                        printf("Множество B=");
                        output_arr(B, 4);
                        printf("\n\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 3:
                        system("clear");
                        printf("Множество C=");
                        output_arr(C, 4);
                        printf("\n\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 4:
                        system("clear");
                        printf("Множество D=");
                        output_arr(D, 4);
                        printf("\n\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 5:
                        system("clear");
                        printf("Множество E=");
                        output_arr(E, 4);
                        printf("\n\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 0:
                        system("clear");
                        trigger = 0;    //Триггер для выхода из меню
                        break;
                    default:
                        system("clear");
                        printf("Вы выбрали несуществующий пункт меню!\n\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                }
            }
            break;
        case 3:
            for(short trigger = 1; trigger > 0;)
            {
                system("clear");
                printf("Выберите множество\n1.A\n2.B\n3.C\n4.D\n5.E\n0.Назад\n");
                scanf("%d", &menu_sc3);
                switch(menu_sc3)   //Меню 3
                {
                    case 1:
                        system("clear");
                        printf("Введите целое число:");
                        scanf("%d", &number_to_check);
                        check_arr(A, 'A', &number_to_check);
                        printf("\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 2:
                        system("clear");
                        printf("Введите целое число:");
                        scanf("%d", &number_to_check);
                        check_arr(B, 'B', &number_to_check);
                        printf("\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 3:
                        system("clear");
                        printf("Введите целое число:");
                        scanf("%d", &number_to_check);
                        check_arr(C, 'C', &number_to_check);
                        printf("\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 4:
                        system("clear");
                        printf("Введите целое число:");
                        scanf("%d", &number_to_check);
                        check_arr(D, 'D', &number_to_check);
                        printf("\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 5:
                        system("clear");
                        printf("Введите целое число:");
                        scanf("%d", &number_to_check);
                        check_arr(E, 'E', &number_to_check);
                        printf("\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 0:
                        system("clear");
                        trigger = 0;    //Триггер для выхода из меню
                        break;
                    default:
                        system("clear");
                        printf("Вы выбрали несуществующий пункт меню!\n\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                }
            }
            break;
        case 4:
            system("clear");
            printf("Множество A=");
            output_arr(A, 4);
            printf("\nМножество B=");
            output_arr(B, 4);
            printf("\nМножество C=");
            output_arr(C, 4);
            printf("\nМножество D=");
            output_arr(D, 4);
            printf("\nМножество E=");
            output_arr(E, 4);
            printf("\n\nНажмите Enter для продолжения...");
            getchar(), getchar();
            break;
        case 5:
            system("clear");
            printf("Введите целое число:");
            scanf("%d", &number_to_check);
            check_arr(A, 'A', &number_to_check);
            check_arr(B, 'B', &number_to_check);
            check_arr(C, 'C', &number_to_check);
            check_arr(D, 'D', &number_to_check);
            check_arr(E, 'E', &number_to_check);
            printf("\nНажмите Enter для продолжения...");
            getchar(), getchar();
            break;
        case 6:
            system("clear");
            printf("Задайте нижнюю границу универсума\n");
            scanf("%d", &universe_low);
            printf("Задайте верхнию границу универсума\n");
            scanf("%d", &universe_up);
            printf("Задан универсум [%d ... %d]", universe_low, universe_up);
            printf("\n\nНажмите Enter для продолжения...");
            getchar(), getchar();
            break;
        case 7:
            printf("Найти пересечение всех множеств\n");
            for(int i = 0; i < 5; i++)
            {
                intersection_arr('A', 'B', A, B, &i);
            }
            for(int i = 0; i < 5; i++)
            {
                intersection_arr('A', 'C', A, C, &i);
            }
            for(int i = 0; i < 5; i++)
            {
                intersection_arr('A', 'D', A, D, &i);
            }
            for(int i = 0; i < 5; i++)
            {
                intersection_arr('A', 'E', A, E, &i);
            }
            for(int i = 0; i < 5; i++)
            {
                intersection_arr('B', 'C', B, C, &i);
            }
            for(int i = 0; i < 5; i++)
            {
                intersection_arr('B', 'D', B, D, &i);
            }
            for(int i = 0; i < 5; i++)
            {
                intersection_arr('B', 'E', B, E, &i);
            }
            for(int i = 0; i < 5; i++)
            {
                intersection_arr('C', 'D', C, D, &i);
            }
            for(int i = 0; i < 5; i++)
            {
                intersection_arr('C', 'E', C, E, &i);
            }
            for(int i = 0; i < 5; i++)
            {
                intersection_arr('D', 'E', D, E, &i);
            }
            printf("Нажмите Enter для продолжения...");
            getchar(), getchar();
            break;
        case 8:
            break;
        case 9:
            system("clear");
            printf("Выберите множество 1\nA=a,A\nB=b,B\nC=c,C\nD=d,D\nE=e,E\n");
            scanf("%s", &simms1);
            if(simms1 == 'A' || simms1 == 'a')
            {
                for(short i = 0; i < 5; i++)
                {
                    ms1[i] = A[i];
                }
            }
            if(simms1 == 'B' || simms1 == 'b')
            {
                for(short i = 0; i < 5; i++)
                {
                    ms1[i] = B[i];
                }
            }
            if(simms1 == 'C' || simms1 == 'c')
            {
                for(short i = 0; i < 5; i++)
                {
                    ms1[i] = C[i];
                }
            }
            if(simms1 == 'D' || simms1 == 'd')
            {
                for(short i = 0; i < 5; i++)
                {
                    ms1[i] = D[i];
                }
            }
            if(simms1 == 'E' || simms1 == 'e')
            {
                for(short i = 0; i < 5; i++)
                {
                    ms1[i] = E[i];
                }
            }
            system("clear");
            printf("Выберите множество 2\nA=a,A\nB=b,B\nC=c,C\nD=d,D\nE=e,E\n");
            scanf("%s", &simms2);
            if(simms2 == 'A' || simms2 == 'a')
            {
                for(short i = 0; i < 5; i++)
                {
                    ms2[i] = A[i];
                }
            }
            if(simms2 == 'B' || simms2 == 'b')
            {
                for(short i = 0; i < 5; i++)
                {
                    ms2[i] = B[i];
                }
            }
            if(simms2 == 'C' || simms2 == 'c')
            {
                for(short i = 0; i < 5; i++)
                {
                    ms2[i] = C[i];
                }
            }
            if(simms2 == 'D' || simms2 == 'd')
            {
                for(short i = 0; i < 5; i++)
                {
                    ms2[i] = D[i];
                }
            }
            if(simms2 == 'E' || simms2 == 'e')
            {
                for(short i = 0; i < 5; i++)
                {
                    ms2[i] = E[i];
                }
            }
            union_of_arr(ms1, ms2, union_arr);
            system("clear");
            printf("Объединение массивов %c и %c\n", simms1, simms2);
            output_arr(union_arr, 9);
            getchar(), getchar();
            break;
        case 0:
            printf("Выход\n");
            return 0;
            break;
        default:
            system("clear");
            printf("Вы выбрали несуществующий пункт меню!\n\n");
            printf("Нажмите Enter для продолжения...");
            getchar(), getchar();
        }
    }
return 0 ;
}
