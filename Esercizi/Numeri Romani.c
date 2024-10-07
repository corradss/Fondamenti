#include <stdio.h>

int main(){
    int num, contatore = 0;

    scanf("%d", &num);

    if (num - 1000 == 0)    {printf("M\n"); return 0;}
    if (num - 1000 == -100) {printf("CM\n"); return 0;}
    if (num - 1000 == -50)  {printf("LM\n"); return 0;}
    if (num - 1000 == -10)  {printf("XM\n"); return 0;}
    if (num - 1000 == -5)   {printf("VM\n"); return 0;}
    if (num - 1000 == -1)   {printf("IM\n"); return 0;}

    while (num - 1000 >= 0){
        printf("M");
        num = num - 1000;
        if (num - 1000 == 0)    {printf("M\n"); return 0;}
        if (num - 1000 == -100) {printf("CM\n"); return 0;}
        if (num - 1000 == -50)  {printf("LM\n"); return 0;}
        if (num - 1000 == -10)  {printf("XM\n"); return 0;}
        if (num - 1000 == -5)   {printf("VM\n"); return 0;}
        if (num - 1000 == -1)   {printf("IM\n"); return 0;}
        
    }

    if (num - 500 == 0)    {printf("D\n"); return 0;}
    if (num - 500 == -100) {printf("CD\n"); return 0;}
    if (num - 500 == -50)  {printf("LD\n"); return 0;}
    if (num - 500 == -10)  {printf("XD\n"); return 0;}
    if (num - 500 == -5)   {printf("VD\n"); return 0;}
    if (num - 500 == -1)   {printf("ID\n"); return 0;}

    while (num - 500 >= 0){
        printf("D");
        num = num - 500;
        if (num - 500 == 0)    {printf("D\n"); return 0;}
        if (num - 500 == -100) {printf("CD\n"); return 0;}
        if (num - 500 == -50)  {printf("LD\n"); return 0;}
        if (num - 500 == -10)  {printf("XD\n"); return 0;}
        if (num - 500 == -5)   {printf("VD\n"); return 0;}
        if (num - 500 == -1)   {printf("ID\n"); return 0;}
        
    }

    if (num - 100 == 0)    {printf("C\n"); return 0;}
    if (num - 100 == -10)  {printf("XC\n"); return 0;}
    if (num - 100 == -5)   {printf("VC\n"); return 0;}
    if (num - 100 == -1)   {printf("IC\n"); return 0;}

    while (num - 100 >= 0){
        printf("C");
        num = num - 100;
        if (num - 100 == 0)    {printf("C\n"); return 0;}
        if (num - 100 == -10)  {printf("XC\n"); return 0;}
        if (num - 100 == -5)   {printf("VC\n"); return 0;}
        if (num - 100 == -1)   {printf("IC\n"); return 0;}
        
    }

    if (num - 50 == 0)    {printf("L\n"); return 0;}
    if (num - 50 == -10)  {printf("XL\n"); return 0;}
    if (num - 50 == -5)   {printf("VL\n"); return 0;}
    if (num - 50 == -1)   {printf("IL\n"); return 0;}

    while (num - 50 >= 0){
        printf("L");
        num = num - 50;
        if (num - 50 == 0)    {printf("L\n"); return 0;}
        if (num - 50 == -10)  {printf("XL\n"); return 0;}
        if (num - 50 == -5)   {printf("VL\n"); return 0;}
        if (num - 50 == -1)   {printf("IL\n"); return 0;}
        
    }

    if (num - 10 == 0)    {printf("X\n"); return 0;}
    if (num - 10 == -1)   {printf("IX\n"); return 0;}

    while (num - 10 >= 0){
        printf("X");
        num = num - 10;
        if (num - 10 == 0)    {printf("X\n"); return 0;}
        if (num - 10 == -1)   {printf("IX\n"); return 0;}
        
    }

    if (num - 5 == 0)    {printf("V\n"); return 0;}
    if (num - 5 == -1)   {printf("IV\n"); return 0;}

    while (num - 5 >= 0){
        printf("V");
        num = num - 5;
        if (num - 5 == 0)    {printf("V\n"); return 0;}
        if (num - 5 == -1)   {printf("IV\n"); return 0;}
        
    }
    while (num - 1 >= 0){
        printf("I");
        num = num - 1;
        printf("\n");
    }
    


}