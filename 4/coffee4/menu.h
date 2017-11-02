#ifndef _MENU_H_
#define _MENU_H_

extern int menuN;

void menu_print(void); 
int menu_select(void);
int menu_pay(int priceTotal);
void menu_change(int priceTotal, int payTotal);

#endif  // #ifndef _MENU_H_
