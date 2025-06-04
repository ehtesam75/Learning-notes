--simple loop
--pre tested (means condition is checked first)

set serveroutput on;
DECLARE 
    i number := 5;

BEGIN
    loop
        exit when i = 10;
        dbms_output.put(i);
        i := i + 1;
    end loop;

    dbms_output.put_line('done');   
    --if I don't put 'put_line' in my code, the output is not shown
    --its bcuz when using dbms_output.put(), 
    --the output is buffered but not displayed until a line break occurs

END;
/


--simple loop
--post tested (means condtion will be checked after the code is executed)

set serveroutput on;
DECLARE 
    i number := 10;

BEGIN
    loop
        dbms_output.put_line(i);
        i := i + 1;
        exit when i = 15;
    end loop;

END;
/


--while loop
--pre tested

set serveroutput on;
DECLARE 
    i number := 15;

BEGIN
    while i  < 20
    loop    
        dbms_output.put_line(i);
        i := i + 1;
    end loop;

END;
/


--for loop
--pre tested
--This Loop is used when we know the number of time the loop is to be executed.

set serveroutput on;
DECLARE 
    i number;

BEGIN
    for i in 20 .. 25       --from 20 to 25 (.. is used)
    loop
        dbms_output.put_line(i);
    end loop;

END;
/


--for loop (reversed)
--pre tested
--This Loop is used when we know the number of time the loop is to be executed.

set serveroutput on;
DECLARE 
    i number;

BEGIN
    for i in reverse 20 .. 25     
    loop
        dbms_output.put_line(i);
    end loop;

END;
/
