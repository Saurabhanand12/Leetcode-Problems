with cte as (
    select *,
    lag(num) over( order by id) as lg1,
    lag(num,2) over(order by id ) as lg2
    from Logs
)
select distinct num as ConsecutiveNums
from cte 
where num = lg1 and num = lg2;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna