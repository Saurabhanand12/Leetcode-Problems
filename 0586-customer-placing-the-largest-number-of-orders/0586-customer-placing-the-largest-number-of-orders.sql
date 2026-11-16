# Write your MySQL query statement below
with cte as (
    select *,count(*) as cus
    from Orders
    group by customer_number
    order by cus desc
)select customer_number 
from cte 
limit 1;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna