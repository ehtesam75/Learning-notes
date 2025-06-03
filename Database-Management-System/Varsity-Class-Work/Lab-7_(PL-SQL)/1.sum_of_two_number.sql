--PL SQL
/*
main structure:

DECALRE -optional
BEGIN
EXCEPTION -optional
END
*/


--SUM OF TWO NUMBERS

set serveroutput on;
--It is used to enable the display of output from PL/SQL programs 
--that use DBMS_OUTPUT.PUT_LINE

DECLARE
    a number; 
    b number;
    experiment number := 2 ** 3; --2 raise to power 3
    answer number;

BEGIN
    a := &number1;  
    --accept a value : & symbol is used
    --At run time this will prompt as follows
    -- Enter a value for Number1:
    exp := '&experiment';  
    --‘ ‘ is used in case if entered data is not numeric
    b := &number2;
    answer := a + b;    -- := is assignment operator

    DBMS_OUTPUT.PUT_LINE('The sum of two numbers is ' || answer);   --To display on new line.
    --To join two strings: ||
    --Here dbms_output is a Oracle package its like header file or library in C language.
    --.Put and .Put_Line are functions like printf in ‘C’ language
    DBMS_OUTPUT.Put('   DONE');   -- To display on same line

END;
/