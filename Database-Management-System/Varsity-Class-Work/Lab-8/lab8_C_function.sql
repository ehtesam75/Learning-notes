-- function in pl sql

drop table products;

create table products (
    product_id number primary key,
    product_name varchar2(50),
    price number(10)
);

insert into products values (1, 'Pen', 10);
insert into products values (2, 'Notebook', 50);
insert into products values (3, 'Pencil', 5);
insert into products values (4, 'Eraser', 3);
insert into products values (5, 'Scale', 15);


-- function with no parameter
-- calculate the sum of total price of all products
create or replace function total_price return number is
    total products.price%type;
begin
    select sum(price) into total from products;
    return nvl(total, 0);
end;
/

set serveroutput on;
declare
    ans number;
begin
    ans := total_price;
    dbms_output.put_line('Total price is ' || ans);
end;
/
-- Total price is 83



-- fucntion with parameter
-- Create a function TOTAL_COST that takes price and quantity as parameters and 
-- returns their product, treating NULL as 0.
-- Show the total cost for buying 3 units of each product using this function 
-- in a SELECT statement on the PRODUCTS table.

create or replace function TOTAL_COST(
    price_var products.price%type,
    quantity int
    ) return number is
begin
    return nvl(price_var, 0) * nvl(quantity, 0);
end;
/

select product_name, TOTAL_COST(price, 3) as total_cost_for_3 from products;
    

-- PRODUCT_NAME                                       TOTAL_COST_FOR_3
-- -------------------------------------------------- ----------------
-- Pen                                                              30
-- Notebook                                                        150
-- Pencil                                                           15
-- Eraser                                                            9
-- Scale                                                            45