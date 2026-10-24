#include <stdio.h>

struct book {
  int id;
  char name[20];
  float price;
};

struct book input(struct book *kitab) {
  printf("enter the book id : ");
  scanf("%d", &kitab->id);
  getchar();
  printf("enter the book title : ");
  fgets(kitab->name, 20, stdin);
  printf("enter the book price : ");
  scanf("%f", &kitab->price);
}

int main() {

  struct book b1;
  input(&b1);

  printf("Id : %d\nTitle : %sPrice : %0.2f", b1.id, b1.name, b1.price);
  return 0;
}