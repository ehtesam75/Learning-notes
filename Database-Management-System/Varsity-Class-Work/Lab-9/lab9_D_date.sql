--note (from chatbot):
--DUAL table – a special table used for testing functions

-- Common DATE Functions

--| Function                 | What it does                | Example                                       |
--+--------------------------+-----------------------------+-----------------------------------------------+
--| SYSDATE                  | Shows current date and time | SELECT SYSDATE FROM dual;                     |
--| ADD_MONTHS(d, n)         | Adds months to date d       | ADD_MONTHS(SYSDATE, 6) -- 6 months later      |
--| TO_DATE('22-JUN-2025')   | Converts text to date       | Used when comparing or inserting              |
--| EXTRACT(YEAR FROM date)  | Gets the year part          | EXTRACT(YEAR FROM TO_DATE('22-JUN-2025'))     |
--| EXTRACT(MONTH FROM date) | Gets the month part         | EXTRACT(MONTH FROM TO_DATE('22-JUN-2025'))    |
--| GREATEST(date1, date2)   | Picks the later date        | GREATEST(date1, date2)                        |
--| LEAST(date1, date2)      | Picks the earlier date      | LEAST(date1, date2)                           |
--| LAST_DAY(date)           | Last day of the month       | LAST_DAY(TO_DATE('22-JUN-2025'))              |


--current date and time
select sysdate from dual;
-- SYSDATE
-- ---------
-- 25-JUN-25


--add or substract months
select add_months(sysdate, 3) as plus_3_months from dual;  --adds 3 months to current date
-- PLUS_3_MONTHS
-- -------------
-- 25-SEP-25

select add_months(sysdate, -3) as minus_3_months from dual; --goes back 3 months
-- MINUS_3_MONTHS
-- --------------
-- 25-MAR-25


--find later or earlier date
select greatest(sysdate, to_date('01-jan-2022', 'dd-mm-yyyy')) from dual;
-- GREATEST(
-- ---------
-- 25-JUN-25


--least date
select least(sysdate, to_date('01-jan-2022', 'dd-mm-yyyy')) from dual;
-- LEAST(   
-- ---------
-- 01-JAN-22


-- get year/month from date
select extract(year from sysdate) as current_year from dual;
-- CURRENT_YEAR
-- ------------
--         2025


--last day of the month
select last_day(sysdate) from dual;
-- LAST_DAY(
-- ---------
-- 30-JUN-25



