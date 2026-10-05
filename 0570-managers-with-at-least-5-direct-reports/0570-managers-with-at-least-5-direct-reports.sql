# Write your MySQL query statement below
select  e.name
from Employee as e
join Employee as se
on e.id = se.managerId
group by e.id , e.name
having count(se.id) >= 5;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna