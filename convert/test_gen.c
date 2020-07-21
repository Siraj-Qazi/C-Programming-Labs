//
// Created by Siraj Qazi on 7/10/2020.
//
#include <stdio.h>

int main()
{
    FILE* testFile = fopen("testfile_SMALL.txt","w");
    fprintf(testFile,"sdfk sdlk oiweru oowe:; .s. sdwo osd owioer223 2309\n");
    fprintf(testFile,"the quick brown fox jumped over the lazy dog.\n");
    fprintf(testFile,"fucking helll men, this bloody works!!! ##$#@#$@#4\n");
    fprintf(testFile,"by now i'm baSICAically just trying to fuck this u[p].\n");

    fclose(testFile);

    testFile = fopen("testfile_CAPS.txt","w");
    fprintf(testFile,"JSJSJSJS KD  THISD F SDJKF LASKJDH F3 H RDSF K\n");
    fprintf(testFile,"YOUU SHSODIF HASAS HASH ASLDKASKDJH GK3784&*&^  *&^*6.\n");
    fprintf(testFile,"THE QUICK MOTHER FOCKER JUMPED OVER THE LAZY ASS DOG\n");
    fprintf(testFile,"by now i'm basically just trying to FUCK THIS UP.\n");

    fclose(testFile);


}