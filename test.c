// // #include <stdio.h>

// // int main() {

// //     printf("pervoe slagaemoe: %d\nvtoroe slagaemoe:%d\nsumma: 10 + 20 = %d\n",10,20,30);

// //     int x = 5, y = 15, total;
// //     total = x + y;
// //     printf("pervoe slagaemoe: %d\nvtoroe slagaemoe: %d\nsumma: %d\n",x, y, total);
// //     return 0;
// // }

// // #include <stdio.h>
// // int main(){
// //     int x = 1, y = 2, total;
// //     total = x + y;
// //     printf("%d + %d = %d\n", x, y, total);
// //     return 0;
// //     }

// // #include <stdio.h>
// // int main() {
// //     float x = 5.5f, y = 6.67f, res;
// //     res = x / y;
// //     printf("Result: %f\n", res); // Result: 0.824588
// //     printf("Result: %.2f\n", res); // esli nado obrezat 4islo posle zapjatoj, mozno propisat pered F,  to4ku i koli4estvo cifer Result: 0.82

// //     char s = 'S'; // tolko odin simvol!!!
// //     printf("%c\n", s);

// // }

// // #include <stdio.h>
// // int main() {
// //     float x, y, res;
// //     scanf("%f", &x); // %f etim ukazivaem kakogo tipa informaciju budim s4itivat   &x etim ukazivaem kuda sohranim informaciju
// //     scanf("%f", &y);
// //     res = x / y;
// //     printf("Result: %.2f\n", res);
// // }

// // #include <stdio.h>

// // int main(void) {
// //     int x, y, result;
// //     scanf("%d", &x); // считать первое целое значение и адресовать его в переменную «x»
// //     scanf("%d", &y); // считать второе целое значение и адресовать его в переменную «y»
// //     result = x + y;
// //     printf("%d + %d = %d\n", x, y, result);
// //     return 0;
// // }

// // #include <stdio.h>

// // int main(void) {

// //     char str[100];
// //     printf("Напишите что-нибудь: ");
// //     scanf("%s", str);
// //     printf("Вот то, что вы написали: %s", str);
// //     return 0;

// // }

// // #include <stdio.h>

// // int main() {
// //     int arr[5] = {5, 6, 2, 1, 9,}; // mozno zapisat tak int arr[] = {5, 6, 2, 1, 9,}; esli srazu propisat elementi, to mozno ne ukazivat ih koli4estvo
// //     arr[0] = 23; //menjaem pervoe 4islo na drugoe
// //     printf("%d\n", arr[0]); // obrawenie k massivu i vivod

// //     float numbers [3];
// //     numbers[0] = 5.4f;
// //     // numbers[1] = 3.2f; // esli ne propisat naprimer numbers[1] to ono obozna4etsja avtamati4eski numbers[1] = 0.0f
// //     numbers[2] = 9.3f;

// //     char word[] = {'S', 'o', 'm', 'e'};
// //     word[2] = 'M';
// //     printf("%c\n", word[2]); // dlja vivoda odnoj bukva nado ispolzovat %c 	Character

// //     char words[] = "Hello World!";
// //     words[1] = 'E';
// //     printf("%s\n", words); // dlja vivoda predlozenija nado ispolzovat %s String of characters

// //     printf("%c\n", words[0]);// dlja vivoda odnoj bukva nado ispolzovat %c 	Character

// //     int array[3][4] = {
// //         {1, 6, 8, 54},
// //         {9, 16, 78, 30},
// //         {5, 611, 82, 34},
// //     }; // v etom dvumernom massive, [3] otve4aet za kol-vo vlozenih massivov, a [4] za kol-vo vnutri elementov
// //     array[1][3] = 77;
// //     printf("%d\n", array[1][3]);

// //     int i, j;

// //     for (i = 0; i < 3; i++) { // i++ можно также записать как i = i + 1 или i += 1
// //         for (j = 0; j < 4; j++) {
// //             printf("%d ", array[i][j]);
// //         }
// //         printf("\n");
// //     }

// //     return 0;
// // }

// // #include <stdio.h>
// // #include <stdlib.h>

// // int main() {
// //     int n;
// //     printf("Enter size of array:\n");
// //     scanf("%d", &n);

// //     int *arr = malloc(sizeof(int) * n);

// //     for (int i = 0; i < n; ++i) {
// //         printf("Enter arr[%d]:\n", i);
// //         scanf("%d", &arr[i]);
// //     }

// //     for (int i = 0; i < n; ++i)
// //         printf("%d ", arr[i]);

// //     free(arr);

// //     return 0;
// // }

// // #include <stdio.h>

// // int main() {
// //     int x = 5;
// //     if (x == 5) {
// //         printf("Yes\n");
// //     }
// //     return 0;
// // }

// // #include <stdio.h>

// // int main() {
// //     int x = 10;
// //     if (x < 5) {
// //         printf("Yes\n");
// //     } else {
// //         printf("No\n");
// //     }
// //     return 0;
// // }

// // #include <stdio.h>

// // int main() {
// //     int x = 10;

// //     if (x == 5) {
// //         printf("Yes\n");
// //     } else if(x > 5) {
// //         printf("X biggest than 5\n");
// //     } else {
// //         printf("No\n");
// //     }

// //     return 0;
// // }

// // // esli kod menwe odnoj stro4ki, to {} mozno ne pisat! esli bolwe odnoj stro4ki to pisat{} NADO!
// // #include <stdio.h>

// // int main() {
// //     int x = 10;

// //     if (x == 5)
// //         printf("Yes\n");
// //     else if(x > 5) {
// //         if (x == 7)
// //             printf("X more than 5 by 2\n");
// //         printf("X biggest than 5\n");
// //     } else
// //         printf("No\n");

// //     return 0;
// // }

// // #include <stdio.h>

// // int main() {
// //     int x = 10;

// //     if (x == 5 || x ==10)  // uslovnij operatot ILI ||
// //         printf("Yes\n");
// //     else if(x > 5) {
// //         if (x == 7)
// //             printf("X more than 5 by 2\n");
// //         printf("X biggest than 5\n");
// //     } else
// //         printf("No\n");

// //     return 0;
// // }

// // #include <stdio.h>

// // int main() {
// //     char genderInput;
// //     int gender;
// //     unsigned int age;
// //     unsigned int height;

// //     printf("Enter gender ('M' or 'F')\n");
// //     scanf("%c", &genderInput);
// //     printf("Enter age\n");
// //     scanf("%u", &age);
// //     printf("Enter height\n");
// //     scanf("%u", &height);

// //     if (genderInput == 'M' || genderInput == 'm') {
// //         gender = 1;
// //     } else {
// //         gender = 0;
// //     }

// //     if ((age > 17 && height >= 180) && gender) {
// //         printf("Welcome\n");
// //     } else {
// //         printf("Go away\n");
// //     }

// //     return 0;
// // }

// // #include <stdio.h>

// // int main() {
// //     char genderInput;
// //     unsigned int age;
// //     unsigned int height;

// //     printf("Enter gender ('M' or 'F')\n");
// //     scanf(" %c", &genderInput);

// //     if (genderInput == 'M' || genderInput == 'm') {
// //     } else {
// //         printf("Go away\n");
// //         return 0;  // Прерывание выполнения программы
// //     }

// //     printf("Enter age\n");
// //     scanf("%u", &age);
// //     printf("Enter height\n");
// //     scanf("%u", &height);

// //     if (age <= 17 || height < 180) {
// //         printf("Go away\n");
// //         return 0;  // Прерывание выполнения программы
// //     }

// //     printf("Welcome\n");

// //     return 0;
// // }

// // #include <stdio.h>
// // #include <stdbool.h>
// //     int main(){
// //         int x = 20, y = 5;
// //         if((x == 10 && y < 7) || x == 20)
// //             printf("yes\n");
// //         else if(x > 100) {
// //             if(x == 105)
// //                 printf("X is equal 105\n");
// //             printf ("X is greater 100\n");
// //         } else if(x < 5)
// //             printf("X is less than 5\n");
// //         else
// //             printf("No\n");

// //         bool isHasCar =true;
// //         if(isHasCar == false) // if(!isHasCar)
// //             printf("Yes\n");
// //         else
// //             printf("No\n");

// //         return 0;
// // }

// #include <stdio.h>
// int main(){
//     int x = 25;

//     switch(x) {     // operator sravnenija. Esli nado proverit tolko odnu peremennuju, na sootvetstvie mnogim zna4enijam, to mozno ispolzovat ego vmesto if else
//         case 10:
//             printf("10\n");
//             break;
//         case 12:
//             printf("12\n");
//             break;
//         case 15:
//             printf("15\n");
//             break;
//         case 20:
//             printf("20\n");
//             break;
//         default:    // srabativaet, esli viwe ukazanij kod nevernij
//             printf("Error\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char str[100];
//     printf("Напишите что-нибудь: ");
//     scanf("%s", str);
//     printf("Вот то, что вы написали: %s", str);
//     return 0;
// }

// #include <stdio.h>

// int main(void) {
//     char str[5];
//     printf("Напишите что-нибудь: ");
//     fgets(str, sizeof(str), stdin);
//     printf("Вот то, что вы написали: %s", str);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     for(int i = 0; i < 10; i++){  // sozdaem peremennuju i; sozdaem uslovie cikla; kak i budet izmenjatsja
//         printf("%d\n", i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     for(float i = 100; i > 10; i/=2)  // sozdaem peremennuju i; sozdaem uslovie cikla; kak i budet izmenjatsja
//         printf("%.2f\n", i);

//     return 0;
// }

// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
//     bool isHasCar = false;
//     do
//     {
//         printf("Yes\n");
//     } while (isHasCar);

//     return 0;
// }

// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {

//     // Пример цикла do-while
//     int x = 1;
//     do
//     {
//         printf("%d\n", x);
//         x++;
//     } while (x <= 5);

//     return 0;
// }

// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
//     // Пример цикла while
//     int y = 1;
//     while (y <= 5)
//     {
//         printf("%d\n", y);
//         y++;
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     for (int x = 0; x < 5; x++)
//     {
//         if (x == 3)
//             break;
//         printf("%d\n", x);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[] = {5, 67, 0, -2, 6};
//     for (int i = 0; i < 5; i++)
//         printf("%d ", arr[i]); // printf("%d\n", arr[i]); esli sdelat kak v kode, to vivod 4isel budet v stro4ku, vmesto stolbca

//     printf("\n");
//     int min = arr[0];
//     int max = arr[0];

//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     printf("Minimum: %d\n", min);
//     printf("Mахимум: %d\n", max);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int arr[] = {5, 67, 0, -2, 6};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int min = arr[0];
//     int max = arr[0];

//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }

//     printf("Minimum: %d\n", min);
//     printf("Maximum: %d\n", max);
//     return 0;
// }

// // maksimalnoe kol.vo simvolov budet ograni4eno i vivedino na ekran///
// #include <stdio.h>

// #define MAX_LENGTH 16

// int main()
// {
//     char text[MAX_LENGTH] = "privet kak dela";
//     printf("Text: %s\n", text);
//     printf("Size: %zu\n", sizeof(text));

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char text[] = "privet kak delaaa";
//     printf("Text: %s\n", text);
//     printf("Size: %zu\n", sizeof(text));

//     return 0;
// }

// #include <stdio.h>

// void sum(int a, int b);
// float mult(float a, float b);
// void string(char arr[]);

// int main()
// {
//     sum(20, 50);
//     int x = 5, y = 7;
//     sum(x, y);

//     string("Privet");
//     char word[] = {'s', 'o', 'm', 'e'};
//     string(word);

//     float result = mult(4.5f, 7.58);
//     printf("%.2f\n", result);

//     return 0;
// }

// void sum(int a, int b)
// {
//     int res = a + b;
//     printf("Rezultat: %d\n", res);
// }

// void string(char arr[])
// {
//     printf("%s\n", arr);
// }

// float mult(float a, float b)
// {
//     float res = a * b;
//     printf("Rezultat: %.2f\n", res);
//     return res;
// }

// #include <stdio.h>
// #include <string.h>

// struct Car
// {
//     int speed;
//     char name[50];
//     float weight;
// };

// int main()
// {
//     struct Car bmw;
//     bmw.speed = 250;
//     strcpy(bmw.name, "BMW M5");
//     bmw.weight = 2500.0f;

//     struct Car audi;
//     audi.speed = 300;
//     strcpy(audi.name, "Audi A8");
//     audi.weight = 2700.0f;

//     printf("%s skorost: %d\n", audi.name, audi.speed);
//     printf("%s skorost: %d\n", bmw.name, bmw.speed);

//     return 0;
// }

// #include <stdio.h>

// struct Car
// {
//     int speed;
//     char name[50];
//     float weight;
// };

// int main()
// {
//     struct Car bmw = {250, "BMW M5", 2500.0f};
//     struct Car audi = {300, "Audi A8", 2700.00f};

//     printf("%s skorost: %d\n", audi.name, audi.speed);
//     printf("%s skorost: %d\n", bmw.name, bmw.speed);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num = 16;
//     int *pNum = &num;     // P   ozna4aet "pointer"(ukazatel).
//     printf("%d\n", num);  // pri takom napisanie viveditsja NUM
//     printf("%p\n", &num); // pri takom budet ukazatel ili jarlik 0x16dc5f2f8
//                           //& ampersant или как я говорю and используется для получения адреса переменной
//                           // %p Читает указатель
//     printf("%d\n", *pNum);

//     *pNum = 10;           // izmenili zna4enie peremennoj s 16 na 10
//     printf("%d\n", num);

//     return 0;
// }

// #include <stdio.h>

// struct Abstract
// {
//     int width, height;
// }; // nuzna to4ka s zapjatoj, kogda piwetsja struktura

// void calc(struct Abstract *square);

// int main()
// {
//     struct Abstract square = {5, 7};
//     calc(&square);

//     return 0;
// }

// void calc(struct Abstract *square)
// {
//     int res = square->width * square->height; //Обратите внимание, что в функции calc используется оператор -> для доступа к полям структуры через указатель square.
//     printf("rezultat: %d", res);
// }

// #include <stdio.h>

// int main()
// {
//     char line[250]; // sozdaem massiv LINE[250] gde budet 250 simvolov
//     FILE *file = fopen("test.txt", "r"); // "r"(read) tolko 4tenie; "w" (write) budet vsegda perezapisivatsja; "a"(append) mozno dobavljat tekst // tak ze tut sozdaetsja ili otkrivaetsja fail(esli fail ne suwestvuet, to on sozdastsja)
//     fgets(line, 250, file); // eta funkcija pozvoljaet zapisat v vibrannij massiv, kol-vo simvolov, kotorie s4itajutsja s opredelennogo faila
//     printf("%s", line); // vividetsja tolko pervaja stroka (4to bi vivesti vtoruju i t.d. nado skopirovat stroki kogda fgets i printf......)

//     fclose(file);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char line[250]; // Создаем массив line, в котором будет место для 250 символов
//     FILE *file = fopen("test.txt", "r");
//     if (file == NULL) // Проверяем, успешно ли открыт файл
//     {
//         printf("Ошибка открытия файла.\n");
//         return 1; // Возвращаем ненулевое значение для обозначения ошибки
//     }

//     while (fgets(line, 250, file) != NULL) // Читаем строки из файла до конца
//     {
//         printf("%s", line); // Выводим строку на экран
//     }

//     fclose(file);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int var, size;
//     size = var = 100; // obe peremennie ravni 100
//     printf("%d\n%d\n", size, var);

//     var = 50;
//     size = 60;
//     printf("%d\n%d\n", var, size);

//     char ch;
//     ch = "d"; //stroka! esli dvojnie kovi4ki, 4itaetsja kak stroka
//     ch = 'd'; //simvol! piwetsja v odinranih kovi4kah
//     printf("ch = %c\ncode = %d\n", ch, ch); // ch = %c vivedet simvol d; code = %d vivedet 100 (simvol 'd' raven 4islu 100 v tablice ASCII)

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     double d1, d2, d3, d4;

//     d1 = 10.0;
//     d2 = -7.;
//     d3 = 1e2; // ekspozicialnaja forma chisla 1e2 = 1*10ˆ2 = 100 (<chislo> e <stepen desjatki>)
//     d4 = 5e-3; //5e-3 = 5*10ˆ-3 = 0,005

//     float var_f;
//     var_f = 10.0f; // float! nado pomnit pro napisanija "f" posle 4isla
//     int size_float = sizeof(var_f); // sizeof budet 4 byte, znachet chto kompeljator otvodit 4 byte pod tip float
//     // peremennaja var_f = 10.0f, obem pamjati zanimaet 4 byte (potomu4to 4islo float)

// return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int value = getchar();
//     printf("vivoditsja: %c\n", value);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int value1 = getchar();
//     int value2 = getchar();

//     printf("%c %c\n", value1, value2);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int value = getchar();
//     int res = putchar(value); // putchar vivodit 'simvol' kotorij polu4aet v getchar.
//     printf("\n%d\n", res); // vivodit zna4enie funkcii putchar v sisteme ASCII

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     unsigned int price = 0;
//     double weight = 0.0;

//     int res = scanf("%*llu; %u; %lf", &price, &weight);// * shitivaet dannie, no ne zanosit nikuda
//     printf("res = %d: price = %d, weight = %.2f\n", res, price, weight);

//     return 0;
// }
// // 10; 1000; 23.80 // vvodim eti dannie
// // res = 2: price = 1000, weight = 23.80 // na vihode ne vidim 10, potomu 4to zapisano %*llu. programma s4itaet vvedennie dannie no ne vivedet v rezultate

// #include <stdio.h>
// int main(void)
// {
//     short a = -5;
//     int b = 10;
//     float c = 5.4f;
//     double d = -6.5;

//     int res_1 = a + b;
//     short res_2 = 100 - b;
//     float res_3 = 5.4 - c;
//     double res_4 = d * 4;

//     printf("int res_1 = %d\nshort res_2 = %hi\nfloat res_3 = %f\ndouble res_4 = %lf\n", res_1, res_2, res_3, res_4);

//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     short a = -5;
//     int b = 10;
//     float c = 5.4f;
//     double d = -6.5;

//     int res_1 = 7 / 2;      // 3  pri delenii dvuh celo4islennih zna4enij, drobnij rezultat otbrasivaetsja, NE okrugljaetsja
//     double res_2 = -9 / 2; // -4  pri delenii dvuh celo4islennih zna4enij, drobnij rezultat otbrasivaetsja, NE okrugljaetsja
//     float res_3 = a / c;  // -0.9259...
//     double res_4 = d / b;  // -0.65000...

//     printf("int res_1 = %d\ndouble res_2 = %lf\nfloat_res3 = %f\ndouble res_4 = %lf\n", res_1, res_2, res_3, res_4);

// return 0;
// }

// #include <stdio.h>

// int main()
// {
//     short a = -5;
//     int b = 10;

//     double res_1 = a / b;
//     printf("double res_1 = %lf\n", res_1);

//     short x = -5;
//     int y = 10;

//     double res_2 = (double)x /(double)y; // dlja togo 4to bi celoe 4islo privesti k vewestvennomu
//     printf("double res_2 = %lf\n", res_2);

//     double r = -5.0;
//     double t = 10.0;

//     double res_3 = r / t; // dlja togo 4to bi celoe 4islo privesti k vewestvennomu
//     printf("double res_3 = %lf\n", res_3);

//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     short a = -5; // -5
//     int b = -a;   // 5  potomu 4to minus na minus dast pljus
//     int c = -(7 + a);

//     double res_1 = a / b;
//     printf("double res_1 = %lf \nint c = %d\n", res_1, c);

//     // double res_1 = -1.000000
//     // int c = -2%
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     double height, a;

//     int res = scanf("%lf %lf", &height, &a);
//     if (res != 2) // res dolzno ravnjatsja dvum, potomu 4to vvoditsja dva zna4enija
//     {
//         printf("Error");
//         return 0;
//     }

//     double sq = height * a / 2.0;
//     printf("%.2f\n", sq);

//     return 0;
// }

///////////// delenie po modulju % /////////////

// #include <stdio.h>

// int main()
// {
// int res = 10 % 4;
// int res_1 = -10 % 4; // esli operand pervij otricatelnij, to i otvet otricatelnij
// int res_2 = -10 % -4;
// int res_3 = 10 % -4;

// int res_4 = 10 - 10 / 4 * 4;
// printf("res = %d\nres_1 = %d\nres_2 = %d\nres_3 = %d\nres_4 = %d\n", res, res_1, res_2, res_3, res_4);

// int digit;
// printf("Vvedite 4islo:\n");
// scanf("%d", &digit);

// int result = digit % 2;
// printf("result = %d\n", result);

// unsigned int time = 4 * 3600 + 32 * 60 + 18; // nado chasi : minuti : sekundi

// unsigned int sec = time % 60;
// unsigned int min = (time / 60) % 60;
// unsigned int hour = time /3600;

// printf("%02d:%02d:%02d\n", hour, min, sec);

//////////////// dekriment inkriment -- / ++ ///////////////////

// int count = 0;
// printf("count = %d\n", count);
// count++;

// printf("count = %d\n", count);

// int count1 = 0, size = 5;

// int current = count1++; // esli ++ posle to sna4alo delaetsja operacija, a tolko potom proishodit dobavlenie. // 0
// int width = ++size; // esli ++ pered, to proishodit dobavlenie, a potom operacija // 6

// printf("count = %d, size = %d, current = %d, width = %d\n", count1, size, current, width);

// return 0;
// }

// # include <stdio.h>

// // +=  -=  *=  /=  %=

// int main()
// {
//     int count = 1;

//     count += 3; // takoj vareant zapisi predpo4titelnej
//     count = count + 3; // kazalos bi eto odno i toze, no lu4we ispolzovat +=.  tut ispolzujutsja raznie ja4ejki informacii i mogut vozniknut owibki a v vareant += ispolzuetsja odna i taze ja4ejka.

//     return 0;
// }

// #include <stdio.h>
// // +=  -=  *=  /=  %=

// int main()
// {
//     int count = 1; // %d
//     double var_d = 10.0; // %f
//     short p = 2; // %d

//     count -= 3 - 5; // (3-5) = -2   count-(-2) = 3  count = 3
//     var_d /= 3.0 + p;
//     p *= 20 - 5;

//     printf("count = %d\nvar_d = %.2f\np = %d\n", count, var_d, p);

//     return 0;
// }

// #include <stdio.h>
// #include <stdbool.h>

// int main()
// {

//     double x = 5.67;
//     int var_i = 7;

//     bool fl_view = x < 10; // false
//     bool res_1 = 5 > 7; // false
//     bool res_2 = x + 2 >= 10.56; // false
//     bool res_3 = var_i == 7; // true
//     bool res_4 = var_i != 7; // false

//     printf("fl_view = %d\nres_2 = %d\n", fl_view, res_2);
//     return 0;
// }

// #include <stdio.h>
// #include <stdbool.h>

// int main()
// {
//     int digit;
//     scanf("%d", &digit);

//     bool even = digit % 2 == 0;
//     printf("even = %d\n", even);
//     return 0;
// }

// #include <stdio.h>
// #include <stdbool.h>

// int main()
// {
//     int digit;
//     scanf("%d", &digit);
//     bool even = false;
//     while (even != true)
//     //While (!even)
//     {
//         if (digit % 2 == 0)
//         {
//             even = true;
//             printf("even = true");
//         }
//         else
//         {
//             printf("Введите другое число: ");
//             scanf("%d", &digit);
//         }
//         // printf("even = %d\n", even);
//     }
//     return 0;
// }

// // bool even = false;

// // while (!even) {
// //     // Выполнять код, пока even равно false
// // }

// // // Эквивалентное условие
// // while (even != true) {
// //     // Выполнять код, пока even не равно true
// // }

// #include <stdio.h>
// #include <stdbool.h>

// int main()
// {
//     double y = 10.86;
//     bool is_range = y >= -2 && y <= 5; // oba uslovija dolzni bit TRUE
//     bool is_not_range = y < -2 || y > 5; // hotja bi odno iz uslovij, dolzno bit TRUE
//     printf("is_range = %d\nis_not_range = %d\n", is_range, is_not_range);

