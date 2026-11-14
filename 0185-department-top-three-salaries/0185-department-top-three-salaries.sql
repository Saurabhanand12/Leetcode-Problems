# Write your MySQL query statement below
with cte as (
    select d.name as Department,e.name as Employee , e.salary as Salary
    from Employee as e
    left join Department as d
    on e.departmentId = d.id
), ct as (
  select * ,
dense_rank() over(partition by department order by salary desc) as sl
from cte
)
select Department , Employee , Salary from
ct
where sl <= 3


-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna