# Write your MySQL query statement below

select c.name as Customers
from Customers as c
left join Orders as o
on c.id = o.customerID
where o.customerID is NULL



-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna