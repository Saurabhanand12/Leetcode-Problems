# Write your MySQL query statement below
SELECT
    s.product_id,
    f.first_year,
    s.quantity,
    s.price
FROM Sales s
join (
    select product_id , 
    MIN(year) as first_year,
    quantity ,price
    from Sales
    group by product_id
) f
on s.product_id = f.product_id
AND s.year = f.first_year;

    

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna