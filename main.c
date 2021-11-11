#include "func.h"

int main()
{
    int menu = 0;           //Переменная для выбора пункта в главном меню 1
    int menu_sc1 = 0;   //Пременная для выбора пункта в case 1
    int menu_sc2 = 0;   //Пременная для выбора пункта в case 2
    int menu_sc3 = 0;   //Пременная для выбора пункта в case 3

    int A[] = {0, 0, 0, 0, 0};   //Множество A
    int B[] = {0, 0, 0, 0, 0};   //Множество B
    int C[] = {0, 0, 0, 0, 0};   //Множество C
    int D[] = {0, 0, 0, 0, 0};   //Множество D
    int E[] = {0, 0, 0, 0, 0};    //Множество E

    int chislo_dlya_proverki = 0;

    int universe_low = 0;
    int universe_up = 100;

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
    puts("0. Выход");

    scanf("%d", &menu);    //Ввод номера пункта меню

    switch(menu)    //Меню 1
    {
        case 1:     //Пункт меню 1
            for(short trigger = 1; trigger > 0;)
            {
                system("clear");
                printf("Выберите множество\n1.A\n2.B\n3.C\n4.D\n5.E\n0.Назад\n");
                scanf("%d", &menu_sc1);
                switch(menu_sc1)
                {
                case 1:
                    system("clear");
                    printf("Введите множество A\n");
                    input_mass(A);
                    printf("Готово!\nНажмите Enter для продолжения...");
                    getchar(), getchar();
                    break;
                case 2:
                    system("clear");
                    printf("Введите множество B\n");
                    input_mass(B);
                    printf("Готово!\nНажмите Enter для продолжения...");
                    getchar(), getchar();
                    break;
                case 3:
                    system("clear");
                    printf("Введите множество C\n");
                    input_mass(C);
                    printf("Готово!\nНажмите Enter для продолжения...");
                    getchar(), getchar();
                    break;
                case 4:
                    system("clear");
                    printf("Введите множество D\n");
                    input_mass(D);
                    printf("Готово!\nНажмите Enter для продолжения...");
                    getchar(), getchar();
                    break;
                case 5:
                    system("clear");
                    printf("Введите множество E\n");
                    input_mass(E);
                    printf("Готово!\nНажмите Enter для продолжения...");
                    getchar(), getchar();
                    break;
                case 0:
                    system("clear");
                    trigger = 0;
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
                switch(menu_sc2)   //Меню 2
                {
                    case 1:  //Пункт меню 2
                        system("clear");
                        printf("Множество A=");
                        output_mass(A);
                        printf("\n\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 2:
                        system("clear");
                        printf("Множество B=");
                        output_mass(B);
                        printf("\n\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 3:
                        system("clear");
                        printf("Множество C=");
                        output_mass(C);
                        printf("\n\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 4:
                        system("clear");
                        printf("Множество D=");
                        output_mass(D);
                        printf("\n\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 5:
                        system("clear");
                        printf("Множество E=");
                        output_mass(E);
                        printf("\n\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 0:
                        system("clear");
                        trigger = 0;
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
                        scanf("%d", &chislo_dlya_proverki);
                        proverka_mass(A, 'A', &chislo_dlya_proverki);
                        printf("\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 2:
                        system("clear");
                        printf("Введите целое число:");
                        scanf("%d", &chislo_dlya_proverki);
                        proverka_mass(B, 'B', &chislo_dlya_proverki);
                        printf("\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 3:
                        system("clear");
                        printf("Введите целое число:");
                        scanf("%d", &chislo_dlya_proverki);
                        proverka_mass(C, 'C', &chislo_dlya_proverki);
                        printf("\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 4:
                        system("clear");
                        printf("Введите целое число:");
                        scanf("%d", &chislo_dlya_proverki);
                        proverka_mass(D, 'D', &chislo_dlya_proverki);
                        printf("\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 5:
                        system("clear");
                        printf("Введите целое число:");
                        scanf("%d", &chislo_dlya_proverki);
                        proverka_mass(E, 'E', &chislo_dlya_proverki);
                        printf("\nНажмите Enter для продолжения...");
                        getchar(), getchar();
                        break;
                    case 0:
                        system("clear");
                        trigger = 0;
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
            output_mass(A);
            printf("\nМножество B=");
            output_mass(B);
            printf("\nМножество C=");
            output_mass(C);
            printf("\nМножество D=");
            output_mass(D);
            printf("\nМножество E=");
            output_mass(E);
            printf("\n\nНажмите Enter для продолжения...");
            getchar(), getchar();
            break;
        case 5:
            system("clear");
            printf("Введите целое число:");
            scanf("%d", &chislo_dlya_proverki);
            proverka_mass(A, 'A', &chislo_dlya_proverki);
            proverka_mass(B, 'B', &chislo_dlya_proverki);
            proverka_mass(C, 'C', &chislo_dlya_proverki);
            proverka_mass(D, 'D', &chislo_dlya_proverki);
            proverka_mass(E, 'E', &chislo_dlya_proverki);
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
                crossing_mass('A', 'B', A, B, &i);
            }
            for(int i = 0; i < 5; i++)
            {
                crossing_mass('A', 'C', A, C, &i);
            }
            for(int i = 0; i < 5; i++)
            {
                crossing_mass('A', 'D', A, D, &i);
            }
            for(int i = 0; i < 5; i++)
            {
                crossing_mass('A', 'E', A, E, &i);
            }
            for(int i = 0; i < 5; i++)
            {
                crossing_mass('B', 'C', B, C, &i);
            }
            for(int i = 0; i < 5; i++)
            {
                crossing_mass('B', 'D', B, D, &i);
            }
            for(int i = 0; i < 5; i++)
            {
                crossing_mass('B', 'E', B, E, &i);
            }
            for(int i = 0; i < 5; i++)
            {
                crossing_mass('C', 'D', C, D, &i);
            }
            for(int i = 0; i < 5; i++)
            {
                crossing_mass('C', 'E', C, E, &i);
            }
            for(int i = 0; i < 5; i++)
            {
                crossing_mass('D', 'E', D, E, &i);
            }
            printf("Нажмите Enter для продолжения...");
            getchar(), getchar();
            break;
        case 8:
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
