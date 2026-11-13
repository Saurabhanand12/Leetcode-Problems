with cte as (
    select * ,
    dense_rank() over(order by score desc) as `rank`
    from Scores
)
select score,`rank` from cte;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna