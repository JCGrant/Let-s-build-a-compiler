#ifndef _CRADLE_H
#define _CRADLE_H

#define MAX_BUF 100
char Look;
enum Symtype { 
    IfSym,
    ElseSym,
    EndifSym,
    EndSym,
    Ident,
    Number,
    Operator,
};
extern enum Symtype Token;      /* current token */
extern char Value[MAX_BUF];     /* string token of Look */

void GetChar();

void Error(char *s);
void Abort(char *s);
void Expected(char *s);
void Match(char x);

void Newline();

int IsWhite(char c);
int IsOp(char c);

int IsAlpha(char c);
int IsDigit(char c);
int IsAlNum(char c);
int IsAddop(char c);
int IsBoolean(char c);
int IsOrop(char c);
int IsRelop(char c);

void GetName();
void GetNum();
void GetOp();
int GetBoolean();

void Scan();
void SkipWhite();

void Emit(char *s);
void EmitLn(char *s);

void Init();
void InitTable();

char *NewLabel();
void PostLabel(char *label);

void Fin();
#endif
