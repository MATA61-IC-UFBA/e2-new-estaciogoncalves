/* main.c */
int main(argc, argv)
int argc;
char **argv;
{
  if(argc > 1) {
    if(!(yyin = fopen(argv[1], "r"))) {
      perror(argv[1]);
      return (1);
    }
  }
  int tok = yylex();
  while(1) {
    if(tok == NUMBER) {
      printf(" constante decimal: %d\n", yylval);
    }
    else { 
      printf(" código do token: %d\n", tok);
    }
    tok = yylex();
    if(tok == EOL){
      printf(" código do token: %d\n", tok);
      break;
    }
  }
}
