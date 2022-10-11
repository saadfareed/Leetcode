Write an SQL query to report all customers who never order anything.

Return the result table in any order.
# Write your MySQL query statement below
select customers.name as 'Customers' from customers where customers.id not in (select customerid from orders)
