#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
time.h
---

#include <conio.h> и getch()

#include <stdio.h>
#include <conio.h>
 
int main () {
	printf ("Hello World\n");
    
	getch();
}

#include <stdio.h>
 
int main() {
    int max = 2147483647;
     printf("%d\n", max);
    printf("%d\n", max+1);
    printf("%d\n", max+2);
    printf("%d\n", max+10);
}

#include <stdio.h>
main() {
    char ch = 63;
    unsigned char uch = 'r';
    short j = 'b', k = 99;
 
    printf("%c == %d\n", ch, ch);
    printf("%c == %d\n", uch, uch);
    printf("%c, %c\n", j, k);
}

char vowels[] = {'a', 'e', 'i', 'o', 'u', 'y'};
float f_arr[6];
 
f_arr[0] = 25.3;
f_arr[4] = 34.2;
printf("%c, %.2f\n", vowels[4], f_arr[0]);

'\n' — создание новой строки и переход на нее;

'\t' — табуляция (отступ в несколько пробелов);

'\r' — возврат каретки (перевод курсора в первую позицию текущей строки);

'\b' — возврат курсора на один символ назад с удалением этого символа.

'\\' — обратный косая черта;

'\'' — одиночная кавычка;

'\"' — двойная кавычка (не в строке можно просто '"');

'\0' — пустота, символ с кодом 0 по таблице ASCII.

a > 100 && b != 0

switch (целочисленная_переменная) {
    case константа1:
        операции;
    case константа2:
        операции;
        ….
    default:
        операции;
}

  int a=1;
 
  switch (a) {
    case 0: 
      printf("%d\n", 0);
      break;
    case 1: 
      printf("%d\n", 1);
      break;
    case 2: 
      printf("%d\n", 2);
      break;
    default: 
      printf("%d\n", -1);
  }
  
  --
  int a, b, c, d;
 
a=b=c=d=0; // выражение означает, что всем переменным присваивается 0
 
printf("a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
 
c = ++a;
 
d = b++;
 
printf("a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);

a=0, b=0, c=0, d=0 
a=1, b=1, c=1, d=0

---

#define N 10
 
int arr[N] = {6, 5, -4, 3, -7, 2, 7, 0, 3, 9};
int new_arr[N], i, j;
 
for (i=0; i<N; i++) {
    printf("%d ", i); // просто проверка
    if (arr[i] == 0) {
        printf("Stop. Array contains zero\n");
        break;
    }
}
 
printf("\n");

В языке программирования C существуют следующие поразрядные операции:
 & (И), 
 | (ИЛИ), 
 ^ (исключающее ИЛИ), 
 << (сдвиг влево),
 >> (сдвиг вправо), 
 ~ (поразрядное дополнение до единицы).
 
  printf("%d %o %x %X\n", a,a,a,a);
  printf("%d %o %x %X\n", b,b,b,b);
  63 77 3f 3F 
  31 37 1f 1F
  
  ----
  как в языке C возвести число в степень. 
  Понятно, что можно написать свой код, но скорее всего в стандартной библиотеке уже есть подобная функция. 
  
  С помощью заголовочного файла math.h можно подключить библиотеку с математическими функциями. 
  Среди них есть функция pow(), которая принимает два числа и возвращает результат возведения первого числа в степень, 
  выраженную вторым числом. Однако результат возвращается в виде вещественного числа, а нам требуется целое. 
  Как быть? В языке программирования С есть операции приведения типов, которые меняют тип значения с одного на другой. 
  Например, чтобы преобразовать значение вещественной переменной a в целое, следует написать (int) a.
  --
    char ch = 'c';
 
  putchar('a');
  putchar(98);
  putchar('\n');
  putchar(ch);
	ab 
	c
	
	--
	int a;
 
  a = getchar();
  printf("%c ", a);
  putchar(a);
 
  putchar('\n');
  
  ---
  #include <stdlib.h>
#include <stdio.h>
int main(void)
{
  int c;
  while((c = getchar()) != EOF)
putchar(c); 
 
  return 0;
}

---
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
  char str[] = "Hello";
  int i;
 
  printf("%s\n", str); // первое Hello
 
  for (i = 0; str[i] != '\0'; i++) // второе Hello
    putchar(str[i]);
 
  printf("\n"); 
 
  return 0;
}

---
int i = 0;
  printf ("i=%d, &i=%p \n", i, &i);
  
--
  
#include <stdio.h>
 
int main () {  
	int i = 0;
	printf ("i=%d, &i=%p \n", i, &i);
	return 0;
}

-----
Знак амперсанда (&) перед переменной позволяет получить ее адрес в памяти. 
Для вывода адреса переменной на экран используется специальный формат %p. 
  int a = 6;
  float b = 10.11;
  char c = 'k';
  printf("%d - %p, %.2f - %p, %c - %p\n", a,&a, b,&b, c,&c);
  
  Зная адрес, можно получить значение, которое находится по этому адресу, поставив знак * перед адресом:

  int a = 8;
  printf("%d \n", *&a);
  ---
  int *pi;
  float *pf;
  
  Когда * используется перед указателем не при его объявлении, 
  а в выражениях, то обозначает совсем иное — "получить значение (данные) по адресу, который присвоен указателю".
  
  int x = 1, y, z = 3;
  int *p, *q;
 
  p = &x;
  printf("%d\n", *p); // 1
 
  y = *p;
  printf("%d\n", y); // 1
 
  *p = 0;
  printf("%d %d\n", x, y); // 0 1
 
  q = &z;
  printf("%d\n", *q); // 3
 
  p = q;
  *p = 4;
  printf("%d\n", z); // 4
 
  printf("%p %p\n", p, q); // p == q
  
  ---
  #include <stdio.h>
 
float median (int a, int b); // объявление функции
 
main () {
  int num1 = 18, num2 = 35;
  float result;
 
  printf("%10.1f\n", median(num1, num2));
  result = median(121, 346);
  printf("%10.1f\n", result);
  printf("%10.1f\n", median(1032, 1896));
}
 
float median (int n1, int n2) { // определение функции
  float m;
 
  m = (float) (n1 + n2) / 2;
  return m;
}
----

Внешние статические переменные, в отличие от обычных глобальных переменных, 
нельзя использовать из других файлов в случае программы, 
состоящей не из одного файла. Они глобальны только для функций того файла, 
в котором объявлены. Это своего рода сокрытие данных, по принципу 
"не выставлять наружу ничего лишнего, чтобы 'что-нибудь' нечаянно не могло 'испортить' данные".

Статические переменные, объявленные внутри функций имеют такую же область действия, 
как автоматические. Однако в отличие от автоматических, 
значения локальных статических переменных не теряются, а сохраняются между вызовами функции:

-----

#include <stdio.h>
 
void multi (int *px, int y);
 
main () {
  int x = 34, y = 6;
 
  multi(&x, 367);
  multi(&y, 91);
  printf("%d %d\n", x, y);
}
 
void multi (int *base, int pow) {
  while (pow >= 10) {
    *base = *base * 10;
    pow = pow / 10;
  }
}
----
Текущее время можно узнать с помощью функции time(), прототип которой описан в файле time.h.

---
#include <stdio.h>
#include <time.h>
 
#define N 500
 
main () {
  int i;
  int arr[5] = {0};
 
  srand(time(NULL));
 
  for (i=0; i < N; i++)   
    switch (rand() % 5) {
      case 0: arr[0]++; break;
      case 1: arr[1]++; break;
      case 2: arr[2]++; break;
      case 3: arr[3]++; break;
      case 4: arr[4]++; break;
    }
 
  for (i=0; i < 5; i++) 
    printf("%d - %.2f%%\n", i, ((float) arr[i] / N) * 100);
 
}
----
*(uint32_t *)0x10001000 = xxxx; - записать в ячейку памяти значение xxxx

---