//     return 0;
// }

// #include <stdio.h>
// #include <stdbool.h>

// int main()
// {
//     int x = 5;
//     bool is_correct = x %2 == 0 || x % 3 == 0 && x > 5;

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int x;
//     if (scanf("%d", &x) != 1)
//     {
//         printf("Error input");
//         return 0;
//     }

//     if(x < 3 || x > 11)
//         printf("x not in range 3-11");

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int x;
//     if (scanf("%d", &x) != 1)
//     {
//         printf("Error input");
//         return 0;
//     }

//     if (x < 0)
//         printf("x < 0\n");
//     else if (x > 0)
//         printf("x > 0\n");
//     else
//         printf("x == 0\n");

//     return 0;
// }

// # include <stdio.h>
// int main()
// {
//     double x = 5.2, y = -9.13;
//     double max_xy = (x > y) ? x : y; // uslovnoe ternanrnoe virazenie. esli "(x>y) true" to vipolnjaetsja X, esli "false" to vipolnjaetsja Y
//     printf("max_xy = %.2f\n", max_xy);

//     double z = 14.9, w = 4.18;
//     double max_zw = (z > w) ? z + 3 : w - 2;
//     printf("max_zw = %.2f\n", max_zw);

//     double a = 7.5, b = -3.43;
//     double max_ab;
//     if(a > b)
//         max_ab = a;
//     else
//         max_ab = b;
//     printf("max_ab = %.2f\n", max_ab);

//     return 0;
// }

// #include <stdio.h>
// int main()

// {
//     int x = 7;
//     printf("x is %s digiti\n", (x % 2 == 0) ? "even" : "odd");

//     return 0;
// }

// #include <stdio.h>
// int main()

// {
//     int a = 2, b = 3, c = -4;

//     int max = (a > b) ? (a > c ? a : c) : (b > c ) ? b : c;

//     printf("max = %d\n", max);

//     return 0;
// }

// #include <stdio.h>
// int main()

// {

//     int item;

//     printf("1. Learning c language \n"
//            "2. Learning Python language \n"
//            "3. Learning Java language \n"
//            "4. Learning (+ language\n"
//            "5. Exit\n");

//     if (scanf("%d", &item) != 1) // esli scanf vozvrawaet zna4enie ne ravno 1 (true) / 0 (false).  if vsegda izna4alno raven TRUE
//     {
//         printf("Error input");
//         return 0;
//     }

//     switch (item) // otrabativaetsja vibrannij printf i vse kotorie idut posle nego, esli ne napisat BREAK ili RETURN 0 !!! Break pozvoljaet perejti k sledujuwemu operatoru posle SWITCH, a RETURN 0, Prerivaet vsju funkciju i vse 4to zapisano posle SWITCH, vipolnjatsja ne budet.
//     {
//     case 1:
//         printf("Learning C language \n");
//         break; // return 0;
//     case 2:
//         printf("Learning Python language \n");
//         break; // return 0;
//     case 3:
//         printf("Learning Java language \n");
//         break; // return 0;
//     case 4:
//         printf("Learning C++ language \n");
//         break; // return 0;
//     case 5:
//         printf("Exit\n");
//         break; // return 0;
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char item; // %c

//     if (scanf("%c", &item) != 1)
//     {
//         printf("Error input");
//         return 0;
//     }

//     switch (item)
//     {
//     case 'a':
//     case 'A':
//         printf("Symbol A\n");
//         break;
//     case 'b':
//     case 'B':
//         printf("Symbol B\n");
//         break;
//     case 'c':
//     case 'C':
//         printf("Symbol C\n");
//         break;
//     default:
//         printf("Incorrect symbol\n");
//         break;
//     }

//     return 0;
// }

// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// void handleError() {
//     printf("Divide by zero!\n");
//     char op = ' ';
//     scanf(" %c", &op);
//     exit(1);
// }

// int main() {
//     double r1 = 0, r2 = 0, r3 = 0;
//     char op;

//     scanf(" %lf", &r1);
//     scanf(" %c", &op);
//     scanf(" %lf", &r2);

//     switch (op) {
//         case '+': r3 = r1 + r2; break;
//         case '-': r3 = r1 - r2; break;
//         case '*': r3 = r1 * r2; break;
//         case '/':
//             if (fabs(r2) < 1.0E-10)
//                 handleError();
//             r3 = r1 / r2;
//             break;
//         default:
//             printf("Error!\n");
//             scanf(" %c", &op);
//             exit(2);
//     }
//     printf("%.1f%c%.1f=%.1f", r1, op, r2, r3);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {

//     int a, i = 2;
//     switch (i)
//     {
//     case 1:
//         a = 10;
//         break;
//     case 2:
//         a = 20;
//         break;
//     default:
//         a = 30;
//     }
//     printf("%d", a);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int score = 85;
//     int a = score / 10; // int = a;
//     switch (a) // (score / 10)
//     {
//         case 10:
//         case 9:
//             printf("Отлично");
//             break;
//         case 8:
//             printf("Хорошо");
//             printf("%d", a);
//             break;
//         case 7:
//             printf("Удовлетворительно");
//             break;
//         case 6:
//             printf("Достаточно");
//             break;
//         default:
//             printf("Неудовлетворительно");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char filename[] = "file.txt";
//     char extension[4];

//     // Получаем расширение файла
//     strncpy(extension, filename + strlen(filename) - 3, 3);
//     extension[3] = '\0'; // etot simvol ukazivaet na konec stroki

// //  Используем функцию strncpy для копирования последних трех символов из строки filename в массив extension.
// //  Функция strlen определяет длину строки filename.
// //  filename + strlen(filename) - 3 указывает на последние три символа в строке filename.
// //  Затем копируем эти три символа в массив extension.
// //  Добавляем нулевой символ \0 в конце массива extension, чтобы он стал корректной строкой.
// //  extension[3] = '\0' - Устанавливаем нулевой символ \0 в четвертую позицию массива extension, чтобы завершить его валидную строку.

//     switch (extension[0])
//     {
//         case 't':
//             if (strcmp(extension, "txt") == 0)
//                 printf("Текстовый файл");
//             else if (strcmp(extension, "tar") == 0)
//                 printf("Архивный файл");
//             else
//                 printf("Неизвестный тип файла");
//             break;
//         case 'i':
//             if (strcmp(extension, "jpg") == 0 || strcmp(extension, "png") == 0)
//                 printf("Изображение");
//             else
//                 printf("Неизвестный тип файла");
//             break;
//         case 'd':
//             if (strcmp(extension, "doc") == 0 || strcmp(extension, "docx") == 0)
//                 printf("Документ");
//             else
//                 printf("Неизвестный тип файла");
//             break;
//         default:
//             printf("Неизвестный тип файла");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     unsigned char var = 153; //двоичная запись 10011001
//     unsigned char not_v = ~var; //результат: 01100110 (число 102)
//     printf ("var = %d, not_v = %d\n", var, not_v);
//     unsigned char total_var = var + not_v;
//     printf("total_var = %d\n", total_var);
//     return 0;

// }

// #include <stdio.h>

// void decToBinary(int n)
// {
//     // Обработка случая, когда число равно 0
//     if (n == 0)
//     {
//         printf("0");
//         return;
//     }

//     // Создание массива для хранения двоичных цифр
//     int binary[32];
//     int i = 0;

//     // Перевод числа в двоичную систему
//     while (n > 0)
//     {
//         binary[i] = n % 2; // uznaem ostatok i zapisiavaem ego v massiv binary
//         printf("binary [i] = %d\n", binary[i]);
//         n = n / 2; // delim na dva, 4to bi polu4it sledujuwee 4islo
//         printf("n = %d\n", n);
//         i++; // dobavljaet edinicu, 4to bi znat skolko raz srabotaet cikl i skolko v itoge budet chisel v dvoi4nom kode
//     }

//     // Вывод двоичного числа в обратном порядке
//     for (int j = i - 1; j >= 0; j--) // int j = i - 1 potomu 4to dalwe budem s4itivat indeks massiva, indeks s4etaetsja ot 0. takim obrazom, esli 4isel 8, to s4et budet idti ot 0 do 7. U nas i = 8 no takogo indeksa net, poslednij indeks 7 (0-7) poetomu nado otnjat 1. j>=0 poka eto uslovie ne vipolneno, cikl for, budet zapuwen. j-- posle kazdoj iteracii, otnimaetsja 1 ot j
//     {
//         printf("%d", binary[j]);
//     }
// }

// int main()
// {
//     int decimal = 153;
//     printf("Введите десятичное число: %d\n", decimal);
//     // scanf("%d", &decimal);

//     printf("Двоичное представление: ");
//     decToBinary(decimal);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     unsigned char flags = 5; //двоичная запись 00000101
//     unsigned char mask = 4;  //двоичная запись 00000100

//     if((flags & mask) == mask)
//         printf("bit 2 is on");
//     else
//         printf("bit 2 is off");

//     // unsigned char res = flags & mask;
//     // printf("res = %d\n", res);
//     return 0;

// }

// #include <stdio.h>

// int main()
// {
//     unsigned char flags = 13; //двоичная запись 00001101
//     unsigned char mask = 5;   //двоичная запись 00000101  ~mask = 11111010

//     flags = flags & ~mask; // flags И НЕ mask. ~mask (ne mask) vipolnjaetsja pervim t.e. 00000101->11111010 posle etogo srabativaet operacija & t.e.
//     // 00001101
//     // 11111010
//     // rezultat 000001000 = 8
//     printf("flags = %d\n", flags);

//     return 0;

// }

// #include <stdio.h>

// int main()
// {
//     unsigned char flags = 8;  //двоичная запись 00001000
//     unsigned char mask = 5;   //двоичная запись 00000101  =  ~mask = 11111010

//     flags = flags | mask; //двоичная запись 00001101
//     printf("flags = %d\n", flags);

//     return 0;

// }

// #include <stdio.h>

// int main()
// {
//     unsigned char flags = 9;  //двоичная запись 00001001
//     unsigned char mask = 1;   //двоичная запись 00000001

//     flags = flags ^ mask; //двоичная запись 00001000
//     //flags ^= mask; //двоичная запись 00001000
//     printf("flags = %d\n", flags);

//     return 0;

// }

// #include <stdio.h>
// int main()
// {
//     unsigned char x = 40;       // 00101000 (число 40)
//     printf ("x = %d\n", x);

//     x = x >> 1;                 // 00010100 (число 20)  sdvig odnogo bita vpravo rovnosilno deleniju na 2
//     printf ("x = %d \n", x);

//     x = x >> 2;                 // 00000101 (число 5)  sdvig dvuh bitov vpravo rovnosilno deleniju na 4 (2ˆ2 stepeni)
//     printf("x = %d \n", x);

//     x = x >> 1;                 // 00000010 (число 2) sdvig odno bita vpravo rovnosilno deleniju na 5/2=2 (bez ostatka, celo4islennoe 4islo)
//     printf("x = %d \n", x) ;

//     x = x >> 1;                 // 00000001 (число 1)
//     printf("x = %d \n", x) ;

//     x = x << 1;                  // 00000010 (число 2) sdvig odnogo bita vlevo rovnosilno umnazeniju na 2
//     printf("x = %d \n", x) ;

//     x = x << 2;                  // 00001000 (число 8) sdvig vleva dvuh bitov eto umnazenie na 4 (2ˆ2 setepeni)
//     printf("x = %d \n", x);

//     return 0;

// }

// #include <stdio.h>
// int main()
// {
//     signed char x = -128;   // 1000 0000
//     printf("x = %d\n", x);

//     x = x << 1;             // 0000 0000
//     printf("x = %d \n", x);

//     x = -128;               // 1000 0000
//     x = x >> 1;             // 1100 0000 (-64)
//     printf("x = %d \n", x);

//     return 0;
// }

// //////////////////////// generacija psevdoslu4ajnih 4isel ///////////////////

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main()
// {
//     srand(time(NULL)); // 4asto ispolzujut srand i time vmeste
//     // time_t t = time(NULL); // funkcija time vozvrawaet koli4estvo sekund tekuwego vremeni.
//     // srand(t); pomewaem koli4estvo sekund v srand, dlja togo, 4to bi generirovalist novie chisla

