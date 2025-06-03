drop table student;
create table student(
    sid int,
    name varchar(50),
    dept_id int
);

insert into student values (1, 'Kamal', 5);

--pl sql block

set serveroutput on;
DECLARE
    --basic declaration
    variable_a number;
    b varchar2(20);

    --%type : auto takes the data type of table column
    v_name student.name%type;    --v_name is a variable name, student.name is a column name
    v_sid student.sid%type;

    --%rowtype : structure like the entire row of a table
    record student%rowtype;     --here record is a variable name


    --user defined data type
    type user_variable is varchar2(50);

    v_name1 user_variable;  --v_name1 is a variable name, user_variable is the user defined data type
    v_name2 user_variable;

BEGIN
    select name, sid into v_name, v_sid from student where sid = 1;
    DBMS_OUTPUT.PUT_LINE('USING %TYPE : ');
    DBMS_OUTPUT.PUT_LINE('name : ' || v_name);
    DBMS_OUTPUT.PUT_LINE('sid : ' || v_sid);

    select * into record from student where sid = 1;
    DBMS_OUTPUT.PUT_LINE('USING %ROWTYPE : ');
    DBMS_OUTPUT.PUT_LINE('sid : ' || record.sid);
    DBMS_OUTPUT.PUT_LINE('name : ' || record.name);
    DBMS_OUTPUT.PUT_LINE('dept_id : ' || record.dept_id);

END;
/
