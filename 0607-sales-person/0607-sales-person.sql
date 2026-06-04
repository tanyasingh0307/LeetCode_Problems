# Write your MySQL query statement below
Select name from SalesPerson where sales_id NOT IN (select o.sales_id from Orders o JOIN Company c on o.com_id=c.com_id where c.name= "RED");