-- trigger in pl sql
-- A trigger is a PL/SQL block that executes when a particular event occurs.
-- TWO types of trigger
-- Application trigger: Runs when an app (like Oracle Forms) does something.
-- Database trigger: Runs when a table is changed (like insert, update, delete).


-- Write a PL-SQL code which will insert the data
-- automatically into 'Backup' table whenever data is deleted from 'Main' table
-- store the delation time timee 

drop table Main;
drop table Backup;

create table Main(
    id number,
    name varchar2(50)
);

create table Backup(
    id number,
    name varchar2(50),
    deleted_on date
);

insert into Main(id, name) values(6, 'Kamal');
insert into Main(id, name) values(7, 'Rahim');
insert into Main(id, name) values(8, 'Karim');

select * from Backup;
-- no rows selected

create or replace trigger store
after delete on Main
for each row
-- this create a trigger that fires after a row is deleted from Main 
begin
    insert into Backup(id, name, deleted_on) 
    values(:old.id, :old.name, sysdate);
    -- SYSDATE  returns the current date and time from the database server.
end;
/

delete from Main where id = 7;

select * from Backup;
-- now in backup:
--         ID NAME                                               DELETED_O
-- ---------- -------------------------------------------------- ---------
--          7 Rahim                                              25-JUN-25



-- Trigger Type: This is an AFTER DELETE trigger on the Main table.
-- :old : It holds the values of the row before the triggering event (INSERT, UPDATE, DELETE).
-- :new contains the values after the update.



-- Create a trigger to ensure the 'id' in the Backup table is always between 5.00 and 200.00.
-- If the value is outside this range, prevent the insert or update and raise an error.

create or replace trigger check_id before insert or update on Backup
for each row
declare
    id_max number(20) := 200;
    id_min number(20) := 5;
begin
    if :new.id > id_max or :new.id < id_min then
        raise_application_error(-20000, 'New id is too small or large');
        -- raise_application_error is a built-in Oracle procedure
        -- It manually throws an error so the action is cancelled.
        -- Error number must be from -20000 to -20999.
        -- Oracle reserves the error code range -20000 to -20999 for user-defined/custom errors
        -- Think of this range as a safe zone as It avoids conflicts with Oracle’s system errors.

        -- but Why use RAISE_APPLICATION_ERROR?
        -- cuz it’s the only allowed way to stop execution inside triggers with a custom message
    end if;
end;
/

insert into Backup(id, name, deleted_on) values(1, 'Test', sysdate);  --error
-- ORA-20000: New id is too small or large