set serveroutput on;
DECLARE
    marks number;

BEGIN
    marks := &number1;
    if marks < 30 then
        DBMS_OUTPUT.PUT_LINE('Failed');
    elsif marks < 60 and marks > 30 then
        DBMS_OUTPUT.PUT_LINE('Passed with medium marks');
    else
        DBMS_OUTPUT.PUT_LINE('Passed with good marks');
    end if;

END;
/