//     int r_1 = rand();
//     int r_2 = rand();
//     printf("%d, %d, %d, %d, %d\n", r_1, r_2, rand(), rand(), rand());

//     return 0;
// }

// /////////////////////

// // v takom napisani koda, psevdoslu4ajnie 4isla, budut vsegda odinakovie
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int r_1 = rand();
//     int r_2 = rand();
//     printf("%d, %d, %d, %d, %d\n", r_1, r_2, rand(), rand(), rand());

//     return 0;
// }

//

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main()
// {
//     srand(time(NULL));
//     int range = 12;

//     int r_1 = rand() % range;   // [0; range]
//     int r_2 = rand() % range -5; // [-5; range - 5] // esli nado diapazon menwe 4em ot [0 do RAND_MAX]
//     int r_3 = rand() + rand(); // diapazon bolwe 4em ot [0 do RAND_MAX]

//     double range_float = (double)rand() / (double)RAND_MAX; // [0; 1]

//     printf(" %d\n %d\n %d\n %.2f\n", r_1, r_2, r_3, range_float);

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     double a, b, c;
//     double D, x1, x2;
//     // a, b, c = peremennie(koefecienti kvadratnogo urovnenija)
//     // D = diskriminant
//     // x1, x2 = korni

//     if (scanf("%lf, %lf, %lf", &a, &b, &c) != 3) // scanf s4itivaet koli4estvo vvedennih simvolov, v dannom primere dolzno bit 3 (abc)

//     {
//         printf("Error input\n");
//         return 0;
//     }

//     D = b * b - 4 * a * c; // vi4isljaem diskriminant

//     if (D < 0)
//     {
//         printf("D = %.2f < O\n", D);
//         return 0;
//     }

//     D = sqrt(D); // koren kvadratnij iz diskriminanta

//     x1 = -(b + D) / (2.0 * a);
//     x2 = -(b - D) / (2.0 * a);

//     printf("x1 = %.2f, x2 = %.2f\n", x1, x2);

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     double a = 0, b = 0, c = 0;
//     double D, x1, x2;
//     // a, b, c = peremennie(koefecienti kvadratnogo urovnenija)
//     // D = diskriminant
//     // x1, x2 = korni

//     printf("vvedite a:\n");
//     if (scanf("%lf", &a) != 1)
//     {
//         printf("Error input\n");
//         return 0;
//     }

//     printf("vvedite b:\n");
//     if (scanf("%lf", &b) != 1)
//     {
//         printf("Error input\n");
//         return 0;
//     }

//     printf("vvedite c:\n");
//     if (scanf("%lf", &c) != 1)
//     {
//         printf("Error input\n");
//         return 0;
//     }

//     D = b * b - 4 * a * c; // vi4isljaem diskriminant

//     if (D < 0)
//     {
//         printf("D = %.2f < O\n", D);
//         return 0;
//     }

//     D = sqrt(D); // koren kvadratnij iz diskriminanta

//     x1 = -(b + D) / (2.0 * a);
//     x2 = -(b - D) / (2.0 * a);

//     printf("x1 = %.2f, x2 = %.2f\n", x1, x2);

//     return 0;
// }

// #include <unistd.h>
// #include <stdio.h>

// void ft_putchar(char c)
// {
//     write(1, &c, 1);
//     // printf("%c",c);
// }

// int main()
// {
//     ft_putchar('P');
//     return 0;
// }

// #include <unistd.h>

// void ft_putchar(char c)
// {
//     write(1, &c, 1);
// }

// void ft_print_line(int width, char begin_symbol, char middle_symbol, char end_symbol)
// {
//     int i;

//     i = 1;
//     while (i <= width) /* width = 5*/
//     {
//         if (i == 1)
//             ft_putchar(begin_symbol);
//         if (i <= (width - 1))
//             ft_putchar(middle_symbol);
//         if (i == width)
//             ft_putchar(end_symbol);
//         i++;
//     }
// }

// void rush(int x, int y) /* 5, 5*/
// {
//     int i;

//     i = 1;
//     while (i <= y) /* 7*/
//     {
//         if (i == 1)
//             ft_print_line(x, 'o', '-', 'o');
//         if (i <= (y - 1))
//             ft_print_line(x, '|', ' ', '|');
//         if (i == y)
//             ft_print_line(x, 'o', '-', 'o');
//         ft_putchar('\n');
//         i++;
//     }
// }

// int main()
// {
//     rush(5, 7); // Пример вызова функции rush() с заданными аргументами
//     return 0;
// }

//

// #include <unistd.h>
// int		main(void)
// {
// 	write (1, "9876543210\n", 11);
// 	return (0);
// }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <termios.h>
#include <string.h>

// void ft_ultimate_div_mod(int *a, int *b)
// {
//     int num1 = *a;  // Получаем значение a по указателю и сохраняем в локальной переменной num1
//     int num2 = *b;  // Получаем значение b по указателю и сохраняем в локальной переменной num2

//     *a = num1 / num2;  // Вычисляем частное и записываем его значение OBRATNO V PEREMENNUJU!!!, на которую указывает UKAZATEL a (t.e. v peremennuju num1)
//     *b = num1 % num2;  // Вычисляем остаток и записываем его значение OBRATNO V PEREMENNUJU!!!, на которую указывает UKAZATEL b (t.e. v peremennuju num2)
// }

// int main(void)
// {
//     int num1 = 6;
//     int num2 = 3;

//     int *a = &num1;  // Создаем указатель a, который указывает на переменную num1
//     int *b = &num2;  // Создаем указатель b, который указывает на переменную num2

//     ft_ultimate_div_mod(a, b);  // Передаем указатели на num1 и num2 в функцию ft_ultimate_div_mod

//     printf("%d\n%d\n", num1, num2);  // Выводим значения num1 и num2, которые изменились в результате вызова функции

//     return 0;
// }

// void ft_ultimate_div_mod(int *a, int *b)
// {
// 	int x;
// 	int y;

// 	x = *a;
// 	y = *b;
// 	*a = x / y;
// 	*b = x % y;
// }

// int main(void)
// {
// 	int num1;
// 	int num2;
// 	int *a;
// 	int *b;

// 	num1 = 120;
// 	num2 = 40;
// 	a = &num1;
// 	b = &num2;
// 	ft_ultimate_div_mod(a, b);
// 	printf("%d\n%d\n", *a, *b); // RAZIMINOVIVAEM UKAZATELI I POLUCHAEM ZNACHENIJA PEREMINNIH, NA KOTORIE UKAZIVAJUT UKAZAELI
// 	return (0);
// }

// int main()
// {
//     int n = 0;
//     char *strnum = (char *)malloc(50); // Выделяем память один раз
//     while ((n >= 0) && (n <= 10))
//     {
//         printf("Please enter an integer\r\n");
//         printf("To exit the program, enter a number greater than 10 ...\r\n");
//         scanf("%d", &n);

//         // Присваиваем строковое представление внутри памяти, выделенной для strnum
//         snprintf(strnum, 50, "%s", //snprintf - это функция из стандартной библиотеки Си (stdio.h), предназначенная для форматированной записи строк в буфер. В вашем контексте она используется для записи строковых представлений чисел в буфер strnum
//         // В данной строке:
//         //strnum - это указатель на буфер, в который вы хотите записать отформатированную строку.
//         //15 - это максимальная длина строки, которую вы хотите записать в буфер. Это важно для предотвращения переполнения буфера.
//         //"%s" - это форматная строка, которая говорит snprintf, какие данные записать в буфер. %s указывает, что вы хотите записать строку.
//         //Далее идет тернарный оператор, который выбирает подходящее строковое представление в зависимости от значения n.
//                 n == 0 ? "zero" :
//                 n == 1 ? "one" :
//                 n == 2 ? "two" :
//                 n == 3 ? "three" :
//                 n == 4 ? "four" :
//                 n == 5 ? "five" :
//                 n == 6 ? "six" :
//                 n == 7 ? "seven" :
//                 n == 8 ? "eight" :
//                 n == 9 ? "nine" :
//                 n == 10 ? "ten" :
//                 "greater than 10 or less than 0");

//         printf("The number entered is %s.\r\n", strnum);
//     }

//     free(strnum); // Освобождаем память после завершения цикла
//     return 0;
// }

// #include <string.h>
// #include <stdlib.h>

// void PrintSum(int x, int y) ; prototip
// int Sum(int x, int y);

// // void MyFunc ()
// // {
// //     printf ("Hello from MyFunc! \r\n");
// // }

// int main ()
// {
//     int a = 15, b = 17;
//     //MyFunc () ;
//     //PrintSum (15, 17);
//     printf ("%d + %d = %d\r\n", a, b, Sum(a,b)) ;
//     return 0; //Return an integer from a function
// }

// void PrintSum(int x, int y)
// {
//     printf ("%d + %d = %d\r\n", x, y, x+y) ;
// }
// int Sum(int x, int y)
// {
//     return x + y;
// }

// int main()
// {
//     char str[10] = {};
// menu1:
//     while(1) // kod budet vipolnjatsja beskone4no, poka kakoe to uslovie ne budet javno prervano, t.e ne stanet loznim while(0)
//     {
//         printf("1: item 1\r\n");
//         printf("2: item 2\r\n");
//         printf("3: item 3\r\n");
//         printf("0: exit\r\n");
//         scanf("%s", str);  // ne nado znak prisvoenija &, potomu cht eto massiv
//         if (strlen(str) > 1 || strlen(str) == 0)
//         {
//             printf("Only one character is required\r\n");
//             goto menu1;
//         }
//         if (str[0] < '0' || str[0] > '3') // tut ispolzuetsja || potomu chto poluchamij simvol ne mozet bit odnovremenno menwe 0 i bolwe 3. esli uslovie mezdu 0 i 3 togda &&
//         {
//             printf("You must enter only the proposed menu item\r\n");
//             goto menu1;
//         }
//         if (str[0] == '0')
//             break;
//         switch (str[0])
//         {
//         case '1':
//             printf("You have selected menu item 1\r\n");
//             break;
//         case '2':
//             printf("You have selected menu item 2\r\n");
//             break;
//         case '3':
//             printf("You have selected menu item 3\r\n");
//             break;
//         }
//     }
//     return(0);
// }

// #include <stdio.h>
// #include <string.h>

// void menu();
// void str_switch(char str[]);
// void str_diapazon(char str[]);
// void str_len(char str[]);

// void menu()
// {
//     printf("1: item 1\r\n");
//     printf("2: item 2\r\n");
//     printf("3: item 3\r\n");
//     printf("0: exit\r\n");
// }

// void str_switch(char str[])
// {
//     switch (str[0])
//     {
//     case '1':
//         printf("You have selected menu item 1\r\n");
//         break;
//     case '2':
//         printf("You have selected menu item 2\r\n");
//         break;
//     case '3':
//         printf("You have selected menu item 3\r\n");
//         break;
//     }
// }

// void str_diapazon(char str[])
// {
//     if (str[0] < '0' || str[0] > '3')
//     {
//         printf("You must enter only the proposed menu item\r\n");
//         return; // Завершение функции str_diapazon
//     }
//     else if (str[0] == '0')
//     {
//         printf("Exiting the program\r\n");
//         exit(0);
//     }
//     else
//     {
//         str_switch(str);
//     }
// }

// void str_len(char str[])
// {
//     if (strlen(str) > 1 || strlen(str) == 0)
//     {
//         printf("Only one character is required\r\n");
//         return; // Возврат из функции str_len
//     }
//     else
//     {
//         str_diapazon(str);
//     }
// }

// int main()
// {
//     while (1)
//     {
//         menu();
//         char str[10] = {};
//         scanf("%s", str);
//         str_len(str);
//     }
//     return 0;
// }

