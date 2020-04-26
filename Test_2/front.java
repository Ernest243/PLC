import java.io.File;

public class front {

    /* Global declarations */
    /* Variables */
    public int charClass;
    public char lexeme[] = new char[100];
    public char nextChar;
    public int lexLen;
    public int token;
    public int nextToken;
    public File in_fp;

    /* Character classes */
    public static final int LETTER = 0;
    public static final int DIGIT = 1;
    public static final int UNKNOWN = 99;

    /* Token codes */
    public static final int INT_LIT = 10;
    public static final int IDENT = 11;
    public static final int ASSIGN_OP = 20;
    public static final int ADD_OP = 21;
    public static final int SUB_OP = 22;
    public static final int MULT_OP = 23;
    public static final int DIV_OP = 24;
    public static final int LEFT_PAREN = 25;
    public static final int RIGHT_PAREN = 26;

    /***************************************/
    /* main driver */
    public static void main()
    {
        /* Open the input data file and process its contents */
        
    }

    /* Function declarations */

    public int lookup(char ch)
    {
        switch (ch) {
            case '(':
                addChar();
                nextToken = LEFT_PAREN;
                break;
            case ')':
                addChar();
                nextToken = RIGHT_PAREN;
                break;
            case '+':
                addChar();
                nextToken = ADD_OP;
                break;
            case '-':
                addChar();
                nextToken = SUB_OP;
                break;
            case '*':
                addChar();
                nextToken = MULT_OP;
                break;
            case '/':
                addChar();
                nextToken = DIV_OP;
                break;
            default:
                addChar();
                nextToken = EOF;
                break;
        }

        return nextToken;
    }

    public void getChar() 
    {

    }
}