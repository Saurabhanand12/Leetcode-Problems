# Write your MySQL query statement below
select em2.name as Employee
from Employee as em1 
join Employee as em2
on em1.id = em2.managerID
where em1.salary < em2.salary

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna