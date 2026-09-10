# Write your MySQL query statement below
select customer_id 
from Customer
group by customer_id 
having count(distinct  product_key) = (
    select count(*)
    from Product
);

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna