/*
 * @uthor: Ernest Mujambere
 * @Purpose: State diagram for recognizing floating-point literals, integer, string & variable names
 * version: 1.0.0
 * Cl@ass: Programming Language Concept Spring 2020
 */

import java.util.Scanner;
import java.util.ArrayList;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

public class Quest_1 
{
	
	public static void main(String[] args) throws IOException {
		
		parseSource("E:\\Final_PLC\\src\\test_Q");
	}
	// Variables
	private static ArrayList<String> lex;
	private static FileWriter tokenFile;
	private static Scanner input;
	private static PrintWriter writeToFile;
	
	/*
	 * State diagram function
	 */
	
	private static ArrayList<String> parseSource(String name) throws IOException {

        // Initializing variables

        // This array will hold lexemes parse from the source code
        lex = new ArrayList<String>();
        // This scanner will read from the source code file
        input = new Scanner(new File(name));
        // This String object will capture each line read from the source
        String line = "";

        // Starting of the parsing
        while(input.hasNext()){
            
            line = input.nextLine();

            String[] lexemes = line.split(" ");

            for(String s : lexemes){

                // Check for STRING LEXEME
                if(s.matches(".*[a-zA-Z]")){
                    lex.add("STRING_LITERALS");
                }

                // Check for INTEGER LEXEME
                else if(s.matches("[+-]?[0-9][0-9]*")){
                    lex.add("INTEGER_LITERALS");
                }

                // Check for FLOAT LEXEME
                else if(s.matches("[+-]?([0-9]*[.])?[0-9]+")) {
                    lex.add("FLOAT_LITERALS");
                }

                // Check for SPECIAL CHARACTTER
                else if(s.matches(".*[$&+,:;`=\\\\\\\\?@#|/'<>.^*\\\"{}()\\\\[\\\\]%!-]")){
                    lex.add("SPECIAL_CHAR");
                }

                else
                    lex.add("UNDEFINED");
            }
        }
        
        // Testing purpose 
        for(String s : lex) {
        	System.out.println(s);
        }
        //System.out.println(lex.toString());
        return lex;
    }
}
