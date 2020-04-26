public class RDA extends front 
{

  public void expr()
  {
      System.out.printf("Enter <expr>\n");
      /* Parse the first term */
      term();
      /*As long as the next token is + or -, get
      the next token and parse the next term */
      while (nextToken == ADD_OP || nextToken== SUB_OP) {
          lex();
          term();
      }

      System.out.printf("Exit <expr>\n");
  }

  /* term
  Parses strings in the language generated by the rule:
  <term> -> <factor> {(* | /) <factor>} */

  public void term() 
  {
      System.out.printf("Enter <term>\n");
      /*Parse the first factor  */
      factor();
      /*As long a the next token is * or /, get the
      next token and parse the next factor */
      while (nextToken == MULT_OP || nextToken == DIV_OP) 
      {
          lex();
          factor();
      }
      System.out.printf("Exit <term>\n");
  }

  /* Factor 
  Parses strings in the language generated by the rule:
  <factor> -> id | int_constant | ( <exp> ) */

  public void factor() 
  {
      System.out.printf("Enter <factor>\n");
      /* Dtermine which RHS */
      if (nextToekn == IDENT || nextToken == INT_LIT) 
      {
        lex();
        expr();
        if(nextToken == RIGHT_PAREN)
            lex();
        else
            error();
      }

      else
        error();
  }

  System.out.printf("Exit <fator>\n");
}