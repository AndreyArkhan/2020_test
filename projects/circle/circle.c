#include <stdio.h>
#include <math.h>
 
struct circle { int x, y; float dia; char color[10]; };
struct circle new_circle();
void cross (struct circle);
 
main () {
	struct circle a;
 
	a = new_circle();
	cross(a);
}	
 
struct circle new_circle() {
	struct circle new;
 
	printf("Координаты: "); scanf("%d%d", &new.x, &new.y);
	printf("Диаметр: "); scanf("%f", &new.dia); 
	printf("Цвет: "); scanf("%s", new.color);//gets(new.color);
 
	return new;
}
 
void cross (struct circle c) {
	double hyp;
 
	hyp = sqrt((double) c.x * c.x + (double) c.y * c.y);
	printf("Расстояние от центра круга до начала координат: %.2lf\n", hyp);
	if (hyp <= c.dia / 2) puts("Круг пересекает начало координат");
	else puts("Круг не содержит точки начала коорднат");
}