// int main()
// {
//     printf("Enter an item number\n");
//     char str[10] = {};
//     while(1) // kod budet vipolnjatsja beskone4no, poka kakoe to uslovie ne budet javno prervano, t.e ne stanet loznim while(0)
//     {
//         printf("1: item 1\r\n");
//         printf("2: item 2\r\n");
//         printf("3: item 3\r\n");
//         printf("0: exit\r\n");
//         scanf("%s", str);  // ne nado znak prisvoenija &, potomu cht eto massiv
//         if (strlen(str) > 1 || strlen(str) == 0)
//         {
//             printf("Only one character is required\r\n");
//             continue;
//         }
//         if (str[0] < '0' || str[0] > '3') // tut ispolzuetsja || potomu chto poluchamij simvol ne mozet bit odnovremenno menwe 0 i bolwe 3. esli uslovie mezdu 0 i 3 togda &&
//         {
//             printf("You must enter only the proposed menu item\r\n");
//             continue;
//         }
//         if (str[0] == '0')
//             break;
//         switch (str[0])
//         {
//         case '1':
//             printf("You have selected menu item 1\r\n");
//             break;
//         case '2':
//             printf("You have selected menu item 2\r\n");
//             break;
//         case '3':
//             printf("You have selected menu item 3\r\n");
//             break;
//         }
//     }
//     return(0);
// }

// int main()
// {
//     printf("Enter an item number\n");
//     char str[10] = {};
// menu1:
//     printf("Enter an item number\n");
//     while(1) // kod budet vipolnjatsja beskone4no, poka kakoe to uslovie ne budet javno prervano, t.e ne stanet loznim while(0)
//     {
//         printf("1: item 1\r\n");
//         printf("2: item 2\r\n");
//         printf("3: item 3\r\n");
//         printf("0: exit\r\n");
//         scanf("%s", str);  // ne nado znak prisvoenija &, potomu cht eto massiv
//         if (strlen(str) > 1 || strlen(str) == 0)
//         {
//             printf("Only one character is required\r\n");
//             goto menu1;
//         }
//         if (str[0] < '0' || str[0] > '3') // tut ispolzuetsja || potomu chto poluchamij simvol ne mozet bit odnovremenno menwe 0 i bolwe 3. esli uslovie mezdu 0 i 3 togda &&
//         {
//             printf("You must enter only the proposed menu item\r\n");
//             goto menu1;
//         }
//         if (str[0] == '0')
//             break;
//         switch (str[0])
//         {
//         case '1':
//             printf("You have selected menu item 1\r\n");
//             break;
//         case '2':
//             printf("You have selected menu item 2\r\n");
//             break;
//         case '3':
//             printf("You have selected menu item 3\r\n");
//             break;
//         }
//     }
//     return(0);
// }

// #include <stdio.h>

// // Определение перечисляемого типа
// typedef enum {
//     RED,
//     GREEN,
//     BLUE,
//     YELLOW
// } Color;

// int main() {
//     Color favoriteColor = BLUE;

//     switch (favoriteColor) {
//         case RED:
//             printf("Your favorite color is Red.\n");
//             break;
//         case GREEN:
//             printf("Your favorite color is Green.\n");
//             break;
//         case BLUE:
//             printf("Your favorite color is Blue.\n");
//             break;
//         case YELLOW:
//             printf("Your favorite color is Yellow.\n");
//             break;
//         default:
//             printf("Unknown favorite color.\n");
//             break;
//     }

//     return 0;
// }

// #include <stdio.h>

// struct student
// {
//     char nm[60];
//     unsigned char age;
//     unsigned char course;
// };

// int main()
// {
//     struct student st1;
//     strcpy(st1.nm, "Иванов Иван Иванович");
//     st1.age = 18;
//     st1.course = 2;
//     printf("%s\n%d курс\n%d лет\n", st1.nm, st1.course, st1.age);
//     printf("------------------\n");

//     struct student st2;
//     strcpy(st2.nm, "Перов Петр Иванович");
//     st2.age = 17;
//     st2.course = 1;
//     printf("%s\n%d курс\n%d лет\n", st2.nm, st2.course, st2.age);
//     return (0);
// }

// ///////// toze samoe, raznica v typedef ////////

// typedef struct
// {
//     char nm[60];
//     unsigned char age;
//     unsigned char course;
// }student;

// int main()
// {
//     student st1;
//     strcpy(st1.nm, "Иванов Иван Иванович");
//     st1.age = 18;
//     st1.course = 2;
//     printf("%s\n%d курс\n%d лет\n", st1.nm, st1.course, st1.age);
//     printf("------------------\n");

//     student st2;
//     strcpy(st2.nm, "Перов Петр Иванович");
//     st2.age = 17;
//     st2.course = 1;
//     printf("%s\n%d курс\n%d лет\n", st2.nm, st2.course, st2.age);
//     return (0);
// }

// #include <stdio.h>
// #include <string.h>

// struct student
// {
//     char name[60];
//     int age;
//     int course;
// };

// int main()
// {
//     struct student st1;
//     strcpy(st1.name, "Ivanov Ivan");
//     st1.age = 20;
//     st1.course = 2;
//         // struct student st1;
//         // strncpy(st1.name, "Ivanov Ivan", sizeof(st1.name) - 1);
//         // st1.name[sizeof(st1.name) - 1] = '\0'; // Убедитесь, что строка завершается нулевым символом
//         // st1.age = 18;
//         // st1.course = 2;

//     struct student *st1_p;
//     st1_p = &st1;

//     // -> ispolzuetsja kak ukazatel razimenovanija
//     printf("Name: %s\n", st1_p->name);      // (*st1_p).name
//     printf("Age: %d\n", st1_p->age);        // (*st1_p).course
//     printf("Course: %d\n", st1_p->course);  // (*st1_p).age

//     return 0;
// }

// int main()
// {
//     int num = 10;
//     int* pi;
//     pi = &num;
//     printf("num %d\n&num %d\n", num, &num);
//     printf("---------------\n");
//     printf("pi %d\n&pi %d", pi, &pi);
//     return(0);
// }

// #include <stdio.h>

// // Объявление указателей на функции
// typedef int (*fptrOperation)(int, int);

// // Функции для выполнения операций
// int add(int num1, int num2)
// {
//     return num1 + num2;
// }

// int subtract(int num1, int num2)
// {
//     return num1 - num2;
// }

// // Функция, возвращающая указатель на функцию на основе символа операции
// fptrOperation getOperation(char opcode)
// {
//     switch (opcode)
//     {
//         case '+':
//             return add;
//         case '-':
//             return subtract;
//         default:
//             return NULL;
//     }
// }

// // Функция, выполняющая операцию с помощью указателя на функцию
// int evaluate(char opcode, int num1, int num2)
// {
//     fptrOperation operation = getOperation(opcode);
//     if (operation != NULL)
//     {
//         return operation(num1, num2);
//     }
//     else
//     {
//         printf("Unsupported operation: %c\n", opcode);
//         return 0;
//     }
// }

// // Функция инициализации массива указателей на функции
// void initializeOperationsArray(fptrOperation operations[128])
// {
//     for (int i = 0; i < 128; i++)
//     {
//         operations[i] = NULL;
//     }
//     operations['+'] = add;
//     operations['-'] = subtract;
// }

// // Функция, выполняющая операцию из массива указателей на функции
// int evaluateArray(char opcode, int num1, int num2, fptrOperation operations[128])
// {
//     fptrOperation operation = operations[opcode];
//     if (operation != NULL) {
//         return operation(num1, num2);
//     } else {
//         printf("Unsupported operation: %c\n", opcode);
//         return 0;
//     }
// }

// int main()
// {
//     fptrOperation operations[128]; // Массив указателей на функции
//     initializeOperationsArray(operations); // Инициализация массива

//     printf("%d\n", evaluate('+', 5, 6));
//     printf("%d\n", evaluate('-', 5, 6));

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num = 10;
//     int* pi = &num;
//     printf("%d\n%p\n", *pi, &num);
//     return(0);
// }

// #include <stdio.h>

// int max(int arr[], int n) {
//     // Базовый случай: если в массиве осталось 1 или 2 элемента, возвращаем максимальный из них
//     if (n == 1) {
//         return arr[0];
//     } else if (n == 2) {
//         return (arr[0] > arr[1]) ? arr[0] : arr[1];
//     }
//     // Рекурсивно находим максимум в левой и правой половинах массива и сравниваем их
//     int mid = n / 2;
//     int left_max = max(arr, mid);
//     int right_max = max(arr + mid, n - mid);

//     return (left_max > right_max) ? left_max : right_max;
// }

// int main() {
//     int arr[] = {3, 7, 2,9, 1, 6, 8, 5, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int result = max(arr, n);

//     printf("Наибольшее число в массиве: %d\n", result);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// // Функция сравнения для qsort
// int compare(const void *a, const void *b)
// {
//     return (*(int*)a - *(int*)b); // (int*)a preobrazovivaet v tip int,    *a razyminovivaet dlja poluchenija chisla.
// }

// // int compare(const void *a, const void *b)
// // {
// //     // Преобразуем указатели в цифры
// //     int digit1 = *((int*)a); - Эта строка кода преобразует указатель a в указатель на int, используя операцию приведения типа (int*). Затем она разыменовывает указатель, добавляя * перед (int*), чтобы получить фактическое целочисленное значение, на которое указывает a
// //     int digit2 = *((int*)b);

// //     // Сравниваем цифры
// //     return digit1 - digit2;
// // }

// int main()
// {
//     int arr[] = {5, 2, 9, 3, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Сортировка массива
//     qsort(arr, n, sizeof(int), compare);
// //     arr - указатель на массив, который нужно отсортировать (i chto vazno na pervij eliment massiva).
// //     n - количество элементов в массиве.
// //     sizeof(int) - размер каждого элемента массива (в байтах).
// //     compare - функция сравнения, которая будет использоваться для сравнения элементов массива.

//     // Вывод отсортированного массива
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//         if (i == n-1)
//         {
//             printf("\n");
//         }
//     }

//     printf("naibolwee chislo %d", arr[n-1]);

//     return 0;
// }

// #include <stdio.h>

// int fibonacci(int n)
// {
//     // Базовые случаи: первые два числа Фибоначчи равны 0 и 1
//     if (n == 0) {
//         return 0;
//     } else if (n == 1) {
//         return 1;
//     }
//     // Рекурсивный случай: число Фибоначчи равно сумме двух предыдущих чисел Фибоначчи
//     else {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }

// int main() {
//     int result = fibonacci(7);
//     printf("Fibonacci(7) = %d\n", result);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int ft_strlen(char *len) // подсчет символов в строке
// {
//     int i = 0;
//     while (len[i] != '\0')
//         i++;
//     return i;
// }

// char *ft_strcat(char *dest, char *src) // происходит объединение двух строк
// {
//     while (*dest) // проходится dest, до конца своей строки
//         dest++;
//     while (*src)
//     {
//         *dest = *src; // в конец dest добавляется src
//         dest++;
//         src++;
//     }
//     *dest = '\0'; // после копирования, добавляется '\0' в конец строки
//     return dest;
// }

// char *ft_strjoin(int size, char **strs, char *sep)
// {
//     int i = 0;
//     int length;
//     char *str;

//     length = 0;
//     while (i < size)
//     {
//         length += ft_strlen(strs[i]);
//         i++;
//     }
//     length += ((size - 1) * ft_strlen(sep));
//     if ((str = (char *)malloc(sizeof(char) * (length + 1))) == NULL)
//         return NULL;
//     str[0] = '\0'; // Инициализируем пустой строкой
//     i = 0;
//     while (i < size)
//     {
//         ft_strcat(str, strs[i]);
//         if (i < size - 1)
//         {
//             ft_strcat(str, sep);
//         }
//         i++;
//     }
//     return str;
// }

// int main()
// {
//     char *strs[] = {"HI", "H", "ccc"};
//     int size = sizeof(strs) / sizeof(strs[0]); // количество элементов в массиве
//     char *sep = " ";

//     char *result = ft_strjoin(size, strs, sep);
//     if (result != NULL)
//     {
//         printf("%s\n", result);
//         free(result);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int ft_strlen(const char *str)
// {
//     return strlen(str);
// }

// void *ft_strcat(char *dest, const char *src)
// {
//     return strcat(dest, src);

// }

// char *ft_strjoin(int size, char **strs, char *sep)
// {
// 	int i = 0;
// 	int length;
// 	char *str;

// 	length = 0;
// 	while (i < size)
// 	{
// 		length += ft_strlen(strs[i]);
// 		i++;
// 	}
// 	length += ((size - 1) * ft_strlen(sep));
// 	if ((str = (char *)malloc(sizeof(char) * (length + 1))) == NULL)
// 		return NULL;
// 	str[0] = '\0'; // Инициализируем пустой строкой
// 	// for (i = 0; i < size; i++)
// 	i = 0;
//     while (i < size)
//     {
//         ft_strcat(str, strs[i]);
//         if (i < size - 1)
//         {
//             ft_strcat(str, sep);
//         }
//         i++;
//     }
//     return str;
// }

// int main()
// {
// 	char *strs[] = {"HI", "H", "ccc"};
// 	int size = sizeof(strs) / sizeof(strs[0]); // kolichestva elementov v massive! sizeof(strs) razmer massiva (on smotrit na kolichestvo elimentov v massive i peremnozaet na tip elementov (int, char)) / na razmer tipa elementa pervogo elementav massive sizeof(strs[0] t.e esli u nas tri elementa s tipom char. 3 * na tip char = razmer massiva. razmer massiva / na tip pervogo elementa (u nas massiv char, zna4et na znachenie char) = poluchaem kolichestvo razmerov v massive.
// 	char *sep = " ";

// 	char *result = ft_strjoin(size, strs, sep);
// 	if (result != NULL)
// 	{
// 		printf("%s\n", result);
// 		free(result);
// 	}

// 	return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main()
// {
//     char *arr[] = {"Hello", "my", "world"};

//     // Инициализируем result пустой строкой
//     char result[256] = "";

//     size_t arrSize = sizeof(arr) / sizeof(arr[0]); // количество строк
//     for (size_t i = 0; i < arrSize; i++)
//     {
//         if (i > 0)
//         {
//             strcat(result, " "); // Добавляем пробел перед каждой строкой, кроме первой
//         }
//         strcat(result, arr[i]); // Добавляем текущую строку к результату
//     }

//     printf("%s\n", result); // Выведет "Hello my world"

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// size_t ft_strLen(const char *str)
// {
//     return strlen(str);
// }

// void ft_strcat(char *dest, const char *src)
// {
//     strcat(dest, src);
// }

// void ft_memset(void *ptr, int value, size_t num)
// {
//     memset(ptr, value, num);
// }

// int main()
// {
//     char *arr[] = {"Hello", "My", "World"};
//     size_t arrByte = sizeof(arr); // размер всего массива указателей
//     size_t arrAmount = sizeof(arr) / sizeof(arr[0]); // количество строк в массиве (3)
//     size_t arrSize = 0;

//     for (size_t i = 0; i < arrAmount; i++)
//     {
//         arrSize += ft_strLen(arr[i]) + 1; // учитывая размер каждой строки + нулевые символы
//     }

//     char result[arrSize]; // Объявляем result после arrSize
//     ft_memset(result, 0, arrSize); // Инициализируем result нулями

//     for (size_t i = 0; i < arrAmount; i++)
//     {
//         ft_strcat(result, arr[i]); // Добавляем текущую строку к результату
//         if (i < arrAmount - 1) // Добавляем пробел после каждой строки, кроме последней
//         {
//             ft_strcat(result, " ");
//         }
//     }

//     printf("Общий размер строк в байтах: %zu\nРазмер всего массива указателей: %zu\nВывод массива: %s\n", arrSize, arrByte, result);
//     return 0;
// }

// // Обратите внимание, что размер всего массива указателей arrByte равен сумме размеров указателей на строки. Размер каждого указателя зависит от архитектуры вашей системы, но обычно это 4 или 8 байтов (на 32-битных и 64-битных системах соответственно).

// #include <stdio.h>
// #include <string.h>

// void ft_memset(void *ptr, int value, size_t num)
// {
//     memset(ptr, value, num);
// }

// int main()
// {
//     char buffer[10];

//     // Инициализируем buffer нулями
//     ft_memset(buffer, 0, sizeof(buffer));

//     // buffer теперь содержит 10 нулевых байтов

//     // Можно изменить значения в buffer
//     buffer[0] = 'H';
//     buffer[1] = 'e';
//     buffer[2] = 'l';
//     buffer[3] = 'l';
//     buffer[4] = 'o';

//     // Выводим buffer
//     printf("%s\n", buffer); // Выведет "Hello"

//     return 0;
// }

// #include <stdio.h>
// #include <ctype.h>
// int ft_isdigit(num)
// {
//     isdigit(num);
//     return (num);
// }

// int main()
// {
//     printf("Vvedite chislo\n");
//     int number = scanf("%d", &number);
//     if (ft_isdigit(number))
//     {
//         printf("%d это цифра.\n", number);
//     }
//     else
//     {
//         printf("это не цифра.\n");
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

// int main(int argc, char *argv[])
// {
//     // argc содержит количество аргументов, включая имя программы
//     printf("Количество аргументов: %d\n", argc);

//     // argv - это массив указателей на строки
//     // argv[0] содержит имя программы
//     printf("Имя программы: %s\n", argv[0]);

//     // Вывод остальных аргументов командной строки
//     for (int i = 1; i < argc; i++)
//     {
//         printf("Аргумент %d: %s\n", i, argv[i]);
//     }

//     return 0;
// }

// int main(int argc, char *argv[])
// {
//     if (argc < 2)
//     {
//         printf("Программа требует хотя бы один аргумент.\n");
//         return 1;
//     }

//     // Проверяем первый аргумент
//     if (strcmp(argv[1], "help") == 0) // Если `str1` и `str2` равны, функция возвращает 0
//     {
//         printf("Это справочное сообщение.\n");
//     }
//     else if (strcmp(argv[1], "run") == 0) // Если `str1` и `str2` равны, функция возвращает 0
//     {
//         printf("Запуск программы.\n");
//     }
//     else  // - Если `str1` меньше `str2`, функция возвращает отрицательное целое число.
//           // - Если `str1` больше `str2`, функция возвращает положительное целое число.
//     {
//         printf("Неизвестная команда.\n");
//     }

//     return 0;
// }

// // - Если `str1` меньше `str2`, функция возвращает отрицательное целое число.
// // - Если `str1` больше `str2`, функция возвращает положительное целое число.
// // - Если `str1` и `str2` равны, функция возвращает 0.

// void *ft_memccpy(void *dest, const void *src, int c, size_t n)
// {
//     return memccpy(dest, src, c, n);
// }

#include <stdio.h>
#include <string.h>

// size_t ft_strlen(const char *str)
// {
//     size_t len = 0;

//     while (*str)
//     {
//         len++;
//         str++;
//     }

//     return len;
// }

// #include <stdio.h>
// #include <stdlib.h>

// char *ft_strdup(const char *s)
// {
//     if (s == NULL)
//     {
//         return NULL;
//     }
// /* chast nize eto strlen*/
//     size_t len = 0;
//     const char *s_ptr = s;

//     while (*s_ptr)
//     {
//         len++;
//         s_ptr++;
//     }
// /* chast viwe strlen*/

//     char *new_str = (char *)malloc(len + 1); // mesto dlja kopirovanija

//     if (new_str != NULL)
//     {
//         char *new_str_ptr = new_str; // Указатель на новую строку

//         // Псевдокод для копирования строки
//         while (*s)
//         {
//             *new_str_ptr = *s;
//             new_str_ptr++;
//             s++;
//         }
//         *new_str_ptr = '\0'; // Убедитесь, что новая строка завершается нулевым символом

//         return new_str;
//     }

//     return new_str;
// }

// int main()
// {
//     const char *src = "Hello, world!";
//     char *duplicate = ft_strdup(src);

//     if (duplicate == NULL)
//     {
//         printf("Error: Memory allocation failed.\n");
//         return 1;
//     }

//     printf("Source string: %s\n", src);
//     printf("Duplicate string: %s\n", duplicate);

//     free(duplicate);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int is_in_set(char c, const char *set)
// {
//     while (*set)
//     {
//         if (*set == c)
//         {
//             return 1;
//         }
//         set++;
//     }
//     return 0;
// }

// char *ft_strtrim(const char *s1, const char *set)
// {
//     if (s1 == NULL || set == NULL)
//     {
//         return NULL;
//     }

//     // Находим начало и конец строки без символов из множества set
//     const char *start = s1;
//     //printf("start_before %lu\n",strlen(start));

//     const char *end = s1 + strlen(s1) - 1; // ukazatel sdvigaetsja na konec stroki
//     //printf("end_before %lu\n",ft_strlen(end));

//     while (*start && is_in_set(*start, set))
//     {
//         start++;
//     }
//     //printf("start %lu\n",ft_strlen(start)); vivod budet 17 (eto znachit Hello, World!\n   \0 " ot H do konca, so vsemi znakami, rome \0 (eto vazno dlja ponimanija END))

//     while (end > start && is_in_set(*end, set))
//     {
//         end--;
//     }
//     //printf("end %lu\n",strlen(end)); vivod budet 5 (eto znachit, podschitan ot !\n   \0 ne vkljuchitelno)

//     // Вычисляем длину обрезанной строки
//     size_t trimmed_len = (size_t)(end - start) + 1;
//     //printf("trimmed_len %lu\n",trimmed_len); vivod budet 13. ukazatel na end imeet index 17, ukazatel na start index 4, takim obrazom 17 - 4 + 1 = 13
//     // pochemu start ne index 0? POTOMU chto mi smestili ukazateli vpered do pervih bukv!!!

//     // Выделяем память под новую строку и копируем в нее обрезанный участок
//     char *trimmed_str = (char *)malloc(trimmed_len + 1); // +1 для нулевого символа
//     if (trimmed_str == NULL) {
//         return NULL; // Ошибка выделения памяти
//     }

// // strncpy(trimmed_str, start, trimmed_len);
//     unsigned int i = 0;
//     const char *temp_start = start;
//     char *temp_trimmed = trimmed_str;

//     while (i < trimmed_len && *temp_start != '\0')
//     {
//         *temp_trimmed = *temp_start;
//         temp_trimmed++;
//         temp_start++;
//         i++;
//     }

//     while (i < trimmed_len)
//     {
//         *temp_trimmed = '\0';
//         temp_trimmed++;
//         i++;
//     }

//     *temp_trimmed = '\0';

//     return trimmed_str;

// }

// int main()
// {
//     const char *s1 = "   \tHello, World!\n   ";
//     const char *set = " \t\n"; // Указываем символы для удаления

//     char *trimmed_str = ft_strtrim(s1, set);

//     if (trimmed_str != NULL) {
//         printf("Обрезанная строка: \"%s\"\n", trimmed_str);
//         free(trimmed_str); // Не забудьте освободить память, когда строка больше не нужна
//     } else {
//         printf("Ошибка при обрезке строки.\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int ft_count_words(const char *s, char c)
// {
//     int count = 0; // Это объявление и инициализация переменной count, которая будет использоваться для подсчёта слов.
//     int in_word = 0; //Это объявление и инициализация переменной in_word, которая используется для отслеживания того, находится ли анализируемый символ внутри слова.

//     while (*s)
//     {
//         if (*s == c)
//         {
//             in_word = 0; //Если текущий символ - символ-разделитель, то переменная in_word устанавливается в 0, что означает, что мы вне слова.(t.e slovo zakonchilos, sbros)
//         }
//         else if (!in_word) // Так же если НЕ в нутри слова / *s больше не с (срабативает тогда, когда *s  перестает быть равным с )
//         {
//             in_word = 1;
//             count++;
//         }
//         s++;
//     }
//     return count;
// }

// //char *strdup(const char *s)
// char *ft_strdup(const char *s)
// {
//     if (s == NULL)
//     {
//         return NULL;
//     }
// /* chast nize eto strlen*/
//     size_t len = 0;
//     const char *s_ptr = s;

//     while (*s_ptr)
//     {
//         len++;
//         s_ptr++;
//     }
// /* chast viwe strlen*/

//     char *new_str = (char *)malloc(len + 1); // mesto dlja kopirovanija

//     if (new_str != NULL)
//     {
//         char *new_str_ptr = new_str; // Указатель на новую строку

//         // Псевдокод для копирования строки
//         while (*s)
//         {
//             *new_str_ptr = *s;
//             new_str_ptr++;
//             s++;
//         }
//         *new_str_ptr = '\0'; // Убедитесь, что новая строка завершается нулевым символом

//         return new_str;
//     }

//     return new_str;
// }

// char **ft_split(char const *s, char c)
// {
//     if (!s) // if (!s) - Эта проверка выполняется, чтобы убедиться, что входная строка s не является нулевым указателем (т.е., она существует). Если s - нулевой указатель, функция возвращает NULL (в случае ошибки).
//         return NULL;

//     int word_count = ft_count_words(s, c);

//     char **result = (char **)malloc(sizeof(char *) * (word_count + 1)); // +1 for the NULL pointer
//     //Выделяется память для массива указателей на строки (массив указателей на указатели char **). Память выделяется на основе количества слов в строке s плюс один дополнительный указатель для завершения массива указателей значением NULL.

//     if (!result) // if (!result) - Проверка, была ли выделена память под массив указателей. Если выделение памяти не удалось (например, из-за нехватки памяти), функция возвращает NULL.
//         return NULL;

//     int word_index = 0;// Эта переменная используется для отслеживания индекса, в который будет помещено следующее слово в массиве указателей.
//     const char *start = s; //Указатель start инициализируется указателем s. Этот указатель будет использоваться для отслеживания начала текущего слова.

//     while (*s) //Это начало цикла, который будет перебирать каждый символ строки s.
//     {
//         if (*s == c)
//         {
//             if (s != start) // Перед тем, как завершить текущее слово, проверяется, был ли он пустым. Если текущий символ s не является началом слова (т.е., указатель start не равен s), это означает, что у нас есть слово для разделения.
//             {
//                 char *word = ft_strdup(start);
//                 result[word_index++] = word;//Слово добавляется в массив указателей result, а затем индекс word_index увеличивается на 1 для следующего слова.
//             }
//             start = s + 1;//Указатель start перемещается к следующему символу, который будет началом следующего слова.
//         }
//         s++; //Указатель s также перемещается к следующему символу строки.
//     }

//     if (s != start) // По завершении цикла проверяется, не осталось ли последнее слово, и если оно есть, то оно также добавляется в массив result аналогичным образом.
//     {
//         char *word = ft_strdup(start);
//         result[word_index++] = word;
//     }

//     result[word_index] = NULL;// В массив указателей result добавляется завершающий указатель NULL, чтобы указать конец массива строк.

//     return result; //Завершение функции с возвращением массива строк, созданного из разделенных слов.
// }

// // Ваша реализация ft_split здесь...

// int main()
// {
//     const char *s = "This is an example";
//     char **words = ft_split(s, ' ');

//     if (words == NULL)
//     {
//         printf("Ошибка при разделении строки.\n");
//         return 1;
//     }

//     int i = 0;
//     while (words[i] != NULL)
//     {
//         printf("Слово %d: %s\n", i + 1, words[i]);
//         i++;
//     }

//     // Освобождение памяти
//     for (int j = 0; words[j] != NULL; j++)
//     {
//         free(words[j]);
//     }
//     free(words);

//     return 0;
// }

// #include <string.h>
// // #include "libft.h"

// #include <stddef.h>

// // Статическая функция для случая, когда d < s
// static void memmove_forward(unsigned char *d, const unsigned char *s, size_t n) {
//     while (n--) {
//         *d++ = *s++;
//     }
// }

// // Статическая функция для случая, когда d >= s
// static void memmove_backward(unsigned char *d, const unsigned char *s, size_t n) {
//     d += n;
//     s += n;
//     while (n--) {
//         *(--d) = *(--s);
//     }
// }

// void *ft_memmove(void *dest, const void *src, size_t n) {
//     unsigned char *d = dest;
//     const unsigned char *s = src;

//     if (d == s) {
//         return dest;
//     }

//     if (d < s) {
//         memmove_forward(d, s, n);
//     } else {
//         memmove_backward(d, s, n);
//     }

//     return dest;
// }

// int main() {
//     char source[] = "Hello, World!";
//     char destination[20];

//     // Используем memmove для копирования данных из source в destination
//     ft_memmove(destination, source, strlen(source) + 1); // +1 для копирования завершающего нулевого символа

//     // Выводим скопированную строку
//     printf("Destination: %s\n", destination);

//     return 0;
// }

// #include <stdio.h>

// size_t ft_strlcpy(char *dest, const char *src, size_t size)
// {
//     size_t src_len = 0;
//     while (src[src_len] && src_len < size - 1)
//     {
//         dest[src_len] = src[src_len];
//         src_len++;
//     }

//     dest[src_len] = '\0';

//     while (src[src_len]) {
//         src_len++;
//     }

//     return src_len;
// }

// int main() {
//     char source[] = "This is a long string.";
//     char destination[10];

//     size_t copied = ft_strlcpy(destination, source, sizeof(destination));

//     printf("Copied: %zu\n", copied);
//     printf("Destination: %s\n", destination);

//     return 0;
// }

// #include <string.h>
// #include <stdio.h> // Добавили заголовок для printf

// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	while (n > 0 && (*s1 || *s2) && (*s1 == *s2))
// 	{
// 		s1++;
// 		s2++;
// 		n--;
// 	}
// 	if (n == 0)
// 		return (0);
// 	return ((unsigned char)*s1 - (unsigned char)*s2);
// }

// size_t	ft_strlen(const char *str)
// {
// 	size_t	len;

// 	len = 0;
// 	while (str[len])
// 	{
// 		len++;
// 	}
// 	return (len);
// }

// char	*ft_strnstr(const char *arr, const char *some_part, size_t len)
// {
// 	size_t	some_part_len;

// 	some_part_len = ft_strlen(some_part);

// 	if (some_part_len == 0)
// 	{
// 		return ((char *)arr);
// 	}

// 	while (*arr && len >= some_part_len)
// 	{
// 		if (*arr == *some_part
// 			&& ft_strncmp(arr, some_part, some_part_len) == 0)
// 		{
// 			return ((char *)arr);
// 		}
// 		arr++;
// 		len--;
// 	}

// 	return (NULL);
// }
// int main()
// {
//     const char *arr = "This is a simple example";
//     const char *some_part = "simple";
//     size_t len = 20; // Ограничение на поиск

//     char *result = ft_strnstr(arr, some_part, len);

//     if (result)
//     {
//         printf("Found needle at position: %ld\n", (long)(result - arr));
//     }
//     else
//     {
//         printf("Needle not found in the haystack.\n");
//     }

//     return 0;
// }

// static void	*ft_overflow(size_t count, size_t size)
// {
// 	if (count == 0 || size == 0)
// 	{
// 		return (NULL);
// 	}
// 	if (size > SIZE_MAX / count)
// 	{
// 		return (NULL);
// 	}
// 	return ((void *)1);
// }

// static void	*ft_memset(void *ptr, int value, size_t num)
// {
// 	unsigned char	*p;
// 	int				val;
// 	size_t			i;

// 	p = ptr;
// 	val = value;
// 	i = 0;
// 	while (i < num)
// 	{
// 		p[i] = val;
// 		i++;
// 	}
// 	return (ptr);
// }

// void	*ft_calloc(size_t count, size_t size)
// {
// 	size_t	total_size;
// 	void	*ptr;

// 	ft_overflow(count, size);
// 	total_size = count * size;
// 	ptr = malloc(total_size);

// 	if (ptr)
// 	{
// 		ft_memset(ptr, 0, total_size);
// 	}
// 	else
// 	{
// 		return (NULL);
// 	}
// 	return (ptr);
// }

// int main()
// {
// 	size_t num_elements = 5;
// 	size_t element_size = sizeof(int);

// 	int *array = (int *)ft_calloc(num_elements, element_size);

// 	if (array)
// 	{
// 		for (size_t i = 0; i < num_elements; i++)
// 		{
// 			printf("array[%zu] = %d\n", i, array[i]);
// 		}

// 		free(array); // Освобождаем память после использования
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}

// 	return 0;
// }

// #include <unistd.h>

// void ft_putchar_fd(char c, int fd)
// {
//     write(fd, &c, 1);
// }

// static void	ft_max_min_fd(int fd)
// {
// 	const char	*str;
// 	int			i;

// 	str = "-2147483648";
// 	i = 0;
// 	while (*str)
// 	{
// 		ft_putchar_fd(*str, fd);
// 		str++;
// 	}
// }

// void ft_putnbr_fd(int n, int fd)
// {
//     if (n == 0)
//     {
//         ft_putchar_fd('0', fd);
//         return;
//     }
//     if (n == -2147483648)
//     {
//         ft_max_min_fd(fd);
//         return;
//     }
//     if (n < 0)
//     {
//         ft_putchar_fd('-', fd);
//         n = -n;
//     }
//     if (n / 10)
//         ft_putnbr_fd(n / 10, fd);
//     ft_putchar_fd((n % 10) + '0', fd);
// }

// int main()
// {
//     int number = -2147483648;
//     int fd = 1;

//     ft_putnbr_fd(number, fd);

//     return 0;
// }

// #include <unistd.h>

// void	ft_putendl_fd(char *s, int fd)
// {
// 	char	newline;

// 	if (s == NULL)
// 	{
// 		write(fd, "\0", 1);
// 		return ;
// 	}
// 	if (*s)
// 	{
// 		newline = '\n';
// 		while (*s != 0)
// 		{
// 			write(fd, s, 1);
// 			s++;
// 		}
// 		write(fd, &newline, 1);
// 	}
// }

// int main() {
//     char *message = "test";
//     int fd = 1;

//     ft_putendl_fd(message, fd);

//     return 0;
// }

// void ft_striteri(char *s, void (*f)(unsigned int, char*))
// {
//     if (s && f)
//     {
//         unsigned int i = 0;
//         while (s[i])
//         {
//             f(i, &s[i]);
//             i++;
//         }
//     }
// }

// void print_char_index(unsigned int index, char *character)
// {
//     printf("Character at index %u is %c\n", index, *character);
// }

// int main() {
//     char str[] = "Hello, World!";

//     ft_striteri(str, &print_char_index);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

// typedef struct s_list {
//     void *content;
//     struct s_list *next;
// } t_list;

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*node;

// 	node = (t_list *)malloc(sizeof(t_list));
// 	if (!node)
// 	{
// 		return (NULL);
// 	}
// 	node->content = content;
// 	node->next = NULL;
// 	return (node);
// }

// void ft_lstadd_front(t_list **lst, t_list *new)
// {
//     if (lst && new)
// 	{
//         new->next = *lst;
//         *lst = new;
//     }
// }

// int main()
// {
//     t_list *myList = NULL;

//     // Создаем узлы и добавляем их в начало списка
//     ft_lstadd_front(&myList, ft_lstnew("Node 1"));
//     ft_lstadd_front(&myList, ft_lstnew("Node 2"));
//     ft_lstadd_front(&myList, ft_lstnew("Node 3"));

//     // Перебираем список и выводим его содержимое
//     t_list *current = myList;
//     while (current)
// 	{
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }

//     // Освобождаем память, выделенную для списка
//     while (myList)
// 	{
//         t_list *temp = myList;
//         myList = myList->next;
//         free(temp);
//     }

//     return 0;
// }

// typedef struct s_list
// {
// 	void *content;
// 	struct s_list *next;
// } t_list;

// void	mem_clear(t_list **lst, void (*del)(void *))
// {
// 	t_list	*current;
// 	t_list	*next;

// 	if (lst == NULL || del == NULL)
// 		return ;
// 	current = *lst;
// 	while (current != NULL)
// 	{
// 		next = current->next;
// 		del(current->content);
// 		free(current);
// 		current = next;
// 	}
// 	*lst = NULL;
// }

// t_list	*create_node(void *content)
// {
// 	t_list	*new_node;

// 	new_node = (t_list *)malloc(sizeof(t_list));
// 	if (new_node == NULL)
// 	{
// 		return (NULL);
// 	}
// 	new_node->content = content;
// 	new_node->next = NULL;
// 	return (new_node);
// }

// void	add_node_to_end(t_list **list, t_list *new_node)
// {
// 	t_list	*current;

// 	if (*list == NULL)
// 	{
// 		*list = new_node;
// 	}
// 	else
// 	{
// 		current = *list;
// 		while (current->next != NULL)
// 		{
// 			current = current->next;
// 		}
// 		current->next = new_node;
// 	}
// }

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new_list;
// 	void	*new_content;
// 	t_list	*new_node;

// 	new_list = NULL;
// 	while (lst != NULL)
// 	{
// 		new_content = f(lst->content);
// 		if (new_content == NULL)
// 		{
// 			mem_clear(&new_list, del);
// 			return (NULL);
// 		}
// 		new_node = create_node(new_content);
// 		if (new_node == NULL)
// 		{
// 			mem_clear(&new_list, del);
// 			return (NULL);
// 		}
// 		add_node_to_end(&new_list, new_node);
// 		lst = lst->next;
// 	}
// 	return (new_list);
// }

// void *custom_function(void *content) {
//     char *original = (char *)content;
//     char *new_content = (char *)malloc(strlen(original) + 1);
//     for (int i = 0; original[i]; i++) {
//         new_content[i] = toupper(original[i]); // Преобразуем в верхний регистр
//     }
//     new_content[strlen(original)] = '\0';
//     return new_content;
// }

// // Пример функции, которая удаляет содержимое узла
// void custom_delete(void *content) {
//     free(content);
// }

// int main() {
//     // Создаем узлы списка и выделяем память для их содержимого
//     t_list *node1 = (t_list *)malloc(sizeof(t_list));
//     char *data1 = (char *)malloc(10);
//     strcpy(data1, "Hello");
//     node1->content = data1;

//     t_list *node2 = (t_list *)malloc(sizeof(t_list));
//     char *data2 = (char *)malloc(10);
//     strcpy(data2, "World");
//     node2->content = data2;

//     // Связываем узлы в список
//     node1->next = node2;
//     node2->next = NULL;

//     // Указатель на первый узел
//     t_list *list = node1;

//     // Вызываем ft_lstmap для создания нового списка с применением custom_function
//     t_list *new_list = ft_lstmap(list, custom_function, custom_delete);

//     // Выводим содержимое нового списка
//     t_list *current = new_list;
//     while (current != NULL) {
//         printf("Содержимое нового узла: %s\n", (char *)current->content);
//         current = current->next;
//     }

//     // Освобождаем память для нового списка
//     mem_clear(&new_list, custom_delete);

//     // Освобождаем память для исходного списка
//     mem_clear(&list, custom_delete);

//     return 0;
// }

// static int	count_words(const char *str, char c)
// {
// 	int	i;
// 	int	trigger;

// 	i = 0;
// 	trigger = 0;
// 	while (*str)
// 	{
// 		if (*str != c && trigger == 0)
// 		{
// 			trigger = 1;
// 			i++;
// 		}
// 		else if (*str == c)
// 			trigger = 0;
// 		str++;
// 	}
// 	return (i);
// }

// static char	*word_dup(const char *str, int start, int finish)
// {
// 	char	*word;
// 	int		i;

// 	i = 0;
// 	word = malloc((finish - start + 1) * sizeof(char));
// 	while (start < finish)
// 		word[i++] = str[start++];
// 	word[i] = '\0';
// 	return (word);
// }

// char	**ft_split(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	j;
// 	int		index;
// 	char	**split;

// 	split = malloc((count_words(s, c) + 1) * sizeof(char *));
// 	if (!s || !split)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	index = -1;
// 	while (i <= ft_strlen(s))
// 	{
// 		if (s[i] != c && index < 0)
// 			index = i;
// 		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
// 		{
// 			split[j++] = word_dup(s, index, i);
// 			index = -1;
// 		}
// 		i++;
// 	}
// 	split[j] = 0;
// 	return (split);
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <assert.h>

// static void	ft_memmove_forward(unsigned char *d,
// 		const unsigned char *s, size_t n)
// {
// 	while (n != 0)
// 	{
// 		*d++ = *s++;
// 		n--;
// 	}
// }
// //static function for d > s

// static void	ft_memmove_backward(unsigned char *d,
// 		const unsigned char *s, size_t n)
// {
// 	unsigned char		*dest;
// 	const unsigned char	*src;

// 	dest = d + n;
// 	src = s + n;
// 	while (n--)
// 	{
// 		*(--dest) = *(--src);
// 	}
// }

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	unsigned char		*d;
// 	const unsigned char	*s;

// 	d = (unsigned char *)dest;
// 	s = (const unsigned char *) src;
// 	if (d == s)
// 	{
// 		return (dest);
// 	}
// 	if (d < s)
// 	{
// 		ft_memmove_forward(d, s, n);
// 	}
// 	else
// 	{
// 		ft_memmove_backward(d, s, n);
// 	}
// 	return (dest);
// }

// int main() {
//     char src[] = "This is a test string.";
//     char dest[50];
//     ft_memmove(dest, src, 5);
//     printf("Copied string: %s\n", dest);
//     return 0;
// }

// static int	count_words(const char *s, char c)
// {
// 	int	count;
// 	int	separator;

// 	count = 0;
// 	separator = 0;
// 	while (*s)
// 	{
// 		if (*s != c && separator == 0)
// 		{
// 			separator = 1;
// 			count++;
// 		}
// 		else if (*s == c)
// 			separator = 0;
// 		s++;
// 	}
// 	return (count);
// }

// static char	*word_copy(const char *str, int start, int finish)
// {
// 	char	*word;
// 	int		i;

// 	word = NULL;
// 	i = 0;
// 	word = malloc((finish - start + 1) * sizeof(char));
// 	if (!word)
// 		return (NULL);
// 	while (start < finish)
// 		word[i++] = str[start++];
// 	word[i] = '\0';
// 	return (word);
// }

// char	**ft_split(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	j;
// 	int		index;
// 	char	**split;

// 	split = malloc((count_words(s, c) + 1) * sizeof(char *));
// 	if (!s || !split)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	index = -1;
// 	while (i <= strlen(s))
// 	{
// 		if (s[i] != c && index < 0)
// 			index = i;
// 		else if ((s[i] == c || i == strlen(s)) && index >= 0)
// 		{
// 			split[j++] = word_copy(s, index, i);
// 			index = -1;
// 		}
// 		i++;
// 	}
// 	split[j] = 0;
// 	return (split);
// }

// int main()
// {
//     char *str = "spl:asd:wer";
//     char **split = ft_split(str, ':');

//     if (split)
//     {
//         int i = 0;
//         while (split[i])
//         {
//             printf("Word %d: %s\n", i, split[i]);
//             free(split[i]);
//             i++;
//         }
//         free(split);
//         split = NULL;
//     }
//     else
//     {
//         printf("ft_split returned NULL\n");
//     }

//     return 0;
// }

// static char	*ft_is_in_str(const char *s, int c)
// {
// 	while (*s)
// 	{
// 		if (*s == c)
// 		{
// 			return ((char *)s);
// 		}
// 		s++;
// 	}
// 	if (c == '\0')
// 	{
// 		return ((char *)s);
// 	}
// 	return (NULL);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	i;

// 	if (!s1 || !set)
// 		return (NULL);
// 	while (*s1 && ft_is_in_str(set, *s1))
// 		s1++;
// 	i = strlen(s1);
// 	while (i && ft_is_in_str(set, s1[i]))
// 		i--;
// 	return (ft_substr(s1, 0, i + 1));
// }

// int main()
// {
//     const char *s1 = "   \tHello, World!\n   ";
//     const char *set = " \t\n";

//     char *trimmed_str = ft_strtrim(s1, set);

//     if (trimmed_str != NULL) {
//         printf("part of string: \"%s\"\n", trimmed_str);
//         free(trimmed_str);
//     } else {
//         printf("mistake.\n");
//     }

//     return 0;
// }



// # include "ft_printf.h"



// int	ft_putstr_ft(char *str, size_t *counter)
// {
// 	size_t	str_len;

// 	str_len = 0;
// 	if (!str)
// 		return (1);
// 	while (str[str_len] != '\0')
// 		str_len++;
// 	write(1, str, str_len);
// 	(*counter += str_len);
// 	return (0);
// }

// int	ft_putchar_ft(char c, size_t *counter)
// {
// 	if (write(1, &c, 1) == 1)
// 	{
// 		(*counter)++;
// 		return ((unsigned char)c);
// 	}
// 	else
// 		return (EOF);
// }

// void	ft_format(va_list ap, char *str, size_t *counter)
// {
// 	if (*str == '\0')
// 		return ;
// 	else if (*str == '%')
// 		ft_putchar_ft('%', counter);
// 	else if (*str == 'c')
// 		ft_putchar_ft(va_arg(ap, int), counter);
// 	else if (*str == 's')
// 		ft_putstr_ft(va_arg(ap, char *), counter);
// 	else if (*str == 'p')
// 		ft_putptr_ft(va_arg(ap, void *), counter);
// }

// int	ft_printf(char const *format, ...)
// {
// 	va_list	ap;
// 	size_t	counter;

// 	if (!format)
// 		return (-1);
// 	counter = 0;
// 	va_start(ap, format);
// 	while (*format)
// 	{
// 		if (*format == '%')
// 		{
// 			format++;
// 			ft_format(ap, (char *)format, &counter);
// 		}
// 		else
// 		{
// 			ft_putchar_ft(*format, &counter);
// 		}
// 		format++;
// 	}
// 	va_end(ap);
// 	return (counter);
// }

// static void	print_hex_digit(int digit, size_t *counter)
// {
// 	char	hex_char;

// 	if (digit < 10)
// 	{
// 		hex_char = digit + '0';
// 	}
// 	else
// 	{
// 		hex_char = digit - 10 + 'a';
// 	}
// 	write(1, &hex_char, 1);
// 	(*counter)++;
// }

// static void	print_value_as_hex(long unsigned value, size_t *counter)
// {
// 	if (value >= 16)
// 	{
// 		print_value_as_hex(value / 16, counter);
// 		print_value_as_hex(value % 16, counter);
// 	}
// 	else
// 	{
// 		print_hex_digit(value % 16, counter);
// 	}
// }

// void	ft_putptr_ft(void *ptr, size_t *counter)
// {
// 	long unsigned	address;

// 	address = (long unsigned)ptr;
// 	write(1, "0x", 2);
// 	print_value_as_hex(address, counter);
// }

// int main() {
//     int a = 345;
//     int *ptr = &a;

//     ft_printf("%p\n", ptr);

//     return 0;
// }

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>


#define HEX_LOW 0
#define HEX_UPP 1

void ft_putchar_ft(char c, size_t *counter) {
    putchar(c);
    (*counter)++;
}

void ft_puthex_ft(uintmax_t num, size_t *counter, int letter_case)
{
    if (num >= 16)
        ft_puthex_ft(num / 16, counter, letter_case);

    if (letter_case == HEX_LOW)
        ft_putchar_ft("0123456789abcdef"[num % 16], counter);
    else if (letter_case == HEX_UPP)
        ft_putchar_ft("0123456789ABCDEF"[num % 16], counter);
}

void	ft_format(va_list ap, char *str, size_t *counter)
{
	if (*str == '\0')
		return ;
	else if (*str == '%')
		ft_putchar_ft('%', counter);
	else if (*str == 'c')
		ft_putchar_ft(va_arg(ap, int), counter);
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			ft_puthex_ft(va_arg(ap, unsigned int), counter, HEX_LOW);
		else
			ft_puthex_ft(va_arg(ap, unsigned int), counter, HEX_UPP);
	}
}

int ft_printf(const char *format, ...)
{
    va_list ap;
    size_t counter;

    if (!format)
        return (-1);
    counter = 0;
    va_start(ap, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            ft_format(ap, (char *)format, &counter);
        }
        else
        {
            ft_putchar_ft(*format, &counter);
        }
        format++;
    }
    va_end(ap);
    return (counter);
}

int main() {

    size_t counter_low = 0;
    printf("Lowercase Hex: ");
    ft_puthex_ft(9123967, &counter_low, HEX_LOW);
    printf("\nCounter: %zu\n\n", counter_low);

    size_t counter_upp = 0;
    printf("Uppercase Hex: ");
    ft_puthex_ft(123, &counter_upp, HEX_UPP);
    printf("\nCounter: %zu\n\n", counter_upp);
    return 0;
}



